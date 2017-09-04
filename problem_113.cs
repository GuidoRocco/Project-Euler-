/* 
Problem: Working from left-to-right if no digit is exceeded by the digit to its left 
it is called an increasing number: for example, 134468.
Similarly if no digit is exceeded by the digit to its right it is called 
a decreasing number; for example, 66420.

We shall call a positive integer that is neither increasing nor decreasing 
a "bouncy" number; for example, 155349.
As n increases, the proportion of bouncy numbers below n increases 
such that there are only 12951 numbers below one-million that are not bouncy 
and only 277032 non-bouncy numbers below 1010.

How many numbers below a googol (10100) are not bouncy?
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication80
{
    class Program
    {
        public static BigInteger factorial(BigInteger num)
        {
            if (num == 0 || num == 1)
                return 1;
            else
                return num * factorial(num - 1); 
        } 

        public static BigInteger binom(BigInteger n, BigInteger k)
        {
            return factorial(n) / (factorial(k) * factorial(n - k)); 
        }

        public static void Main()
        {
            BigInteger result = binom(100 + 10, 10) + binom(100 + 9, 9) - 10 * 100 - 2;
            Console.WriteLine(result);
            Console.ReadLine(); 
            return; 
        }
   }
}

