/*Kelsey Benjamin
2/16/19
Sorting an array using selection sort function*/
#include <iostream>
using namespace std;
void bubSort(int a[], int);

int main()
{
	//declaration
	int i;
	int a[20];
	//Labeling
	cout << "Before Sorting" << endl;
	//Assign Random Integers
	for (i = 0; i < 20; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << " ";
	}
	//call sorter
	bubSort(a, 20);
	//print sorted list
	cout << endl << "After Sorting" << endl;
	for (i = 0; i < 20; i++)
		cout << a[i] << " ";

	system("pause");
	return 0;
}
	void bubSort(int a[], int size)
	{
		int i, j, temp;
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}

		}
	}