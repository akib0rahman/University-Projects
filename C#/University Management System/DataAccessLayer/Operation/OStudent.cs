using DataAccessLayer.Entities;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer.Operation
{
    public class OStudent
    {
        SqlConnection connection = new SqlConnection("Data Source=AKIBRAHMAN\\SQLEXPRESS;Initial Catalog=Project;Integrated Security=True");
        public void Add(EStudent eStudent)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Insert into StudentTbl(Stdid,StdName,StdGender,StdDOB,StdDep,StdFees)values('" + eStudent.SId + "','" + eStudent.SName + "','" + eStudent.SGender + "','" + eStudent.SDob + "' ,'" + eStudent.SDepartment + "','" + eStudent.SemesterFees + "')", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public void Edit(EStudent eStudent)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Update StudentTbl set StdName ='" + eStudent.SName + "' where StdId = '" + eStudent.SId + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }



        public void Delete(EStudent eStudent)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Delete from StudentTbl where StdId = '" + eStudent.SId + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public SqlDataAdapter Show()
        {
            connection.Open();
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from StudentTbl", connection);
            connection.Close();
            return sqlDataAdapter;
        }
    }
}
