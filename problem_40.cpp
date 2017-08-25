/* 
Problem: An irrational decimal fraction is created by concatenating the positive integers:

0.123456789101112131415161718192021...

It can be seen that the 12th digit of the fractional part is 1.

If dn represents the nth digit of the fractional part, find the value of the following expression: 

d1 × d10 × d100 × d1000 × d10000 × d100000 × d1000000. 

An auxiliary function to_string() is also created. 
*/ 

#include <iostream> 
#include <cmath> 
#include <sstream>
#include <algorithm> 
using namespace std; 

template <typename T> string to_string(T val)
{
    stringstream stream;
    stream << val;
    return stream.str();
} 

int main(void) 
{
	string num_string = ""; 
	for(int i = 1; i < 1000000; i++) 
	  num_string.append(to_string(i)); 
	int d_0 = num_string.at(0) - '0', d_9 = num_string.at(9) - '0', d_99 = num_string.at(99) - '0', 
	    d_999 = num_string.at(999) - '0', d_9999 = num_string.at(9999) - '0', d_99999 = num_string.at(99999)- '0' , 
		d_999999 = num_string.at(999999) - '0'; 
	cout <<  (d_0 * d_9 * d_99 * d_999 * d_9999 * d_99999 * d_999999) << endl; 
	return 0; 
} 


