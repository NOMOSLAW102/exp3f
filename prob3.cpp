#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char arr[] = { 'e','n','g','1','9','0','7' };
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] > arr[j]) {
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	cout << "\nSize of array: " << sizeof(arr) / sizeof(arr[0]);

	_getch();
	return 0;
}