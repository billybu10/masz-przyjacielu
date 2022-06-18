using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lotto
{
    class Program
    {
        static void Main(string[] args)
        {
            int z = 0;
            do
            {
                int i, n, liczba;
                Console.WriteLine("Ilość elementów");
                n = int.Parse(Console.ReadLine());
                Random x = new Random((int)DateTime.Now.Ticks);
                for (i = 0; i < n; i++)
                {
                    int y = x.Next(1, 49);
                    liczba = 1 + y % (49);
                    Console.WriteLine("Liczba " + liczba);
                }
                Console.WriteLine("Chcesz losować dalej? Jeśli tak wpisz 1.");
                z = int.Parse(Console.ReadLine());
                Console.Clear();
            } while (z==1);
            
        }
    }
}
