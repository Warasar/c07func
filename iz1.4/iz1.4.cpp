/* Напишите функцию factorial(n),возвращающую факториал целоко неотрицательного числа n.
Напишите с использованием этой функции программу,которая вводит неотрицательные целые числа n,k(k⩽n), 
и выводит значение числа сочетаний по k из n элементов: Ck n= n! k!(n−k)!Пример ввода: 5 3 Правильный вывод:10 */
#include <iostream>
using namespace std;

float factorial(unsigned n) 
{
	long long p = 1;
	for (int i = 1; i <= n; i++)
	{
		p = p * i;
	}
	return p;
}
int main() 
{
	unsigned N, k;
	cin >> N;
	cin >> k;
	cout << factorial(N) / (factorial(k) * factorial(N - k)) << endl;
}