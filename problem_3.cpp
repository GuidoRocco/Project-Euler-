/* 
Project Euler 3 
Problem: What is the largest prime factor of the number 600851475143 ? 

*/ 
#include <iostream> 
using namespace std; 

bool is_prime(long long n) 
{
	long count = 0; 
	for(long long i = 1; i < n; i++) 
	{
		if(n % i == 0) 
		  count++; 
	} 
	
	return count == 1; 
} 

long long largest_prime_factor(long long n) 
{
	long long max_prime_factor = 1; 
	for(long long i = 1; i <= n; i++) 
	{
		if(is_prime(i) && ((n % i) == 0)) 
		  {
		     max_prime_factor = i; 
		     n/=i; //If i is a prime factor of n, we divide n by i and continue the process. 
		 }        //The last factor will be the maximum prime factor of our number 
	} 
	
	return max_prime_factor; 
}
int main(void) 
{
	long long num = 600851475143; 
	cout << largest_prime_factor(num) << endl; 
	return 0; 
} 

