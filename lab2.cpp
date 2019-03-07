






#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr1;
	bool found = false;
	cin >> arr1;
	vector<int> myVector(arr1);
	for (int i = 0; i < arr1; i++)
	{
		cin >> myVector[i];
	}
	while (found == false)
	{
		found = true;
		for (int i = 1; i < arr1; i++)
		{
			if (myVector[i - 1] > myVector[i])
			{
				found = false;
				a = myVector[i - 1];
				myVector[i - 1] = myVector[i];
				myVector[i] = a;
			}
		}
	}
	for (int i = 0; i < arr1; i++)
	{
		cout << myVector[i];
		cout << " ";
	}
}





