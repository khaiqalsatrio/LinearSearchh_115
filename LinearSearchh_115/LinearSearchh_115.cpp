#include <iostream>
using namespace std;

int arr[20]; //Array to be searchead
int n; // Number of element in the array
int i; // index of array element


void input()
{
	while (true)
	{
		cout << "enter the number of element in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\narray should have minimum 1 and maximum 20 element. \n\n";
	}

	//accept array element
	cout << "\n----------------------\n";
	cout << "enter array elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}


void LinearSearch()
{
	char ch;
	int ctr; //number of comparisons

	do
	{
		//accept the number to be searchead
		cout << "\nenter the element you want to search: ";  //langkah no 1 algoritma
		int item;
		cin >> item;

		ctr = 0;
		for (i = 0; i < n; i++)								//langkah no 2 & 3 & 4
		{
			ctr++;
			if (arr[i] == item)								//langkah no 5 algoritma
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl;
				break;
			}
		}

		if (i == n)
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\ncontinue search (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}



int main()
{
