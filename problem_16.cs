/* 
Problem: What is the sum of the digits of the number 2^1000? 
We will use BigIntegers in our solution. 
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics; 
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication55
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger sum = 0; 
            BigInteger big_power = (BigInteger)Math.Pow(2, 1000);
            string str_power = big_power.ToString(); 
            for(int i = 0; i < str_power.Length; i++)
            {
                sum += (str_power[i] - '0'); 
            }
            Console.WriteLine(sum);
            Console.ReadLine(); 
            return; 
        }
    }
}
