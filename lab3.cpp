
#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>


using namespace std;

void quickSort(vector<int>&myVector, int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int i = l - 1;
	int j = r + 1;
	int luck = rand() % (r - l + 1) + l;
	int pivot = myVector[luck];
	while (true)
	{
		do {
			i++;
		} while (myVector[i] < pivot);
		do {
			j--;
		} while (myVector[j] > pivot);
		if (i >= j)
		{
			break;
		}
		swap(myVector[i], myVector[j]);
	}

	quickSort(myVector, l, j);
	quickSort(myVector, j + 1, r);
}

int main()
{
	int arr1;
	int a, b;
	bool found = true;
	cin >> arr1;
	vector<int> myVector(arr1);
	for (int i = 0; i < arr1; i++)
	{
		cin >> myVector[i];
	}
	int l = 0;
	int r = arr1 - 1;
	int j = r;
	int luck = rand() % arr1;
	int pivot = myVector[luck];
	quickSort(myVector, l, j);
	quickSort(myVector, j + 1, r);
	for (int i = 0; i < arr1; i++)
	{
		cout << myVector[i];
		cout << " ";
	}
}
