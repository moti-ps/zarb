#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

void zarb(char *n1, char *n2, char *r)
{
	_strrev(n1);
	_strrev(n2);
	int i, j;
	for (i = 0; n1[i]; i++)
		for (j = 0; n2[j]; j++)
			r[i + j] += (n1[i] - '0')*(n2[j] - '0');

	for (i = 0; i<1000; i++)
	{
		r[i + 1] += r[i] / 10;
		r[i] %= 10;
	}

	for (i = 999; r[i] == 0; i--);

	for (; i >= 0; i--)
		r[i] += '0';

	_strrev(n1); //strrev is reverse string
	_strrev(n2);
	_strrev(r);

}
int main()
{
	char num1[500] = { 0 };
	char num2[500] = { 0 };
	char num3[1000] = { 0 };
	cout << "Enter num1:";
	cin >> num1;
	cout << "Enter num2:";
	cin >> num2;

	zarb(num1, num2, num3);
	cout << num3;
	//puts(num3);
	_getch();
	return 0;
}