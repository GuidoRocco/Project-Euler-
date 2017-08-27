/* 
Problem: Find the sum of the digits in the number 100! 
We will use BigIntegers in the solution. 
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics; 
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication61
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger big_factorial = 1;
            int sum = 0; 
            for(int i = 2; i <=100; i++)
            {
                big_factorial *= i; 
            }
            string fact_string = big_factorial.ToString(); 
            for(int i = 0; i < fact_string.Length; i++)
            {
                sum += (fact_string[i] - '0'); 
            }
            Console.WriteLine(sum);
            Console.ReadLine(); 
            return; 
        }
    }
}
