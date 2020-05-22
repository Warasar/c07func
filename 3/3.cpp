/*Напишите функцию unsigned word_end(char* s, unsigned i),которая принимает строку s,состоящую из одних
латинских букв и пробелов,и индекс i в ней(0⩽i<strlen(s)).Функция должна возвращать индекс символа, 
следующего за последним символом слова, которому принадлежит символ s[i].Напишите с помощью этой функции программу,
которая вводит число k,затем строку,состоящую из одних латинских букв и пробелов,и выводит
k - е слово строки(считая с 1). Примеры. Для строкиs = "This is fine"значение word_end(s, 0) равно 4,значение
word_end(s, 9)равно 12. Дляk=3 стаким s программа должна ответить fine.*/
#include <iostream>
#include <stdlib.h>
using namespace std;

unsigned word_end(char* s, unsigned i) 
{
	if (s[i] == 0 || s[i] == ' ') 
	{
		return i;
	}
	return word_end(s, i + 1);
}

int main() 
{
	int m = 0, n, i = 0;
	char* p = new char[100];
	fgets(p, 100, stdin);
	unsigned k;
	cin >> k;
	if (k == 1) 
	{
		while (p[i] != ' ')
		{
			cout << p[i];
			i++;
		}
		return 0;
	}
	while (m != k - 1) 
	{
		if (word_end(p, i) == i) m++;
		n = i + 1;
		i++;
	}
	while (p[n] != ' ' && p[n] != '\n')
	{
		cout << p[n];
		n++;
	}
}