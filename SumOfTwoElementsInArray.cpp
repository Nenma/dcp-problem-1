// SumOfTwoElementsInArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

bool sumOfTwoElements(vector<int> list, int k) {
	for (int i = 0; i < list.size(); i++) {
		for (int j = 0; j < list.size(), j != i; j++) {
			if (list[i] + list[j] == k) {
				return true;
			}
		}
	}
	return false;
}

bool sumOfTwoElementsBonus(vector<int> list, int k) {
	int len = list.size() - 1;
	for (int i = 0; i < list.size(); i++) {
		if (len == i) {
			len--;
		}
		if (len == -1) {
			len = list.size() - 1;
			continue;
		}
		else if (list[i] + list[len] == k) {
			return true;
		}
		else {
			i--;
			len--;
		}
	}
	return false;
}

int main()
{
	vector<int> list = { 10, 15, 3 , 7 };
	cout << boolalpha << sumOfTwoElements(list, 17) << endl;
	cout << boolalpha << sumOfTwoElementsBonus(list, 17) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
