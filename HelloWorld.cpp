#include <iostream>
using namespace std;

class Shap {
public:
	virtual void calculateArea() = 0;
};
class Rectangle: public Shap {
private:
	double height;
	double width;
public:
	Rectangle(double height, double width) {
		this->height = height;
		this->width = width;
	}
	/*
	void calculateArea() {
		double area = height * width;
		cout << "The area of rectangle: " << area << endl;
	}
	*/
};

int main(){

	Rectangle r(5, 10);
	r.calculateArea();
	
	return 0;
}