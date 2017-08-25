/* 
Problem: 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? 
We will use the fact that 2520 is evenly divisible by all of the numbers from 1 to 20. We will sum 2520 to i 
since we want to preserve this divisibility property. 
*/ 

#include <iostream>
using namespace std; 

bool is_divisible(int first_num, int second_num) 
{
	return first_num % second_num == 0; 
} 

int main(void) 
{
	int num = 2520; 
	bool found = false; 
	int result = 0; 
	for(int i = 2520; i < 1000000000; i+=2520) 
	{
		for(int j = 11; j <= 20; j++) 
		{
		   if(!is_divisible(i, j)) 
		   {
		   	  break; 
		   } 
		   
		   if(j == 20) 
		   {
		   	  found = true; 
		   }
		} 
		
		if(found) 
		{
			result = i; 
			break; 
		}
	} 
	cout << result << endl; 
	return 0; 
 } 
 
