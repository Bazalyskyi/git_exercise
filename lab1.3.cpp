



#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int arr1, arr2;
	int a, b;
	a = 0;
	b = 0;
	int res = -1, res2;
	cin >> arr1;
	vector<int> myVector(arr1);
	cin >> arr2;
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
		res = -1;
		int l = 0, r = arr1 - 1;
		int bestIndex = arr1 - 1;


		while (l <= r)
		{
			int m = (l + r) / 2;
			if (myVector[m] == myVector2[i])
			{

				res = m;
				r = m - 1;

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
		l = 0, r = arr1 - 1;
		while (l <= r)
		{
			int m = (l + r) / 2;
			if (myVector[m] == myVector2[i])
			{

				res2 = m;
				l = m + 1;

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
		if (res != -1)
		{
			res++;
			res2++;
			cout << res;
			cout << " ";
			cout << res2;
			cout << endl;
		}
		else
		{
			cout << "0";
			cout << endl;
		}


	}
}





