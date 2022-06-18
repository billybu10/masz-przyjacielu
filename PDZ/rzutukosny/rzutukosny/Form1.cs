using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace rzutukosny
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double tw, tc, hmax, z, v0;
            double alfa;
            double g = 9.81;

            alfa = double.Parse(textBox1.Text);
            v0 = double.Parse(textBox2.Text);

            tw = (v0 * Math.Sin(KatToRadian(alfa))) / g;
            tc = 2 * tw;
            hmax = Math.Pow(v0 * Math.Sin(KatToRadian(alfa)), 2) / (2 * g);
            z = (Math.Pow(v0, 2) * Math.Sin(2 * KatToRadian(alfa))) / g;
            textBox3.Text = tw.ToString("F2") + " sek";
            textBox4.Text = tc.ToString("F2") + " sek";
            textBox5.Text = hmax.ToString("F2") + " metr";
            textBox6.Text = z.ToString("F2") + " metr";

            double x = double.Parse(textBox7.Text);

            for (double t = 0; t < tc; t = t + x)
            {
                double x0 = Math.Round(x_wsp(v0, alfa, t), 2);
                double y0 = Math.Round(y_wsp(v0, alfa, t, g), 2);

                listBox1.Items.Add("Czas: " + t.ToString("F2") + "  X0: " + x0.ToString() + "  Y0: " + y0.ToString());
            }
        }
        private static double x_wsp(double v0, double alfa, double t)
        {
            double x;
            x = v0 * t * Math.Cos(KatToRadian(alfa));
            return x;
        }

        private static double y_wsp(double v0, double alfa, double t, double g)
        {
            double y;
            y = v0 * t * Math.Sin(KatToRadian(alfa)) - (g * Math.Pow(t, 2)) / 2;
            return y;
        }

        private static double KatToRadian(double kat)
        {
            return Math.PI * kat / 180.0;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox2.Text = textBox3.Text = textBox4.Text = textBox5.Text = textBox6.Text = "";
            listBox1.Items.Clear();
        }
    }
}
