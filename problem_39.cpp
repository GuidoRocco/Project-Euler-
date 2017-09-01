/* 
Problem: If p is the perimeter of a right angle triangle with integral length sides, {a,b,c}, 
there are exactly three solutions for p = 120, namely 

{20,48,52}, {24,45,51}, {30,40,50}

For which value of p ≤ 1000, is the number of solutions maximised?
*/ 

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std; 

int main(void) 
{
	map<int, int> perimeters; 
	for(int i = 0; i <= 10000; i++) 
	{
		perimeters[i] = 0; //Initializes the map 
	} 
	for(int i = 0; i < 1000; i++) 
	{
		for(int j = 0; j < 1000; j++) 
		{
			for(int k = 0; k < 1000; k++) 
			{
				if((i * i + j * j) == k * k) 
				{
					int result = i + j + k; 
					perimeters[result]++; 
				}
			}
		}
	} 
	int max_res = 0; 
	int p_result = 0; 
	for(int i = 0; i < perimeters.size(); i++) 
	{
		if(i > 1000) 
		  break; 
		if(perimeters[i] >= max_res) 
		   {
		   	  max_res = perimeters[i]; 
		   	  p_result = i; 
		   } 
	} 
	cout << p_result << endl; 
	return 0; 
} 



