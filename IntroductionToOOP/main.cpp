#include<iostream>
#include<cmath>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	double distance(Point other)
	{
		return sqrt(pow((this->x - other.x), 2) + pow((this->y - other.y), 2));
	}
	void print()
	{
		cout << "x = " << x << " y = " << y << endl;
	}
	//Constructor
//Point()
//{
//	x = y = 0;
//	cout << "Constructor:\t" << this << endl;
//}
//Point(double x)
//{
//	this -> x = x;
//	y = 0;
//	cout << "1ArgConstructor:\t" << this << endl;
//}
Point(double x = 0, double y = 0)
{
	this->x = x;
	this->y = y;
	cout << "Constructor:\t" << this << endl;
}
~Point()
{
	cout << "Destructor:\t" << this << endl;
}
};



double distance(Point A, Point B);

//#define STRUCT_POINT
//#define DISTANCE_CHECK

void main()
{
	setlocale(LC_ALL, "");

#ifdef STRUCT_POINT
	int a;
	Point A; //Объявление переменной "А" типа "Point"
			//Объявление объекта "A" типа "Point"
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif

#ifdef DISTANCE_CHECK
	Point A, B;
	A.set_x(2); A.set_y(3);
	B.set_x(7); B.set_y(8);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	cout << "Расстояние точки А до центра СК: " << A.distance(B) << endl;
	cout << B.get_x() << "\t" << B.get_y() << endl;
	cout << "Расстояние точки B до центра СК: " << B.distance(A) << endl << endl;
	cout << "Расстояние между точками А и В: " << distance(A, B) << endl;
	A.print();
	B.print();
#endif 

	Point A; //defaul constructor
	A.print();

	Point B = 5;
	B.print();
	Point C(2, 3);
	C.print();

}
double distance(Point A, Point B)
{
	return sqrt(pow((A.get_x() - B.get_x()), 2) + pow((A.get_y() - B.get_y()), 2));
}