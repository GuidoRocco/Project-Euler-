/* 
Problem: How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?
*/ 

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication60
{
    class Program
    {
        public static void Main(string[] args)
        {
            int num_sundays = 0; 
            for(int year = 1901; year <= 2000; year++)
            {
                for(int month = 1; month <= 12; month++)
                {
                    DateTime time = new DateTime(year, month, 1); 
                    if(time.DayOfWeek == DayOfWeek.Sunday)
                    {
                        num_sundays++; 
                    }
                }
            }
            Console.WriteLine(num_sundays);
            Console.ReadLine(); 
            return; 
        }
    }
}

