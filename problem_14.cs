/* 
Problem: Which starting number, under one million, produces the longest Collatz chain?
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
        public static int count_collatz(BigInteger num)
        {
            int count = 0; 
            while(num != 1)
            {
                if((num % 2) == 0)
                {
                    num /= 2;
                } 
                else
                {
                    num = 3 * num + 1; 
                }
                count++; 
            }
            return count; 
        } 

        public static void Main(string[] args)
        {
            int max_chain = 0;
            int result_index = 1; 
            for(int i = 10; i < 1000000; i++)
            {
                int to_compare = count_collatz((BigInteger)i); 
                if(to_compare > max_chain)
                {
                    max_chain = to_compare;
                    result_index = i; 
                }
            }
            Console.WriteLine(result_index); 
            Console.ReadLine(); 
            return; 
        }
    }
}


