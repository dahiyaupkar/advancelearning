#include<iostream>
using namespace std;
class Rectangle
{
private:
	int length;
	int breadth;
public:
	//Mutator
	void setLength(int l)
	{
		length = l;
	}
	void setBreadth(int b)
	{
		breadth = b;
	}
	//Accessor
	int getLength()
	{
		length;
	}
	int getBreadth()
	{
		breadth;
	}
	//Area & Perimeter function
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
	r1.setLength(10);
	r1.setBreadth(20);
	cout << "Area of rectangle is : " << r1.area() << endl;
	cout << "Perimeter of rectangle is : " << r1.perimeter() << endl;
	return 0;
}