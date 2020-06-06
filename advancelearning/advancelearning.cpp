#include<iostream>
using namespace std;
class Rectangle
{
public:
	int length;
	int breadth;
	int area()
	{
		return length * breadth;
	}
	int perimeter()
	{
		return 2 * (length + breadth);
	}
};

int main()
{
	Rectangle r1;
	r1.length;
	r1.breadth;
	cout << "Area of rectangle is : " << r1.area() << endl;
	cout << "Perimeter of rectangle is : " << r1.perimeter() << endl;
	return 0;
}