/* 
Problem: Some positive integers n have the property that the sum [ n + reverse(n) ] 
consists entirely of odd (decimal) digits. For instance, 36 + 63 = 99 and 409 + 904 = 1313. 
We will call such numbers reversible; so 36, 63, 409, and 904 are reversible. 
Leading zeroes are not allowed in either n or reverse(n).

There are 120 reversible numbers below one-thousand.

How many reversible numbers are there below one-billion (109)?
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Numerics; 
using System.Threading.Tasks;

namespace ConsoleApplication78
{
    class Program
    {
        public static string reverse(string s)
        {
            char[] charArray = s.ToCharArray();
            Array.Reverse(charArray);
            return new string(charArray);
        } 

        public static bool sum_reversed(BigInteger num)
        {
            string str_num = num.ToString();
            string rev_num = reverse(str_num);
            BigInteger sum = BigInteger.Parse(str_num) + BigInteger.Parse(rev_num);
            string sum_str = sum.ToString(); 
            foreach(char ch in sum_str)
            {
                if(int.Parse(ch.ToString()) % 2 == 0)
                {
                    return false; 
                }
            }
            return true; 
        } 


        public static void Main(string[] args)
        {
            int count = 120; 
            for(BigInteger i = 1000; i < 1000000000; i++)
            {
                if (i % 10 == 0)
                    continue; 
                if(sum_reversed(i))
                {
                    count++; 
                }
            }
            Console.WriteLine(count);
            Console.ReadLine();
            return;  
        }
    }
} 


