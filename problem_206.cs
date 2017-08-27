/* 
Problem: Find the unique positive integer whose square has the form 1_2_3_4_5_6_7_8_9_0,
where each “_” is a single digit.
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics; 
using System.Text;
using System.Text.RegularExpressions; 
using System.Threading.Tasks;

namespace ConsoleApplication61
{
    class Program
    {
        public static bool matches_pattern(BigInteger test)
        {
            string pattern = @"^1\d2\d3\d4\d5\d6\d7\d8\d9\d0$";
            BigInteger square = test * test; 
            return Regex.IsMatch(square.ToString(), pattern); 
            }
        
        public static void Main(string[] args)
        {
           BigInteger result = 0; 
           for(BigInteger i = 1010101010; i < 1389026623; i += 10)
            {
                if(matches_pattern(i))
                {
                    result = i; 
                }
            }
            Console.WriteLine(result); 
            Console.ReadLine(); 
            return; 
        }
    }
}

