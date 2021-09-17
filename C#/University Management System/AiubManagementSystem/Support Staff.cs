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
    public partial class Support_Staff : Form
    {
        public Support_Staff()
        {
            InitializeComponent();
        }

        private void Support_Staff_Load(object sender, EventArgs e)
        {
            OSupportStaff oSupportStaff = new OSupportStaff();
            SqlDataAdapter sqlDataAdapter = oSupportStaff.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewStaff.DataSource = dataTable;
        }

        private void btnSback_Click(object sender, EventArgs e)
        {

            MainForm home = new MainForm();
            home.Show();
            this.Hide();
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnTAdd_Click(object sender, EventArgs e)
        {
            ESupportStaff eSupportStaff = new ESupportStaff();
            eSupportStaff.Id = txtSSid.Text;
            eSupportStaff.SSName = txtSSname.Text;
            eSupportStaff.SSGender = cmbGender.Text;
            eSupportStaff.SSDesignation = txtDesignation.Text;
            eSupportStaff.SSSalary = Convert.ToDouble( txtSalary.Text);

            OSupportStaff oSupportStaff = new OSupportStaff();
            oSupportStaff.Add(eSupportStaff);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oSupportStaff.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewStaff.DataSource = dataTable;

            try
            {
                if (eSupportStaff.Id == "" || eSupportStaff.SSName == "" || eSupportStaff.SSGender == "" || eSupportStaff.SSDesignation == "" )
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    MessageBox.Show("SupportStaff Successfully Added");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void btnTEdit_Click(object sender, EventArgs e)
        {
            ESupportStaff eSupportStaff = new ESupportStaff();
            eSupportStaff.Id = txtSSid.Text;
            eSupportStaff.SSName = txtSSname.Text;

            OSupportStaff oSupportStaff = new OSupportStaff();
            oSupportStaff.Edit(eSupportStaff);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oSupportStaff.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewStaff.DataSource = dataTable;

            try
            {
                if (eSupportStaff.Id == "")
                {
                    MessageBox.Show("Enter SupportStaff Id");
                }
                else
                {
                    MessageBox.Show("SupportStaff Successfully Updated");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void btnTDelete_Click(object sender, EventArgs e)
        {
            ESupportStaff eSupportStaff = new ESupportStaff();
            eSupportStaff.Id = txtSSid.Text;

            OSupportStaff oSupportStaff = new OSupportStaff();
            oSupportStaff.Delete(eSupportStaff);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oSupportStaff.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewStaff.DataSource = dataTable;

            try
            {
                if (eSupportStaff.Id == "")
                {
                    MessageBox.Show("Enter Id");
                }
                else
                {
                    MessageBox.Show("Information Deleted");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

       
    }
}
