// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <queue>
#include <string>
using namespace std;


int main()
{
	queue<int> dataStack;
	bool found = true;
	int size = 0;
	while (found == true) {
		string operation;
		cin >> operation;
		if (operation == "push") {
			int value;
			cin >> value;
			dataStack.push(value);
			size++;
			cout << "ok" << endl;
		}
		if (operation == "pop") {
			cout << dataStack.front() << endl;
			dataStack.pop();
			size--;
		}
		if (operation == "front") {
			cout << dataStack.front() << endl;

		}
		if (operation == "size") {
			cout << size << endl;
		}
		if (operation == "clear") {
			while (size > 0)
			{
				dataStack.pop();
				size--;
			}
			cout << "ok" << endl;
		}
		if (operation == "exit") {
			found = false;
			cout << "bye" << endl;
		}


	}

}
