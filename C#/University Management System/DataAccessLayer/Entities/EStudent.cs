using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer.Entities
{
    public class EStudent
    {
        public string SName;
        private string Sid;
        public string SGender;
        public string SDob;
        public string SDepartment;
        private double SSemesterFees;     

        public string SId //auto implemented properties
        {
            set;
            get;
        }
        public double SemesterFees //properties
        {
            set
            {
                SSemesterFees = value;
            }
            get
            {
                return SSemesterFees;
            }
        }

      
           
    }
}

