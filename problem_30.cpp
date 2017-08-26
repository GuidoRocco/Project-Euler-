/* 
Problem: Find the sum of all the numbers that can be written as the sum of fifth powers of their digits. 
Such kind of numbers are also said to be narcissistic numbers. 
We will put 1000000 as an upper bound, since the sum of the 5-th powers of the digit of 999999 is smaller 
than the number itself. 
An auxiliary template function to_string() is provided. 
*/ 

#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
using namespace std; 

template <typename T> string to_string(T val)
{
    stringstream stream;
    stream << val;
    return stream.str();
} 

bool is_narcissistic(int num)
{
	string num_string = to_string(num); 
	int sum = 0; 
	for(int i = 0; i < num_string.length(); i++) 
	{
		sum += pow((num_string[i] - '0'), 5); 
	} 
	return num == sum; 
} 

int main(void) 
{
	vector<int> narc_vec; 
	int sum_vec = 0; 
	for(int i = 11; i < 1000000; i++) 
	{
		if(is_narcissistic(i)) 
		{
			narc_vec.push_back(i); 
		} 
	} 
	
	for(int i = 0; i < narc_vec.size(); i++) 
	{
		sum_vec += narc_vec[i]; 
		cout << narc_vec[i] << endl; 
	} 
	cout << endl; 
	cout << "The sum of all numbers is: " << sum_vec << endl; 
	return 0; 
} 

