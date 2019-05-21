
#include<conio.h>
#include <iostream>

using namespace std;

int main()
{
	char arr[] = { 'e','n','g','1','9','0','7' };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int size = end + 1;
	while (start < end)
	{
		char temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i];
	}
	cout << "\nSize of array: " << sizeof(arr) / sizeof(arr[0]) << endl;
	_getch();
	return 0;
}



