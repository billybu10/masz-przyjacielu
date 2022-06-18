using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace choinka
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Podaj wysokość choinki: ");
            int wysokosc = int.Parse(Console.ReadLine());
            int d = wysokosc;
            char gwiazda = '*';
            char spacja = '-';
            for(int i=1; i<=wysokosc; i++)
            {
                for(int h=0; h<d-1; h++)
                {
                    Console.Write(spacja);
                }
                for (int g = 0; g < (2*i)-1; g++){
                    Console.Write(gwiazda);
                }
                Console.WriteLine();
                d--;
            }
            Console.ReadKey();
        }
    }
}