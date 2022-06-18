using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BMI
{
    class Program
    {
        static void Main(string[] args)
        {
            double bmi = 0;
            double waga = 0;
            double cm = 0;
            Console.WriteLine("Podaj wzrost w cm: ");
            cm = double.Parse(Console.ReadLine());
            Console.WriteLine("Podaj wagę w kg: ");
            waga = double.Parse(Console.ReadLine());

            double wzrost2= ((cm / 100)*(cm/100));
            Console.WriteLine(wzrost2);

            bmi = (waga / wzrost2);

            Console.WriteLine("Twoje BMI wynosi: " + bmi); /*{0:F2} pozwala na wypisanie zmiennej typu double*/

            if (bmi < 18)
            {
                Console.WriteLine("Masz niedowagę. :(");
            }
            else if((bmi >=18)&&(bmi <= 25))
            {
                Console.WriteLine("Jest OK :)");
            }
            else if (bmi > 25)
            {
                Console.WriteLine("Masz nadwagę. :(");
            }
            
            Console.ReadLine();
        }
    }
}
