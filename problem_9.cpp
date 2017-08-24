/* 
Problem: There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/ 

#include <iostream> 
#include <cmath>
#include <algorithm> 
using namespace std; 


int main(void) 
{
	int per = 1000; 
	for(int i = 1; i < 1000; i++) 
	{
		for(int j = 1; j < 1000; j++) 
		{
			int k = 1000 - i - j; //This computes the third side given the perimeter 
			if(i*i + j*j == k*k) 
			{
				cout << i * j * k << endl; 
				return 0; 
			}
		
	    }                        
		
	}
	return 0; 
} 

