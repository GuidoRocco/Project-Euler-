/* 
Problem: Find the smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, contain the same digits. 
*/ 

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T> string to_string(T val)
{
	stringstream stream;
	stream << val;
	return stream.str();
}

vector<string> create_multiple_string(int num)
{
	vector<int> int_num;
	vector<string> str_num;
	for (int i = 1; i < 7; i++)
	{
		int_num.push_back(num * i);
	}
	for (int i = 0; i < 6; i++)
	{
		string val = to_string(int_num[i]);
		str_num.push_back(val);
	}
	return str_num;
}

int main(void)
{
	int value; 
	vector<string> test_string;
	for (int i = 1; i < 1000000; i++)
	{
		test_string = create_multiple_string(i);
		string val = test_string[0];
		for (int j = 1; j < 6; j++)
		{
			if (!std::is_permutation(val.begin(), val.end(), test_string[j].begin(), test_string[j].end()))
			{
				break;
			}
			if (j == 5)
			{
				cout << val << endl; 
				cin >> value; 
				return 0;
			}
		}
	} 
	cin >> value; 
	return 0;
}


