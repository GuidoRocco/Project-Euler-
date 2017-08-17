/* 
Project Euler 4 
Problem: Find the largest palindrome made from the product of two 3-digit numbers. 
We will check the numbers from 10000 ( = 100 * 100) to 998001 ( = 999 * 999). 
*/ 

#include <iostream> 
#include <string> 
#include <sstream> 
using namespace std; 

bool is_palindrome(int n) 
{
	stringstream out; 
	out << n; 
	string num = out.str(); 
	for(int i = 0; i < num.size() - 1; i++) 
	{
		if(num[i] != num[num.size() - i - 1]) 
		  return false; 
     } 

   return true; 
} 

int main(void) 
{
    int largest_palindrome = 1; 
    int prod; 
    for(int i = 100; i < 1000; i++) 
    {
    	for(int j = 100; j < 1000; j++) 
    	{
    		prod = i * j; 
    		if(is_palindrome(prod)) 
    		  largest_palindrome = prod; 
		}
	} 
	cout << largest_palindrome << endl; 
	return 0; 
} 



