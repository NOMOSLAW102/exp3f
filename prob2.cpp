#include <iostream>
#include <conio.h>
using namespace std;

const int prov = 3;
const int week = 7;
char p;

int main()
{
	int temperature[prov][week];

	cout << "Enter all temperature for a week of Province A, Province B and then Province C.\n";


	for (int i = 0; i < prov; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			if (i == 0) p = 'A';
			else if (i == 1) p = 'B';
			else p = 'C';
			cout << "Province " << p << ", Day " << j + 1 << " : ";
			cin >> temperature[i][j];
		}
	}


	cout << "\n\nDisplaying Values:\n";


	for (int i = 0; i < prov; ++i)
	{
		for (int j = 0; j < week; ++j)
		{
			if (i == 0) p = 'A';
			else if (i == 1) p = 'B';
			else p = 'C';
			cout << "City " << p << ", Day " << j + 1 << " = " << temperature[i][j] << endl;
		}
	}
	_getch();
	return 0;
}
