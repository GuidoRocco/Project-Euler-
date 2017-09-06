/* 
Problem: Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:

21 22 23 24 25
20  7  8  9 10
19  6  1  2 11
18  5  4  3 12
17 16 15 14 13

It can be verified that the sum of the numbers on the diagonals is 101.

What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication88
{
    class Program
    {
        public static void Main(string[] args)
        {
            int count = 1, sum = 1, step = 2;
            int change_step = 0; 
            for(int i = 3; i <= 1001; i+=2)
            {
                for(int j = 1; j <= 4; j++)
                {
                    count += step;
                    sum += count; 
                }
                step += 2; 
            }
            Console.WriteLine(sum); 
            Console.ReadLine();
            return; 
        }
    }
}

