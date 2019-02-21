

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	bool count = false;
	int arr1, arr2, k;
	cin >> arr1;
	cin >> arr2;
	if (arr1 < arr2)
	{
		k = arr1;
		arr1 = arr2;
		arr2 = k;
	}
	vector<int> myVector(arr1);
	vector<int> myVector2(arr2);
	for (int i = 0; i < arr1; i++)
	{
		cin >> myVector[i];
	}
	for (int i = 0; i < arr2; i++)
	{
		cin >> myVector2[i];
	}




	for (int i = 0; i < arr2; i++)
	{

		count = false;
		int l = 0, r = arr1 - 1;
		int bestIndex = arr1 - 1;
		while (l <= r)
		{
			int m = (l + r) / 2;
			if (myVector[m] == myVector2[i])
			{

				cout << "YES";
				cout << endl;
				count = true;
				break;

			}
			else if (myVector[m] > myVector2[i])
			{
				r = m - 1;
			}
			else
			{
				l = m + 1;
			}
		}
		if (count == false)
		{
			cout << "NO";
			cout << endl;
		}


	}




}





