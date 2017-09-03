/* 
Problem: Working from left-to-right if no digit is exceeded by the digit to its left 
it is called an increasing number; for example, 134468. Similarly if no digit is exceeded 
by the digit to its right it is called a decreasing number; for example, 66420.

We shall call a positive integer that is neither increasing nor decreasing a "bouncy" number; for example, 155349.

Clearly there cannot be any bouncy numbers below one-hundred, 
but just over half of the numbers below one-thousand (525) are bouncy. 
In fact, the least number for which the proportion of bouncy numbers first reaches 50% is 538.

Find the least number for which the proportion of bouncy numbers is exactly 99%.
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication80
{
    class Program
    {
        public static bool is_increasing(int num)
        {
            string str = num.ToString();
            for (int i = 0; i < str.Length - 1; i++)
            {
                if (str[i] - '0' > str[i + 1] - '0')
                    return false;
            }
            return true;
        }

        public static bool is_decreasing(int num)
        {
            string str = num.ToString();
            for (int i = 0; i < str.Length - 1; i++)
            {
                if (str[i] - '0' < str[i + 1] - '0')
                {
                    return false;
                }
            }
            return true;
        }

        public static bool is_bouncy(int num)
        {
            return !is_increasing(num) && !is_decreasing(num);
        }

        public static void Main()
        {
            double prop = 0.0;
            int num_bouncy_numbers = 0;
            int i = 100;
            while (prop < 0.99)
            {
                if (is_bouncy(i))
                    num_bouncy_numbers++;
                prop = num_bouncy_numbers / (double)i;
                i++;
            }
            Console.WriteLine(i - 1);
            Console.ReadLine(); 
            return; 
        } 


    }
} 

