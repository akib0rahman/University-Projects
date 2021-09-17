using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer.Entities
{
    public class ESupportStaff:EEmployee
    {
        private string SSId;
        public string SSName;
        public string SSGender;
        public string SSDesignation;
        public double SSSalary;
        public string Id// properties, both read and write
        {
            set
            {
                SSId = value;
            }
            get
            {
                return SSId;
            }
        }

       

    }
}
