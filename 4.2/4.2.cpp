/*2. Написать программу перевода вещественных чисел из шестнадцатеричной
системы счисления в двоичную.*/
#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "");
    const int N = 40;
    char hex_num[N]="";
    cout << "Введите шестнадцатеричное число: ";
    cin.getline(hex_num,N);
    char bin_digit[160]="";

    for (int i = 0; i < strlen( hex_num ) ; i++) 
    {
        char hex_digit = hex_num[i];
        switch (hex_digit) {
        case '0': strcat_s(bin_digit,"0000"); break;
        case '1': strcat_s(bin_digit,"0001"); break;
        case '2': strcat_s(bin_digit,"0010"); break;
        case '3': strcat_s(bin_digit,"0011"); break;
        case '4': strcat_s(bin_digit,"0100"); break;
        case '5': strcat_s(bin_digit,"0101"); break;
        case '6': strcat_s(bin_digit,"0110"); break;
        case '7': strcat_s(bin_digit,"0111"); break;
        case '8': strcat_s(bin_digit,"1000"); break;
        case '9': strcat_s(bin_digit,"1001"); break;
        case 'A': strcat_s(bin_digit,"1010"); break;
        case 'B': strcat_s(bin_digit,"1011"); break;
        case 'C': strcat_s(bin_digit,"1100"); break;
        case 'D': strcat_s(bin_digit,"1101"); break;
        case 'E': strcat_s(bin_digit,"1110"); break;
        case 'F': strcat_s(bin_digit,"1111"); break;
        case ',': strcat_s(bin_digit, ","); break;
        default:
            cout << "Ошибка: некорректный символ в шестнадцатеричном числе" << endl;
            return 0;
        }
    }
    cout << "Двоичное представление: " << bin_digit << endl;
    return 0;
}