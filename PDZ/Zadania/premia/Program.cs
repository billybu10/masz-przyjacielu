using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace premia
{
    class Program
    {
        static void Main(string[] args)
        {
            int u = 0;
            double premia = 0;

            Console.WriteLine("Podaj utarg sprzedawcy: ");
            u = int.Parse(Console.ReadLine());

            if ((u >= 0) && (u <= 10000))
            {
                if (u < 1000)
                {
                    premia = 0;
                }
                else if ((u>=1000)&&(u< 5000))
                {
                    premia = 0.05 * u;
                }
                else if (u >= 5000)
                {
                    premia = 250;
                }
                Console.WriteLine("Premia wynosi: " + premia + "zł.");
            }
            else
            {
                Console.WriteLine("Błędne dane");
            }
            Console.ReadKey();
        }
    }
}
