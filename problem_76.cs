/* 
Problem: How many different ways can one hundred be written as a sum of at least two positive integers? 
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication76
{
    class Program
    {
        public static void Main(string[] args)
        {
            int num = 100;
            int[] partition_ways = new int[num + 1];
            partition_ways[0] = 1;
            for (int i = 1; i < 100; i++)
            {
                for (int j = i; j <= 100; j++)
                {
                    partition_ways[j] += partition_ways[j - i];
                }
            }
            Console.WriteLine(partition_ways[100]);
            Console.ReadLine(); 
            return; 
        }
    }
}


