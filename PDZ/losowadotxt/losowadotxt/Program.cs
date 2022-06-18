using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace losowadotxt
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Podaj dlugosc tablicy");
            int k = int.Parse(Console.ReadLine());
            int[] tab = new int[k];
            Random x = new Random();
            for(int i = 0; i < tab.Length; i++)
            {
                tab[i] = x.Next(1, 127);
            }
            Array.Sort(tab);
            for (int i = 0; i < k; i++)
                for (int j = i + 1; j < k; j++)
                    if (tab[i] == tab[j]) tab[j] = 0;
            Console.WriteLine("Tablica bez zera");
            int[] bezzera = tab.Where(w => w != 0).ToArray();
            for(int i = 0; i<bezzera.Length; i++)
            {
                Console.Write(i + 1 + ": ");
                Console.WriteLine(bezzera[i] + " ");
            }
            Console.WriteLine("Elementy w przedziale 97-122 do char'a");
            File.WriteAllText(@"C:\xyz\tab_char.txt", "");
            for(int i = 0; i < k; i++)
            {
                if((tab[i] >=97)&&(tab[i] <= 122))
                {
                    Console.Write(i + 1 + ": ");
                    Console.WriteLine(Convert.ToChar(tab[i]) + " ");
                    string tab_char = "Element: " + (i + 1) + " to " + Convert.ToChar(tab[i]) + "\n";
                    File.AppendAllText(@"C:\xyz\tab_char.txt", tab_char);
                }
            }
            Console.WriteLine("Elementy w przedziale 97-122 do hex");
            for (int i = 0; i < k; i++)
            {
                if ((tab[i] >= 97) && (tab[i] <= 122))
                {
                    Console.Write(i + 1 + ": ");
                    Console.WriteLine(Convert.ToString(tab[i], 16 ) + " ");
                    string tab_char = "Element: " + (i + 1) + " to " + Convert.ToString(tab[i], 16) + "\n";
                    File.AppendAllText(@"C:\xyz\tab_char.txt", tab_char);
                }
            }
            Console.WriteLine("Elementy w przedziale 97-122 do binary");
            for (int i = 0; i < k; i++)
            {
                if ((tab[i] >= 97) && (tab[i] <= 122))
                {
                    Console.Write(i + 1 + ": ");
                    Console.WriteLine(Convert.ToString(tab[i], 2) + " ");
                    string tab_char = "Element: " + (i + 1) + " to " + Convert.ToString(tab[i], 2) + "\n";
                    File.AppendAllText(@"C:\xyz\tab_char.txt", tab_char);
                }
            }
            DateTime date1 = DateTime.Now;
            string tab_data1 = date1.ToString("yyyy-MM-dd HH:mm:ss");
            File.AppendAllText(@"C:\xyz\tab_char.txt", tab_data1);
            Console.ReadKey();
        }
    }
}
