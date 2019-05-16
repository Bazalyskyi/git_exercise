
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
	int k = 1;
	int t = 0;
	vector<vector<int>> arr2(n);
	for (int i = 0; i < n; i++)
	{
		for (int t = 0; t < n; t++)
		{
			cin >> op;
			arr2[i].push_back(op);
		}
	}
	int lol1;
	int lol2;
	cin >> lol1;
	cin >> lol2;
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
	int suma = -1;
	arr1.push(lol1 - 1);
	flag[lol1 - 1] = false;
	if (lol1 == lol2)
	{
		cout << "0" << endl;
	}
	else
	{
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
				}
			}

		}
		if (final[lol2 - 1] == -1)
		{
			cout << -1;
		}
		else
		{
			t = lol2 - 1;
			for (int i = 0; i < n; i++)
			{
				endgame.push_back(final[t]);
				t = final[t];
				suma++;
				if (t == lol1 - 1)
				{
					break;
				}

			}
			cout << suma + 1 << endl;
			for (int i = endgame.size() - 1; i >= 0; i--)
			{
				cout << endgame[i] + 1 << " ";
			}
			cout << lol2;
		}
	}
}