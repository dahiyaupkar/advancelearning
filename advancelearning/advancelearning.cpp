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
	Rectangle(Rectangle(&r)) // I use copy constructor to copy/duplicate above values.
	{
		length = r.length;
		breadth = r.breadth;
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
	Rectangle r2(r1);
	cout << "Area of rectangle is : " << r1.area() << endl;
	cout << "Perimeter of rectangle is : " << r1.perimeter() << endl;

	cout << "Copy of above values: "<<"\nArea :" << r2.area()<<" Perimeter :"<<r2.perimeter()<<endl;
}