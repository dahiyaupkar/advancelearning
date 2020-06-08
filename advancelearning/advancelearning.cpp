//#include<iostream>
//using namespace std;
//class Rectangle
//{
//	int length;
//	int breadth;
//public:
//	Rectangle(int l, int b);
//	Rectangle(Rectangle(&r));
//	void setLength(int l);
//	void setBreadth(int b);
//	int getLength();
//	int getBreadth();
//	int area();
//	inline int perimeter(); // This is the another way to make inline funcation(Just add inline Key in front of the funcation definition).
//	~Rectangle();
//};
////Constructor
//Rectangle::Rectangle(int l = 0, int b = 0)
//{
//	setLength(l);		//Why I call the setLength and setBreadth function: 
//	setBreadth(b);		//Reason: By default, I am passing Length and Breadth as a zero value to avoid mishandling of data.
//}
//Rectangle::Rectangle(Rectangle(&r)) // I use copy constructor to copy/duplicate above values.
//{
//	length = r.length;
//	breadth = r.breadth;
//}
////Mutator
//void Rectangle::setLength(int l)
//{
//	length = l;
//}
//void Rectangle::setBreadth(int b)
//{
//	breadth = b;
//}
////Accessor
//int Rectangle::getLength()
//{
//	return length;
//}
//int Rectangle::getBreadth()
//{
//	return breadth;
//}
////Area & Perimeter function
//int Rectangle::area()
//{
//	return length * breadth;
//}
//int Rectangle::perimeter()  
//{
//	return 2 * (length + breadth);
//}
//Rectangle::~Rectangle() {
//	cout << "Destroyed"<<endl;
//}
//
//
//int main()
//{
//	Rectangle r1(25,10);
//	Rectangle r2(r1);
//	cout << "Area of rectangle is : " << r1.area() << endl;
//	cout << "Perimeter of rectangle is : " << r1.perimeter() << endl;
//	cout << "Copy of above values: "<<"\nArea :" << r2.area()<<" Perimeter :"<<r2.perimeter()<<endl;
//}

//--------- Operator Overloading Program--------------------------------//
#include<iostream>
using namespace std;
class Complex
{
public:
	int real;
	int img;
	Complex(int r = 0, int i = 0)
	{
		real = r;
		img = i;
	}
	friend Complex operator+(Complex c1, Complex c2); // In this, I use friend function.(Remember the example, third person is doing your sum of two numbers. )\

	friend ostream&  operator <<(ostream& o, Complex &x);
};

Complex operator+(Complex c1, Complex c2) //In this you don't need to use scope resolution. It's a same function implemented below and It's another method of overloading operator.
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}

 ostream& operator<< (ostream& o, Complex &x)		//Insertion Operator Overloading
{
	o << x.real << "+i" << x.img << endl;
	return o;
}

int main()
{
	Complex c1(8, 20);
	Complex c2(6,10);
	Complex c3;
	c3 = c1 + c2;
	cout << c3.real << "+i" << c3.img << endl;

	cout << c3;			//Insertion Operator Overloading
}