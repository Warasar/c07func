/*Напишите рекурсивный вариант вычисления минимума целочисленного массива в виде функции int min(int* A, unsigned n),
находящей минимум среди первых n элементов массива A.Напишите с помощью этой функции программу,которая вводит число N,
динамически создает массив размера N, заполняет его с клавиатуры и выводит минимум массива. */
#include <iostream>
using namespace std;

int min(int* A, unsigned n) 
{
	if (n == 1) return A[0];
	else if (min(A, n - 1) < A[n - 1]) return min(A, n - 1);
	else return A[n - 1];
}
int main() 
{
	unsigned N;
	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++) 
	{
		cin >> A[i];
	}
	cout << min(A, N) << endl;
}
