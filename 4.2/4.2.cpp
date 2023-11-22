/*2. Написать программу перевода вещественных чисел из шестнадцатеричной
системы счисления в двоичную.*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "");
    const int N = 10;
    char hex_num[N]="";
    cout << "Введите шестнадцатеричное число: ";
    cin.getline(hex_num,N);
    char bin_digit[30]="";

    for (int i = 0; i < strlen( hex_num ) ; i++) 
    {
        char hex_digit = hex_num[i];
        switch (hex_digit) {
        case '0': strcat(bin_digit,"0000"); break;
        case '1': strcat(bin_digit,"0001"); break;
        case '2': strcat(bin_digit,"0010"); break;
        case '3': strcat(bin_digit,"0011"); break;
        case '4': strcat(bin_digit,"0100"); break;
        case '5': strcat(bin_digit,"0101"); break;
        case '6': strcat(bin_digit,"0110"); break;
        case '7': strcat(bin_digit,"0111"); break;
        case '8': strcat(bin_digit,"1000"); break;
        case '9': strcat(bin_digit,"1001"); break;
        case 'A': strcat(bin_digit,"1010"); break;
        case 'B': strcat(bin_digit,"1011"); break;
        case 'C': strcat(bin_digit,"1100"); break;
        case 'D': strcat(bin_digit,"1101"); break;
        case 'E': strcat(bin_digit,"1110"); break;
        case 'F': strcat(bin_digit,"1111"); break;
        default:
            cout << "Ошибка: некорректный символ в шестнадцатеричном числе" << endl;
            return 1;
        }
    }
    cout << "Двоичное представление: " << bin_digit << endl;
    return 0;
}