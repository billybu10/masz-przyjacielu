using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace poleiobjetosc
{
    class Program
    {
        static void Main(string[] args)
        {
            float a = 0;
            int z = 0;
            bool i = true;
            int wyb = 0;
            float wyn = 0;
            while (i == true)
            {
                Console.WriteLine("Podaj a");
                a = int.Parse(Console.ReadLine());

                Console.WriteLine("Co chcesz obliczyć?");
                Console.WriteLine("1. Pole powierzchni sześcianu o boku a.");
                Console.WriteLine("2. Objętość sześcianu o boku a");
                Console.WriteLine("3. Pole powierzchni koła o promienmiu a.");
                Console.WriteLine("4. Pole powierzchni kwadratu o boku a.");
                Console.WriteLine("5. Obwód kwadratu o boku a.");

                wyb = int.Parse(Console.ReadLine());

                switch (wyb)
                {
                    case 1:
                        wyn = 6 * a * a;
                        break;
                    case 2:
                        wyn = a * a * a;
                        break;
                    case 3:
                        wyn = (float)3.14 * a * a;
                        break;
                    case 4:
                        wyn = a * a;
                        break;
                    case 5:
                        wyn = 4 * a;
                        break;
                }

                Console.WriteLine("Wynik to: "+wyn);

                Console.WriteLine("Czy chcesz powrócić do menu głównego. Wciśnij 1 jeśli tak, 2 jeśli nie.");
                z = int.Parse(Console.ReadLine());
                if (z == 1) i = true;
                else i = false;
                Console.Clear();
            }

        }
    }
}
