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
    public partial class Teacher : Form
    {
        public Teacher()
        {
            InitializeComponent();
        }
        private void Teacher_Load(object sender, EventArgs e)
        {
            OTeacher oTeacher = new OTeacher();
            SqlDataAdapter sqlDataAdapter = oTeacher.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewTeacher.DataSource = dataTable;
        }
        private void btnTAdd_Click(object sender, EventArgs e)
        {
            ETeacher eTeacher = new ETeacher();
            eTeacher.TId = txtTid.Text;
            eTeacher.TName = txtTname.Text;
            eTeacher.TGender = comboBoxT.SelectedItem.ToString();
            eTeacher.TDepartment = txtTDept.Text;
            eTeacher.TAddress = txtTAddress.Text;
            eTeacher.TSalary = Convert.ToInt32(txtTSalary.Text);

            OTeacher oTeacher = new OTeacher();
            oTeacher.Add(eTeacher);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oTeacher.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewTeacher.DataSource = dataTable;

            try
            {
                if (eTeacher.TId == "" || eTeacher.TName == "" || eTeacher.TDepartment == "" || eTeacher.TAddress == "" )
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    MessageBox.Show("Teacher Successfully Added");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void btnTEdit_Click(object sender, EventArgs e)
        {
            ETeacher eTeacher = new ETeacher();
            eTeacher.TId = txtTid.Text;
            eTeacher.TName = txtTname.Text;
            

            OTeacher oTeacher = new OTeacher();
            oTeacher.Edit(eTeacher);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oTeacher.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewTeacher.DataSource = dataTable;

            try
            {
                if (eTeacher.TId == "")
                {
                    MessageBox.Show("Enter Teacher Id");
                }
                else
                {
                    MessageBox.Show("Teacher Successfully Updated");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void btnTDelete_Click(object sender, EventArgs e)
        {
            ETeacher eTeacher = new ETeacher();
            eTeacher.TId = txtTid.Text;
            OTeacher oTeacher = new OTeacher();
            oTeacher.Delete(eTeacher);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oTeacher.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewTeacher.DataSource = dataTable;

            try
            {
                if (eTeacher.TId == "")
                {
                    MessageBox.Show("Enter Teacher Id");
                }
                else
                {
                    MessageBox.Show("Teacher Information Deleted");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnSback_Click(object sender, EventArgs e)
        {
            MainForm home = new MainForm();
            home.Show();
            this.Hide();
        }
    }
}
