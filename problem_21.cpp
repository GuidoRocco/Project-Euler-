/* 
Problem: Evaluate the sum of all the amicable numbers under 10000. 
The definition of amicable number is the following. Let d(n) be defined as the sum of proper divisors of n 
(numbers less than n which divide evenly into n). If d(a) = b and d(b) = a, where a ≠ b, then a and b are 
an amicable pair and each of a and b are called amicable numbers.
*/ 

#include <iostream> 
#include <algorithm> 
using namespace std; 

int sum_divisors(int num) 
{
	int i = 1; 
	int count = 0; 
	while(i < num) 
	{
		if(num % i == 0) 
		{
			count += i; 
		} 
		
		i++; 
	} 
	return count; 
}

bool is_amicable(int num) 
{
	int temp = sum_divisors(num); 
	return temp != num && sum_divisors(temp) == num;  
} 

int main(void) 
{
	int count = 220; 
	for(int i = 221; i < 10000; i++) 
	{
		if(is_amicable(i)) 
		  count += i; 
	} 
	cout << count << endl; 
	return 0; 
	} 


