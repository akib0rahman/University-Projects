using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Calculator : Form
    {
        string first = "";//storing number before any operation sign
        string second = "";//storing number after any operation sign
        char function;//storing the sign
        double result = 0.0;
        string userInput = "";

        public Calculator()
        {
            InitializeComponent();
        }

        private void button0_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";//disappair the 0
            userInput += "0";
            textBox1.Text += userInput;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "1";
            textBox1.Text += userInput;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "2";
            textBox1.Text += userInput;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "3";
            textBox1.Text += userInput;
        }

        private void button4_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "4";
            textBox1.Text += userInput;
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "5";
            textBox1.Text += userInput;
        }

        private void button6_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "6";
            textBox1.Text += userInput;
        }

        private void button7_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "7";
            textBox1.Text += userInput;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "8";
            textBox1.Text += userInput;
        }

        private void button9_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += "9";
            textBox1.Text += userInput;
        }

        private void buttonDot_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            userInput += ".";
            textBox1.Text += userInput;
        }

        private void buttonC_Click(object sender, EventArgs e)
        {
            first = "";
            second = "";
            userInput = "";
            textBox1.Text = "";
        }

        private void buttonDivide_Click(object sender, EventArgs e)
        {
            function = '/';
            first = userInput;
            userInput = "";
        }

        private void buttonMultiply_Click(object sender, EventArgs e)
        {
            function = 'x';
            first = userInput;
            userInput = "";
        }

        private void buttonMinus_Click(object sender, EventArgs e)
        {
            function = '-';
            first = userInput;
            userInput = "";
        }

        private void buttonPlus_Click(object sender, EventArgs e)
        {
            function = '+';
            first = userInput;
            userInput = "";
        }

        private void buttonEqual_Click(object sender, EventArgs e)
        {
            
            second = userInput;
            double firstNum, secondNum;
            firstNum = Convert.ToDouble(first);
            secondNum = Convert.ToDouble(second);

            //plus
            if(function=='+')
            {
                result = firstNum + secondNum;
                textBox1.Text = result.ToString();
            }
            //minus
            else if(function=='-')
            {
                result = firstNum - secondNum;
                textBox1.Text = result.ToString();
            }
            //Divide
            else if(function=='/')
            {
                if(secondNum=='0')
                {
                    textBox1.Text = "Wrong input";
                }
                else
                {
                    result = firstNum / secondNum;
                    textBox1.Text = result.ToString();
                }
            }
            //multiply
            else if(function == 'x')
            {
                result = firstNum * secondNum;
                textBox1.Text = result.ToString();
            }


        }
    }
}
