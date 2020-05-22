/*Напишите рекурсивный вариант функции, определеющей, является ли подстрока строки s,начиающаяся в 
i-ми завершающаяся перед j-м символом,палиндромом.Функция должна быть реализована как 
boolisPalindrome(char* s, unsigned i, unsigned j).Напишите  спомощью этой функции программу,
которая вводит строку s, длины не превышающей 100, и отвечает на вопрос, является ли она палиндромом. 
Символы считать одинаковыми только при точном совпадении ('a'≠'A'),пробелы не игнорировать. */
#include <iostream>
#include <stdlib.h>
using namespace std;

bool isPalindrome(char* s, unsigned i, unsigned j) 
{
    if (i >= j - 1) return true;
    if (s[i] == s[j - 1]) 
    {
        return isPalindrome(s, i + 1, j - 1);
    }
    else return false;
}

int main() 
{
    char* p = new char[100];
    fgets(p, 100, stdin);
    unsigned i, j;
    cin >> i;
    cin >> j;
    cout << isPalindrome(p, i, j) << endl;
}