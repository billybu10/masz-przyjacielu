using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace wentylatorek
{
    class Program
    {
        static void Main(string[] args)
        {
            double p = 0, w = 0, wo=0, t = 0, kg = 0, ap = 0, aw = 0, awo=0, pr = 0, k = 0;
            
            Console.WriteLine("Podaj ilość wypitego piwa: ");
            p = double.Parse(Console.ReadLine());
            Console.WriteLine("Podaj ilość wypitego wina: ");
            w = double.Parse(Console.ReadLine());
            Console.WriteLine("Podaj ilość wypitej wódki: ");
            wo = double.Parse(Console.ReadLine());
            Console.WriteLine("Podaj masę obiektu: ");
            kg = double.Parse(Console.ReadLine());
            Console.WriteLine("Podaj podaj czas który upłynął od spożycia: ");
            t = double.Parse(Console.ReadLine());

            k = 0.7;
            ap = p * 0.05 * 0.98;
            aw = w * 0.1 * 0.95;
            awo = w * 0.4 * 0.85;
            pr = (aw + ap + awo) / (k*kg);
            pr = pr - 0.13 * t;

            if (pr < 0)
            {
                pr = 0;
            }

            Console.WriteLine("Ilość promili: {0:f2} po czasie: {1}", pr, t);
            Console.WriteLine("Rozkład alkoholu w czasie");

            while (pr > 0){
                pr = pr - 0.13;
                if (pr < 0)
                {
                    pr = 0;
                }
                Console.WriteLine("Po: {0} godzinie {1:f2}", t, pr);
                t++;
            }
            Console.Read();
        }
    }
}