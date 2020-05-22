/* 1. Напишите функцию возведения вещественного числа в целую неотрицательную степень double
power(double x, unsigned k), которая вычисляет xk.Напишите с ее помощью программу,которая
вводит целое значение показателя степени m,и выводит через пробел m-ые степени чисел 1,2,…,10.
Заголовочные файлы math.h/cmath неиспользовать. Пример ввода:2,правильный вывод 1 4 9 16 25 36 49 64 81 100.*/
#include <iostream>
using namespace std;

double power(double x, unsigned k) 
{
	double p = 1;
	for (unsigned j = 0; j < k; j++) 
	{
		p = p * x;
	}
	return p;
}
int main() 
{
	unsigned m;
	cin >> m;
	for (int i = 1; i <= 10; i++) 
	{
		cout << power(i, m) << " ";
	}
}