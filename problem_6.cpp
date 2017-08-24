/* 
Problem: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum. 
For the square of the sum, we firstly compute the sum of all the integers between 1 and 100 using the well-known formula 
n(n+1)/2, which in the special case of n = 100 is equal to 5050. Then, we compute the result, using an auxiliary function 
sum_of_squares(int) which computes the sum of the squares between 1 and 100.  
*/ 

#include <iostream> 
#include <cmath>
using namespace std; 

int sum_of_squares(int bound) 
{
	int count = 1; 
	for(int i = 2; i <= bound; i++) 
	{
		count += (i * i); 
	} 
	return count; 
}

int main(void) 
{
	int result = (5050 * 5050) - sum_of_squares(100); 
	cout << result << endl; 
	return 0; 
	} 


