/* 
Problem: The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.
How many circular primes are there below one million?
*/ 

#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

template <typename T> string to_string(T val)
{
    stringstream stream;
    stream << val;
    return stream.str();
} 


bool is_prime(int n) 
{
	int count = 0; 
	for(int i = 1; i < n; i++) 
	{
		if(n % i == 0) 
		  count++; 
	} 
	
	return count == 1; 
} 

 
bool is_circular(int num) 
{
	string num_string = to_string(num); 
	for(int i = 0; i < num_string.length(); i++) 
	{
		string string_to_check = num_string.substr(i).append(num_string.substr(0, i)); 
		if(!is_prime(std::stoi(string_to_check))) 
		{
			return false; 
		}
	} 
	return true; 
 } 


int main(void) 
{
	int count = 13; 
	int val; 
	for(int i = 10; i < 1000000; i++) 
	{
		if(is_circular(i) && is_prime(i)) 
		{
			count++; 
		}
	} 
	cout << count << endl; 
	cin >> val; 
	return 0; 
} 
 
 
 
