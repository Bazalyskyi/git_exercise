
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int a;
	int c;
	int b = 0;
	cin >> a;
	vector<int> myVector(a );
	for (int i = 0; i < a ; i++)
	{
		cin >> c;
		myVector[i] = c;
	}
	cin >> c;
	for (int i = 0; i < a; i++)
	{
		if (c == myVector[i])
		{
			b++;
		}
	}
	cout << b;
}