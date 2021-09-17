using DataAccessLayer.Entities;
using DataAccessLayer.Operation;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace AiubManagementSystem
{
    public partial class Student : Form
    {
        public Student()
        {
            InitializeComponent();
        }
        private void btnSAdd_Click(object sender, EventArgs e)
        {
            EStudent eStudent = new EStudent();
            eStudent.SId = txtSid.Text;
            eStudent.SName = txtSname.Text;
            eStudent.SGender = comboBoxS.SelectedItem.ToString();
            eStudent.SDob = dateTimePickerS.Value.ToString();

            eStudent.SDepartment = txtSdept.Text;
            eStudent.SemesterFees = Convert.ToDouble(txtSfee.Text);




            OStudent oStudent = new OStudent();
            oStudent.Add(eStudent);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oStudent.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewStudent.DataSource = dataTable;

            try
            {
                if (eStudent.SId == "" || eStudent.SName == "" || eStudent.SDepartment == "")
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    MessageBox.Show("Student Successfully Added");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void btnSedit_Click(object sender, EventArgs e)
        {
            EStudent eStudent = new EStudent();
            eStudent.SId = txtSid.Text;
            eStudent.SName = txtSname.Text;
           
            OStudent oStudent = new OStudent();
            oStudent.Edit(eStudent);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oStudent.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewStudent.DataSource = dataTable;

            try
            {
                if (eStudent.SId == "")
                {
                    MessageBox.Show("Enter Student Id");
                }
                else
                {
                    MessageBox.Show("Student Successfully Updated");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void btnSdelete_Click(object sender, EventArgs e)
        {
            EStudent eStudent = new EStudent();
            eStudent.SId = txtSid.Text;

            OStudent oStudent = new OStudent();
            oStudent.Delete(eStudent);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oStudent.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewStudent.DataSource = dataTable;

            try
            {
                if (eStudent.SId == "")
                {
                    MessageBox.Show("Enter Student Id");
                }
                else
                {
                    MessageBox.Show("Student Successfully Deleted");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void Student_Load(object sender, EventArgs e)
        {
            OStudent oStudent = new OStudent();
            SqlDataAdapter sqlDataAdapter = oStudent.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewStudent.DataSource = dataTable;
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnSback_Click(object sender, EventArgs e)
        {
            MainForm home = new MainForm();
            home.Show();
            this.Hide();
        }
        private void btnSearch_Click(object sender, EventArgs e)
        {
            SqlConnection connection = new SqlConnection("Data Source=AKIBRAHMAN\\SQLEXPRESS;Initial Catalog=Project;Integrated Security=True");
            connection.Open();
            SqlCommand cmd = connection.CreateCommand();
            cmd.CommandType = CommandType.Text;
            cmd.CommandText = ("select * from StudentTbl where StdId = '" + textBox1.Text + "'");
            cmd.ExecuteNonQuery();
            DataTable dataTable = new DataTable();
            SqlDataAdapter d = new SqlDataAdapter(cmd);
            d.Fill(dataTable);
            dataGridViewStudent.DataSource = dataTable;
            connection.Close();
        }
    }
}
