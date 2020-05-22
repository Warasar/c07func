/* Напишите функцию angle(x,y,z), которая дает угол, противолежащий стороне z в треугольнике состоронами x,y,z.
Напишите с использованием этой функции программу,которая вводит вещественные длины 
трех сторон треугольника и выводит углы,противолежащие сторонам в том же порядке, 
в градусах c фиксированной точностью 1 знак после десятичной точки. Примерввода:1 1 1.4142 Правильныйвывод:45.0 45.0 90.0*/
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;

double power(double m) 
{
	return m * m;
}

float angle(double x, double y, double z) 
{
	double p;
	p = acos((power(x) + power(y) - power(z)) / (2 * x * y));
	return p * 180.0 / M_PI;
}
int main() 
{
	float a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << fixed << setprecision(1) << angle(c, b, a) << " " << angle(a, c, b) << " " << angle(a, b, c) << endl;
}
