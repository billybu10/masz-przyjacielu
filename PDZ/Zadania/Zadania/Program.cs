using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Zadania
{
    class Program
    {
        static void Main(string[] args)
        {
            int s= 0, n, ile = 0;
            Console.WriteLine("Podaj ilość elementów");
            n = int.Parse(Console.ReadLine());
            Random x = new Random();
            int i = 1;


            while (i <= n)
            {
                int liczba = x.Next(1, 100);
                if ((liczba >= 30)&&(liczba <= 60))
                {
                    Console.WriteLine("Liczba" + liczba);
                    s = s + liczba;
                    ile++;
                    i++;
                }
            }
            Console.WriteLine("Suma elementów wynosi: " + s + ". Ilość elementów: " + ile);
            Console.WriteLine($"Suma elementów wynosi: {s} . Ilość elementów: {ile}");
            Console.WriteLine("Suma elementów wynosi: {0}. Ilość elementów: {1}", s, ile);
            Console.ReadLine();
        }
    }
}
