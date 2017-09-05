/* 
Problem: Find the sum of all numbers, less than one million, which are palindromic in base 10 and base 2. 
Please note that the palindromic number, in either base, may not include leading zeros. 
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication86
{
    class Program
    {
        public static bool is_palindromic(int num, int b)
        {
            string num_str = Convert.ToString(num, b);
            char[] arr = num_str.ToCharArray();
            Array.Reverse(arr);
            return num_str.Equals(new string(arr)); 
        } 

        public static void Main(string[] args)
        {
            int count = 0; 
            for(int i = 1; i < 1000000; i+=2)
            {
                if (is_palindromic(i, 10) && is_palindromic(i, 2)) 
                    count += i; 
            }
            Console.WriteLine(count);
            Console.ReadLine();
            return; 
        }
    }
}


