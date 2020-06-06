#include<iostream>
using namespace std;
class Rectangle
{
	int length;
	int breadth;
public:
	//Constructor
	Rectangle(int l=0,int b=0)
	{
		setLength(l);		//Why I call the setLength and setBreadth function: 
		setBreadth(b);		//Reason: By default, I am passing Length and Breadth as a zero value to avoid mishandling of data.
	}
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
	Rectangle r1(25,10);
	cout << "Area of rectangle is : " << r1.area() << endl;
	cout << "Perimeter of rectangle is : " << r1.perimeter() << endl;
	return 0;
}