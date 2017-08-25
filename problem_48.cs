/* 
Problem: The series 1^1 + 2^2 + 3^3 + ... + 10^10 = 10405071317. 
Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000. 
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics; 
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication57
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger num = 10405071317; 
            for(int i = 11; i <= 1000; i++)
            {
                num += BigInteger.Pow(i, i); 
            }
            var result = num % 10000000000; 
            Console.WriteLine(result);
            Console.ReadLine(); 
            return; 
        }
    }
}

