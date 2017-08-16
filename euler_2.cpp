//Project Euler 2 

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
