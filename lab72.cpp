

#include <iostream>
#include <vector>
#include <queue>

using namespace std;


int main()
{
	int n;
	int op;
	cin >> n;
	queue<int> arr1;
	int lol1;
	cin >> lol1;
	int t ;
	vector<vector<int>> arr2(n);
	for (int i = 0; i < n; i++)
	{
		for (int t = 0; t < n; t++)
		{
			cin >> op;
			arr2[i].push_back(op);
		}
	}
	vector<bool>flag;
	for (int i = 0; i < n; i++)
	{
		flag.push_back(true);
	}
	vector<int>endgame;
	vector<int>final;
	for (int i = 0; i < n; i++)
	{
		final.push_back(-1);
	}
	int suma = 1;
	arr1.push(lol1 - 1);
	flag[lol1 - 1] = false;

	while (arr1.size() > 0)
	{
		t = arr1.front();
		arr1.pop();
		for (int i = 0; i < n; i++)
		{
			if (arr2[t][i] != 0 && flag[i] == true)
			{
				flag[i] = false;
				arr1.push(i);
				final[i] = t;
				suma++;
			}
		}

	}

	cout << suma << endl;

}
