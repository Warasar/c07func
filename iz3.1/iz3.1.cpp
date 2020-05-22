﻿/*Напишите рекурсивную функцию reverse(n), которая возвращает число с обратным порядком цифр относительно n. 
Если обращение n приводит к ведущим нулям, они игнорируются, например reverse(1900) равно 91. 
Напишите с использованием этой функции программу,которая вводит число n и выводит его обращение. 
Пример ввода:7405,правильный вывод:5047.*/
#include <iostream>
using namespace std;

double reverse(unsigned n) 
{
	int m = 0, l;
	while (n > 0) 
	{
		l = n % 10;
		n = n / 10;
		m = m * 10;
		m = m + l;
	}
	return m;
}
int main()
{
	int k;
	cin >> k;
	cout << reverse(k) << endl;
}