// ch17algorithms.cpp
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//Write a template function to display a vector, which takes the beginning iterator and the ending iterator for the vector. Use this function to display both the string vector and the integer vector.

template <typename T>
void displayVector(vector<T>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{

	cout << "Ch 17 Algorithms by Kevin Bell\n\n";
	//Create a vector of strings by asking the user for words to push into the vector, in a loop that ends when the user enters a sentinel value.

	vector<string> v1;
	string word;
	cout << "Enter a word to add to the vector, or enter 'y' to stop: ";
	cin >> word;
	while (word != "y")
	{
		v1.push_back(word);
		cout << "Enter a word to add to the vector, or enter 'y' to stop: ";
		cin >> word;
	}
	cout << endl;
	cout << "Vector of strings";
	cout << endl;
	cout << "The vector contains: ";
	displayVector(v1);
	cout << endl;
	//search for specific strings in the vector in a loop
	string search;
	cout << "Enter a word to search for in the vector, or enter 'y' to stop: ";
	cin >> search;
	while (search != "y")
	{
		for (int i = 0; i < v1.size(); i++)
		{
			if (v1[i] == search)
			{
				cout << "The word " << search << " was found in the vector." << endl;
				break;
			}
			else if (i == v1.size() - 1)
			{
				cout << "The word " << search << " was not found in the vector." << endl;
			}
		}
		cout << "Enter a word to search for in the vector, or enter 'y' to stop: ";
		cin >> search;
	}
	cout << endl;
	//Create a vector of integers by asking the user for the number of values, creating that many random numbers, and pushing those values into the vector. The range for the random numbers should be 10 times the number of values. For example, if the user said to work with 7 numbers, the range is (7 * 10), so the random numbers should range from 1 to 70.
	
	vector<int> v2;
	int num;
	cout << "Enter the number of random numbers to add to the vector: ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		v2.push_back(rand() % (num * 10) + 1);
	}
	cout << endl;
	cout << "The vector contains: ";
	displayVector(v2);
	cout << endl;
	//display sorted vector
	sort(v2.begin(), v2.end());
	cout << "The sorted vector contains: ";
	displayVector(v2);
	cout << endl;
	//the smallest value in the vector
	cout << "The smallest value in the vector is: " << v2[0] << endl;
	//the largest value in the vector
	cout << "The largest value in the vector is: " << v2[v2.size() - 1] << endl;
	cout << endl;
	cout << "What value would you like to search for in the vector? Or enter '-1' to stop: ";
	int search2;
	cin >> search2;
	while (search2 != -1)
	{
		for (int i = 0; i < v2.size(); i++)
		{
			if (v2[i] == search2)
			{
				cout << "The value " << search2 << " was found in the vector." << endl;
				break;
			}
			else if (i == v2.size() - 1)
			{
				cout << "The value " << search2 << " was not found in the vector." << endl;
			}
		}
		cout << "What value would you like to search for in the vector? Or enter '-1' to stop: ";
		cin >> search2;
	}
	cout << endl;
	system("pause");
	return 0;
} //end main function
