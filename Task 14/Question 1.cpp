#include <iostream>
using namespace std;

class LinkedList {
private:
	struct Node {
		int item;
		Node* next;
	};
	int length;
	Node* right;
	Node* left;
public:
	LinkedList() {
		length = 0;
		right = left = NULL;
	}
	void addValue(int value) {
		Node* n = new Node;
		n->item = value;
		n->next = NULL;
		if (length == 0) {
			right = left = n;
		}
		else {
			right->next = n;
			right = n;
		}
		length++;
	}
	void isEmpty() {
		if (length == 0) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	void display() {
		Node* x = left;
		while (x != NULL) {
			cout << x->item << " ";
			x = x->next;
		}
	}
	void search(int value) {
		Node* x = left;
		bool found = false;
		while (x != NULL) {
			if (x->item == value) {
				found = true;
				break;
			}
			else {
				x = x->next;
			}
		}
		if (found) {
			cout << "Found" << endl;
		}
		else {
			cout << "Not Found" << endl;
		}
	}
	void remove(int value) {
		Node* x = left->next;
		Node* y = left;
		if (y->item == value) {
			left = x;
			delete y;
			length--;
			return; 
		}
		bool found = false;
		while (x != NULL) {
			if (x->item == value) {
				y->next = x->next;
				x->next = NULL;
				delete x;
				length--;
				break;
			}
			else {
				y = x;
				x = x->next;
			}
		}
	}
};

int main(){

	LinkedList l;
	l.addValue(10);
	l.addValue(20);
	l.addValue(30);
	l.addValue(40);
	cout << "Is empty: ";
	l.isEmpty();
	cout << endl;

	l.addValue(50);

	cout << "Display: ";
	l.display();
	cout << endl;

	cout << "Search: ";
	l.search(30);
	cout << endl;

	l.remove(20);

	cout << "Display: ";
	l.display();
	return 0;
}
