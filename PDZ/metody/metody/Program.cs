using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace metody
{
    class Program
    {
        static void Main(string[] args)
        {
            int n=0;
            Console.WriteLine("Podaj zakres od 0 do:");
            n = int.Parse(Console.ReadLine());
            for (int i = 0; i <= n; i++)
            {
                if (czyparzysta(i) == true)
                {
                    Console.WriteLine(i + " Ta liczba jest parzysta.");
                }
                else
                {
                    Console.WriteLine(i + " Ta liczba nie jest parzysta.");
                }
            }
            Console.ReadKey();
        }

        private static bool czyparzysta(int liczba)
        {
            bool parzysta;
            if ((liczba % 2) == 0)
            {
                parzysta = true;
            }
            else
            {
                parzysta = false;
            }
            return parzysta;
        }
    }
}
