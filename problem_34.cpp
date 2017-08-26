/* 
Problem: Find the sum of all numbers which are equal to the sum of the factorial of their digits.
As 1! = 1 and 2! = 2 are not sums they are not included.
*/ 

#include <iostream>
#include <sstream>
#include <string>
using namespace std; 

template <typename T> string to_string(T val)
{
    stringstream stream;
    stream << val;
    return stream.str();
} 

bool is_sum_factorial(int num) 
{
	int factorials[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 3628880}; 
	int sum = 0; 
	string num_string = to_string(num); 
	for(int i = 0; i < num_string.length(); i++) 
	{
		sum += factorials[num_string[i] - '0']; 
	} 
	return num == sum; 
} 

int main(void) 
{
	int count = 0; 
	for(int i = 10; i < 1000000; i++) 
	{
		if(is_sum_factorial(i)) 
		{
			count += i; 
		}
	} 
	cout << count << endl; 
	return 0; 
} 


