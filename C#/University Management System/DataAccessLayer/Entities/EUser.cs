using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DataAccessLayer.Entities
{
    public class EUser
    {
        public string uId;
        public string UName;
        public string UPassword;

        public string UID //auto implemented properties
        {
            set;
            get;
        }
    }
}
