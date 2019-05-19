#include<iostream>
#include <conio.h>

using namespace std;
int main()
{
	int arr[10], i; 
	float max, min, sumone = 0, sumtwo = 0, avg, size;


	cout << "Enter 10 numbers " << endl;

	for (i = 0; i < 10; i++)
	cin >> arr[i];



	for (i = 0; i < 10; i++)
	{
		sumone += arr[i];

	}
	size = sizeof(arr) / sizeof(arr[0]);
	avg = 0;



	for (int i = 0; i < size; i++)
	{
		sumtwo += arr[i];
	}
	avg = sumtwo / size;




	max = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	min = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}

	cout << "Largest number: " << max << endl;
	cout << "Smallest number: " << min << endl;
	cout << "Sum of all numbers: " << sumtwo << endl;
	cout << "Average of all numbers: " << avg;


	{
		_getch();
		return 0;
	}
}