using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Data.SqlClient;
using System.Windows.Forms;
using DataAccessLayer.Entities;
using DataAccessLayer.Operation;

namespace AiubManagementSystem
{
    public partial class User : Form
    {
        public User()
        {
            InitializeComponent();
        }

        private void User_Load(object sender, EventArgs e)
        {
            OUser oUser = new OUser();
            SqlDataAdapter sqlDataAdapter = oUser.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewUser.DataSource = dataTable;
        }

        private void btnUAdd_Click(object sender, EventArgs e)
        {
            EUser eUser = new EUser();
            eUser.UID = txtUid.Text;
            eUser.UName = txtUname.Text;
            eUser.UPassword = txtUpassword.Text;

            OUser oUser = new OUser();
            oUser.Add(eUser);
           
            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oUser.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewUser.DataSource = dataTable;

            try
            {
                if(eUser.UID == "" || eUser.UName==""||eUser.UPassword=="")
                {
                    MessageBox.Show("Missing Information");
                }
                else
                {
                    MessageBox.Show("User Successfully Added");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void btnUDelete_Click(object sender, EventArgs e)
        {
            EUser eUser = new EUser();
            eUser.UID = txtUid.Text;
            eUser.UName = txtUname.Text;
            eUser.UPassword = txtUpassword.Text;

            OUser oUser = new OUser();
            oUser.Delete(eUser);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oUser.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewUser.DataSource = dataTable;

            try
            {
                if (eUser.UID == "")
                {
                    MessageBox.Show("You must enter user Id");
                }
                else
                {
                    MessageBox.Show("User Successfully Deleted");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void btnUEdit_Click(object sender, EventArgs e)
        {
            EUser eUser = new EUser();
            eUser.UID = txtUid.Text;
            eUser.UName = txtUname.Text;
            eUser.UPassword = txtUpassword.Text;

            OUser oUser = new OUser();
            oUser.Edit(eUser);

            //for auto showing in girdview
            SqlDataAdapter sqlDataAdapter = oUser.Show();
            DataTable dataTable = new DataTable();
            sqlDataAdapter.Fill(dataTable);
            dataGridViewUser.DataSource = dataTable;

            try
            {
                if (eUser.UID == "")
                {
                    MessageBox.Show("You must enter user Id");
                }
                else
                {
                    MessageBox.Show("User Information Updated");
                }
            }
            catch
            {
                MessageBox.Show("Something went wrong");
            }
        }

        private void btnSback_Click(object sender, EventArgs e)
        {
            MainForm home = new MainForm();
            home.Show();
            this.Hide();
        }
    }
}
