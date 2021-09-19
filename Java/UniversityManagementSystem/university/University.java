package university;

import student.*;
import support.*;
import teacher.Teacher;

public class University {
    
    
    private static int totalMoneyEarned = 0;
    
    //Association has used here
    public Teacher teacher[] = new Teacher[2];
    public Student student[] = new Student[2];
    public SupportStaff staff[] = new SupportStaff[2];
    
    
    public University( Teacher teacher1,Teacher teacher2,Student student1,Student student2,SupportStaff staff1,SupportStaff staff2)
    {
        this.student[0]= student1;
        this.student[1]=student2;
        this.teacher[0]=teacher1;
        this.teacher[1]=teacher2;
        this.staff[0] = staff1;
        this.staff[1] = staff2;
        
        
    }

    
    // Information about earning money
    public static void updateTotalMoneyEarned(int money)
    {
        totalMoneyEarned += money;
        
    }
    
    
    //Information about spending money
    public static void updateTotalMoneySpent(int moneySpend)
    {
        totalMoneyEarned -= moneySpend;
       
    }
    
    
    
    
    
    public int getTotalMoneyEarned() {
        return totalMoneyEarned;
    }

    public void setTotalMoneyEarned(int totalMoneyEarned) {
        University.totalMoneyEarned = totalMoneyEarned;
    }

    
   
    
    
}
