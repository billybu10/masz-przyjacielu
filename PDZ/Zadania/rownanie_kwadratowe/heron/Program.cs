using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace heron
{
    class Program
    {
        static void Main(string[] args)
        {
            int i;
            do
            {
                double a, b, c, pole = 0;
                Console.WriteLine("Podaj a: ");
                a = double.Parse(Console.ReadLine());
                Console.WriteLine("Podaj b: ");
                b = double.Parse(Console.ReadLine());
                Console.WriteLine("Podaj c: ");
                c = double.Parse(Console.ReadLine());

                if ((a + b > c) && (a + c > b) && (b + c > a))
                {
                    pole = Math.Sqrt((a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c)) / 4;
                    Console.WriteLine("Pole tego trójkąta to {0:f2}", pole);
                    Console.WriteLine("Czy chcesz kontynuować? tak - 1 nie - 0 : ");
                    i = int.Parse(Console.ReadLine());
                }
                else
                {
                    i = 1;
                    Console.WriteLine("Taki trójkąt nie istnieje!");
                }
                Console.Clear();
            } while (i == 1);
        }
    }
}
