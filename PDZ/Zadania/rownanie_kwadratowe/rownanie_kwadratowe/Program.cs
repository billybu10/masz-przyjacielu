using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace rownanie_kwadratowe
{
    class Program
    {
        static void Main(string[] args)
        {
            double a, b, c, d, x1, x2;
            int i;
            do
            {
                Console.WriteLine("Podaj a: ");
                a = double.Parse(Console.ReadLine());
                if (a == 0)
                {
                    i = 1;
                    Console.WriteLine("To funkcja liniowa.");
                }
                else
                {
                    Console.WriteLine("Podaj b: ");
                    b = double.Parse(Console.ReadLine());
                    Console.WriteLine("Podaj c: ");
                    c = double.Parse(Console.ReadLine());

                    d = (b * b) - (4 * a * c);

                    if (d == 0)
                    {
                        x1 = (-b) / (2*a);
                        Console.WriteLine("Punkt zerowy tej funkcji to: " + x1);
                    }
                    else
                    {
                        if (d < 0)
                        {
                            Console.WriteLine("Brak pierwiastków");
                        }
                        else
                        {
                            x1 = (-b - Math.Sqrt(d)) / 2 * a;
                            x2 = (-b + Math.Sqrt(d)) / 2 * a;
                            Console.WriteLine("Punkty zerowe tej funkcji to: " + x1 +" i " + x2);
                        }
                    }

                    Console.WriteLine("Czy chcesz kontynuować? tak - 1 nie - 0 : ");
                    i = int.Parse(Console.ReadLine());
                }
            } while (i == 1);
        }
    }
}
