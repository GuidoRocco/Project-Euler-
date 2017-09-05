/* 
Problem: Considering natural numbers of the form, ab, where a, b < 100, what is the maximum digital sum?
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication83
{
    class Program
    {
        public static int sum_string(BigInteger num)
        {
            int sum = 0; 
            string num_str = num.ToString(); 
            foreach(char ch in num_str)
            {
                sum += (ch - '0'); 
            }
            return sum; 
        } 

        public static void Main(string[] args)
        {
            int max_digital_sum = 0; 
            for(int a = 99; a >=1; a--)
            {
                for(int b = 99; b >=1; b--)
                {
                    BigInteger pow = BigInteger.Pow(a, b); 
                    if((int)BigInteger.Log10(pow) * 9 < max_digital_sum)
                    {
                        break; 
                    }
                    int temp_sum = sum_string(pow);
                    if (temp_sum > max_digital_sum)
                        max_digital_sum = temp_sum; 
                }
            }
            Console.WriteLine(max_digital_sum);
            Console.ReadLine(); 
            return; 
        }
    }
}

