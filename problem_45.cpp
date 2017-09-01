/* 
Problem: Find the next triangle number that is also pentagonal and hexagonal. 
*/ 

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std; 

vector<unsigned long long> create_pentagonal_sequence(int size) 
{
	vector<unsigned long long> pent_vec; 
	for(unsigned long long i = 1; i < size; i++) 
	{
		unsigned long long val = (i * (3 * i - 1)) / 2; 
		pent_vec.push_back(val); 
	} 
	return pent_vec; 
} 

vector<unsigned long long> create_hexagonal_sequence(int size) 
{
	vector<unsigned long long> hex_vec; 
	for(unsigned long long i = 1; i < size; i++) 
	{
		unsigned long long val = i * (2 * i - 1); 
		hex_vec.push_back(val); 
	} 
	return hex_vec; 
} 

vector<unsigned long long> create_triangular_sequence(int size) 
{
	vector<unsigned long long> tri_vec; 
	for(unsigned long long i = 1; i < size; i++) 
	{
		unsigned long long val = (i * (i + 1)) / 2; 
		tri_vec.push_back(val); 
	} 
	return tri_vec; 
} 

int main(void) 
{
	vector<unsigned long long> tri_sequence = create_triangular_sequence(1000000); 
	vector<unsigned long long> pent_sequence = create_pentagonal_sequence(1000000); 
	vector<unsigned long long> hex_sequence = create_hexagonal_sequence(1000000); 
	vector<unsigned long long> first_result; vector<unsigned long long> result; 
	set_intersection(tri_sequence.begin(), tri_sequence.end(), pent_sequence.begin(), 
	                      pent_sequence.end(), std::inserter(first_result, first_result.end())); 
	set_intersection(first_result.begin(), first_result.end(), hex_sequence.begin(), 
	                 hex_sequence.end(), std::inserter(result, result.end())); 
	sort(result.begin(), result.end()); 
	cout << result[2] << endl; 
	return 0; 
	
}


