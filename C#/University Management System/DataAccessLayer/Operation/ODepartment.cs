using DataAccessLayer.Entities;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer.Operation
{
    public class ODepartment
    {
        SqlConnection connection = new SqlConnection("Data Source=AKIBRAHMAN\\SQLEXPRESS;Initial Catalog=Project;Integrated Security=True");
        public void Add(EDepartment eDepartment)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Insert into DeptTable(DeptName,DeptDuration)values('" + eDepartment.DName + "','" + eDepartment.DDuration + "' )", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public void Edit(EDepartment eDepartment)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Update DeptTable set DeptDuration ='" + eDepartment.DDuration + "' where DeptName = '" + eDepartment.DName + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public void Delete(EDepartment eDepartment)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Delete from DeptTable where DeptName = '" + eDepartment.DName + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public SqlDataAdapter Show()
        {
            connection.Open();
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from DeptTable", connection);
            connection.Close();
            return sqlDataAdapter;
        }
    }
}
