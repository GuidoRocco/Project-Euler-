/* 
Project Euler 2 
Problem: Each new term in the Fibonacci sequence is generated by adding the previous two terms. 
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/ 

#include <iostream> 
using namespace std; 

int main(void) 
{
	int first = 1, second = 2, count = 2, sum = 0; 
	int temp; 
	int upper_bound = 4000000; 
	while(second <= upper_bound) 
	{
		if(count % 2 == 0) 
		  sum += second; 
	    temp = first; 
	    first = second; //Dinamic computation of the Fibonacci sequence. 
	    second = first + temp; 
	    count ++; 
	} 
	sum += second; 
	cout << sum << endl; 
	return 0; 
} 
