/* 
Problem:  In 2004, there was found a massive non-Mersenne prime which contains 2,357,207 digits: 28433×2^(7830457)+1. 

Find the last ten digits of this prime number.
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication82
{
    class Program
    {
        public static void Main(string[] args)
        {
            BigInteger result = (28433 * BigInteger.Pow(2, 7830457) + 1) % 10000000000; 
            Console.WriteLine(result);
            Console.ReadLine(); 
            return; 
        }
    }
}

