package teacher;
import java.util.Scanner;
import employee.*;
import university.*;

public class Teacher implements Employee {
    
   public int time,salary;
   
   Scanner sc= new Scanner(System.in);
   
    public String name;
    public String id;
    
    
    public void info()
    {
        System.out.print("Enter teacher name : ");
        name = sc.nextLine();
        System.out.print("Enter teacher id   : ");
        id = sc.nextLine();    
    }
    
    public void workingHour()
    {
           //nothing
    }
    
    
    
    public void salary()
    {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter Teacher Salary : ");
        salary = sc.nextInt();
        University.updateTotalMoneySpent(salary);    
    }
    
    public void print()
    {
         System.out.println("Teacher's name  : " +name);
         System.out.println("Teacher's id    : " +id);
         System.out.println("Working hour 8 am to 5 pm !");
         System.out.println("Teacher's salary: "+salary+" TK");
     }

}
