using DataAccessLayer.Entities;
using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer.Operation
{
    public class OUser
    {
        SqlConnection connection = new SqlConnection("Data Source=AKIBRAHMAN\\SQLEXPRESS;Initial Catalog=Project;Integrated Security=True");
        public void Add(EUser eUser)
        {
           connection.Open();
           SqlCommand cmd = new SqlCommand("Insert into UserTbl(UserId,UserName,password)values('" + eUser.UID + "','" + eUser.UName + "','" + eUser.UPassword + "')", connection);
           cmd.ExecuteNonQuery();
           connection.Close();
        }
        public void Edit(EUser eUser)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Update UserTbl set UserName ='" + eUser.UName + "',password = '"+ eUser.UPassword+"' where UserId = '" + eUser.UID + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }
        public void Delete(EUser eUser)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Delete from UserTbl where UserId = '" +  eUser.UID + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }
       
        public SqlDataAdapter Show()
        {
            connection.Open();
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from UserTbl", connection);
            connection.Close();
            return sqlDataAdapter;
        }
    }
}
