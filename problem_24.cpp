/* 
Problem: What is the millionth lexicographic permutation of the digits 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9?
*/ 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(void) 
{
	vector<string> perm_vec; 
	string string_to_permute = "0123456789"; 
	do 
	{
		perm_vec.push_back(string_to_permute); 
	} 
	while(next_permutation(string_to_permute.begin(), string_to_permute.end())); 
	cout << perm_vec[999999] << endl; 
	return 0; 
} 


