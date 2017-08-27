/* 
Problem: What is the index of the first term in the Fibonacci sequence to contain 1000 digits?
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
        public static int count_digit(BigInteger num)
        {
            string long_str = num.ToString();
            return long_str.Length; 
        } 

        public static void Main(string[] args)
        {
            BigInteger first = 1;
            BigInteger second = 1;
            BigInteger temp;
            int index = 2; //This is the index we will need. 
            do
            {
                temp = first;
                first = second;
                second = first + temp;
                index++; 
            }
            while (count_digit(second) < 1000);
            Console.WriteLine(index);
            Console.ReadLine(); 
            return; 
        }
    }
}


