/*2. Заданное натуральное число от 1 до 1999 вывести римскими цифрами.
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	cout << "Enter natural number from 1 to 1999 that you want to convert:" << endl;
	int iNum = 0;
	cin >> iNum;
	if (iNum > 1999 || iNum < 1) cout << "You have entered incorrect value";
	else
	{
		int digit = 0;
		int i = 0;
		int viDigits[4] = {0};
		do
		{
			digit = iNum % 10;
			iNum = iNum / 10;
			viDigits[3-i] = digit;
			i++;
		} while (iNum > 0);
		
		char chFinalnum[4] = {};
		int s1[30];
		i = 0;
		while (s1[i] != '\0') {   // цикл продолжается до конца строки s1

			if (i == 3) 
			{
				if (viDigits[i] == 1) s1 = "I";
				if (viDigits[i] == 2) s1 = "II";
				if (viDigits[i] == 3) s1 = "III";
				if (viDigits[i] == 4) s1 = "VI";
				if (s[i] == 5) s1 = "V";
				if (s[i] == 6) s1 = "IV";
				if (s[i] == 7) s1 = "IIV";
				if (s[i] == 8) s1 = "IIIV";
				if (s[i] == 9) s1 = "XI";
				i++;
			}

			if (i == 2) 
			{
				if (s[i] == 1) s1 = strcat(s1, "X");
				if (s[i] == 2) s1 = strcat(s1, "XX");
				if (s[i] == 3) s1 = strcat(s1, "XXX");
				if (s[i] == 4) s1 = strcat(s1, "LX");
				if (s[i] == 5) s1 = strcat(s1, "L");
				if (s[i] == 6) s1 = strcat(s1, "XL");
				if (s[i] == 7) s1 = strcat(s1, "XXl");
				if (s[i] == 8) s1 = strcat(s1, "XXXL");
				if (s[i] == 9) s1 = strcat(s1, "CX");
				i++;
			}

			if (i == 1) 
			{
				if (s[i] == 1) s1 = strcat(s1, "C");
				if (s[i] == 2) s1 = strcat(s1, "CC");
				if (s[i] == 3) s1 = strcat(s1, "CCC");
				if (s[i] == 4) s1 = strcat(s1, "DC");
				if (s[i] == 5) s1 = strcat(s1, "D");
				if (s[i] == 6) s1 = strcat(s1, "DC");
				if (s[i] == 7) s1 = strcat(s1, "DCC");
				if (s[i] == 8) s1 = strcat(s1, "DCCC");
				if (s[i] == 9) s1 = strcat(s1, "MC");
				i++;
			}

			if (i == 0) 
			{
				if (s[i] == 1) s1 = strcat(s1, "M");
				if (s[i] == 2) s1 = strcat(s1, "MM");
				if (s[i] == 3) s1 = strcat(s1, "MMM");
				if (s[i] == 4) s1 = strcat(s1, "MMMM");
				if (s[i] == 5) s1 = strcat(s1, "MMMMM");
				if (s[i] == 6) s1 = strcat(s1, "MMMMMM");
				if (s[i] == 7) s1 = strcat(s1, "MMMMMMM");;
				if (s[i] == 8) s1 = strcat(s1, "MMMMMMMM");
				if (s[i] == 9) s1 = strcat(s1, "MMMMMMMMM");
				i++;
			}

		}
		cout << "converted number:"  << endl;
		puts(s1);
	}
	return 0;
} */ 