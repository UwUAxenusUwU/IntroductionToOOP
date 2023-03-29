#include<iostream>
#include<cmath>
using namespace std;

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
		return sqrt(pow(x, 2) + pow(y, 2));
	}
};

double distance(Point A, Point B);

//#define STRUCT_POINT

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

	Point A, B;
	A.set_x(2); A.set_y(3);
	B.set_x(4); B.set_y(6);
	cout << A.get_x() << "\t" << A.get_y() << endl;
	cout << "Расстояние точки А до центра СК: " << A.distance(A.get_x(), A.get_y()) << endl;
	cout << B.get_x() << "\t" << B.get_y() << endl;
	cout << "Расстояние точки B до центра СК: " << B.distance(B.get_x(), B.get_y()) << endl << endl;
	cout << "Расстояние между точками А и В: "  << distance(A, B) << endl;
}
double distance(Point A, Point B)
{
	return sqrt(pow((A.get_x() - B.get_x()), 2) + pow((A.get_y() - B.get_y()), 2));
}