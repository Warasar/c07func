/*Напишите функцию double dist(x1, y1, x2, y2), которая принимает вещественные декартовы координаты двух точек
на плоскости и возвращает расстояние между ними. Напишите с ее помощью программу, которая вводит вещественные 
координаты x1, y1, x2, y2, x3, y3 трех точек на плоскости и выводит длину самой длинной стороны треугольника
с вершинами в этих точках,или–1,если такого треугольника не существует. Примерввода:0 0 6 0 3 2,правильный вывод 6.*/
#include <iostream>
using namespace std;

double power(double m, double k) 
{
	return (m - k) * (m - k);
}

double dist(double x1, double y1, double x2, double y2) 
{
	return sqrt(power(x1, x2) + power(y1, y2));
}

int main()
{
	double x1, y1, x2, y2, x3, y3, max;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	max = dist(x1, y1, x2, y2);
	if ((dist(x1, y1, x2, y2) + dist(x1, y1, x3, y3) > dist(x2, y2, x3, y3)) || (dist(x1, y1, x2, y2) + dist(x2, y2, x3, y3) > dist(x1, y1, x3, y3)) || (dist(x2, y2, x3, y3) + dist(x1, y1, x3, y3) > dist(x1, y1, x2, y2))) {
		if (dist(x1, y1, x3, y3) > max) max = dist(x1, y1, x2, y2);
		if (dist(x2, y2, x3, y3) > max) max = dist(x2, y2, x2, y2);
		cout << max << endl;
	}
	else cout << "-1" << endl;
}