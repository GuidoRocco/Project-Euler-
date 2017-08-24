/* 
Problem: What is the 10 001st prime number? 
*/ 
#include <iostream> 
#include <algorithm> 
using namespace std; 

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

int main(void) 
{
	int prime_number = 2; 
	int count = 1; 
	int i; 
	for(i = 3; ; i++) 
	{
		if(is_prime(i)) 
		  count++; 
		if(count == 10001) 
		  break; 
	} 
	cout << i << endl; 
	return 0; 
	} 


