using DataAccessLayer.Entities;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer.Operation
{
    public class OTeacher
    {

        SqlConnection connection = new SqlConnection("Data Source=AKIBRAHMAN\\SQLEXPRESS;Initial Catalog=Project;Integrated Security=True");
        public void Add(ETeacher eTeacher)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Insert into TeacherTbl(TeacherId,TeacherName,TeacherGender,TeacherDept,TeacherAdd,TeacherSalary)values('" + eTeacher.TId + "','" + eTeacher.TName + "','" + eTeacher.TGender + "','" + eTeacher.TDepartment + "','" + eTeacher.TAddress + "','"+ eTeacher.TSalary + "')", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public void Edit(ETeacher eTeacher)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Update TeacherTbl set TeacherName ='" + eTeacher.TName + "' where TeacherId = '" + eTeacher.TId + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }



        public void Delete(ETeacher eTeacher)
        {
            connection.Open();
            SqlCommand cmd = new SqlCommand("Delete from TeacherTbl where TeacherId = '" + eTeacher.TId + "'", connection);
            cmd.ExecuteNonQuery();
            connection.Close();
        }

        public SqlDataAdapter Show()
        {
            connection.Open();
            SqlDataAdapter sqlDataAdapter = new SqlDataAdapter("select * from TeacherTbl", connection);
            connection.Close();
            return sqlDataAdapter;
        }
    }
}
