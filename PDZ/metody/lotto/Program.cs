using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lotto
{
    class Program
    {
        static void Main(string[] args)
        {
            int i, n, liczba;
            for (i = 0; i<=48; i++)
            {
                Console.WriteLine(i + 1 + " ");
            }
            Console.WriteLine(" ");
            Console.WriteLine("Ilosc elementow : ");
            n = int.Parse(Console.ReadLine());
            if (n >= 49)
            {
                Console.WriteLine("Nie");
            }
            else
            {
                Console.WriteLine(" ");
                List<int> wylosowane = new List<int>();
                for (i = 0; i < n; i++)
                {
                    liczba = wylosuj_liczbe();

                    while (wylosowane.Contains(liczba))
                    {
                        liczba = wylosuj_liczbe();
                    }
                    wylosowane.Add(liczba);
                    Console.WriteLine(" liczba : " + liczba);
                }
            }
            Console.ReadKey();
        }

        private static int wylosuj_liczbe()
        {
            int liczba;
            Random x = new Random((int)DateTime.Now.Ticks);
            int y = x.Next(1, 49);
            liczba = 1 + y % 49;
            return liczba;
        }
    }
}
