#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>


using namespace std;

void margeSort(vector<int>&myVector, int l, int r)
{
	if (l == r)
	{
		return;
	}
	int m = (l + r) / 2;
	margeSort(myVector, l, m);
	margeSort(myVector, m + 1, r);
	int point1 = l;
	int point2 = m + 1;
	vector<int> res;
	for (int i = 0; i < r - l + 1; ++i)
	{
		if ((point1 <= m) && ((point2 > r) || (myVector[point1] < myVector[point2])))
		{
			res.push_back(myVector[point1]);
			point1++;

		}
		else
		{
			res.push_back(myVector[point2]);
			point2++;
		}

	}

	for (int i = 0; i < res.size(); i++)
	{
		myVector[i + l] = res[i];
	}
}

int main()
{
	int arr1;
	cin >> arr1;
	vector<int> myVector(arr1);
	for (int i = 0; i < arr1; i++)
	{
		cin >> myVector[i];
	}
	margeSort(myVector, 0, arr1 - 1);
	for (int i = 0; i < arr1; i++)
	{
		cout << myVector[i];
		cout << " ";
	}
}