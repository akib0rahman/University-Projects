using DataAccessLayer.Entities;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer.Operation
{
    public class OSupportStaff
    {
        SqlConnection connection = new SqlConnection("Data Source=AKIBRAHMAN\\SQLEXPRESS;Initial Catalog=Project;Integrated Security=True");
        public void Add(ESupportStaff eSupportStaff)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Insert into StaffTbl(StaffId,StaffName,StaffGender,StaffDesignation,StaffSalary)values('" + eSupportStaff.Id + "','" + eSupportStaff.SSName + "' ,'" + eSupportStaff.SSGender + "','" + eSupportStaff.SSDesignation + "','" + eSupportStaff.SSSalary + "')", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public void Edit(ESupportStaff eSupportStaff)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Update StaffTbl set StaffName = '" + eSupportStaff.SSName + "' where StaffId = '" + eSupportStaff.Id + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public void Delete(ESupportStaff eSupportStaff)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Delete from StaffTbl where StaffId = '"+eSupportStaff.Id+"'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public SqlDataAdapter Show()
        {
            connection.Open();
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from StaffTbl", connection);
            connection.Close();
            return sqlDataAdapter;
        }
    }
}
