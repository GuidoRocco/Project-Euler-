/* 
Problem: Starting in the top left corner of a 2×2 grid, and only being able
to move to the right and down, there are exactly 6 routes to the bottom right corner. 
How many such routes are there through a 20×20 grid? 
The solution of this problem can be obtained using binomial coefficients. 
An explanation of my solution can be retrieved here: http://www.robertdickau.com/lattices.html
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Numerics; 
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication64
{
    class Program
    {
        public static BigInteger factorial(int num)
        {
            if (num == 0 || num == 1)
                return 1;
            else
                return num * factorial(num - 1); 
        }

        public static void Main(string[] args)
        {
            Console.WriteLine(factorial(40) / (factorial(20) * factorial(20)));
            Console.ReadLine(); 
            return; 
        }
    }
}


