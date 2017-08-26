/* 
Problem: The arithmetic sequence, 1487, 4817, 8147, in which each of the terms increases by 3330, is unusual in two ways: 
(i) each of the three terms are prime  
(ii) each of the 4-digit numbers are permutations of one another.

There are no arithmetic sequences made up of three 1-, 2-, or 3-digit primes, exhibiting this property, 
but there is one other 4-digit increasing sequence.

What 12-digit number do you form by concatenating the three terms in this sequence? 

An auxiliary function are_perm_numbers is provided. This function checks if the the first number 
can be obtained from the second via permutation of its digits. 
*/ 

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
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


bool are_perm_numbers(int first, int second) 
{
	vector<int> first_digit_vec; 
	vector<int> second_digit_vec; 
	string first_string = to_string(first); 
	string second_string = to_string(second); 
	if(first_string.length() != second_string.length())
	{
		return false; 
	}
	for(int i = 0; i < first_string.length(); i++) 
	{
		first_digit_vec.push_back(first_string[i] - '0'); 
		second_digit_vec.push_back(second_string[i] - '0'); 
	} 
	sort(first_digit_vec.begin(), first_digit_vec.end()); 
	sort(second_digit_vec.begin(), second_digit_vec.end()); 
	return first_digit_vec == second_digit_vec; 
} 


int main(void) 
{
	vector<int> primes; 
	for(int i = 1000; i < 10000; i++) 
	{
		if(is_prime(i)) 
		{
			if(i != 1487 && i != 4817 && i != 8147) 
			{
				primes.push_back(i); 
			}
		} 	
	} 
	for(int i = 0; i < primes.size() - 2; i++) 
	{
		for(int step = 2; step < 5000; step++) 
		{
			int first = primes[i]; 
			int second = primes[i] + step; 
			int third = second + step; 
			if(are_perm_numbers(first, second) && are_perm_numbers(first, third) 
			   && are_perm_numbers(second, third)) 
			   {
			   	if((find(primes.begin(), primes.end(), second) != primes.end()) && 
				  (find(primes.begin(), primes.end(), third) != primes.end())) 
				  {
				  	cout << first << second << third << endl; 
			   	  return 0;
				  }
			   	  
			   }
		}
	}
	return 0; 	
} 

