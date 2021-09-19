import file.*;
import java.lang.*;
import java.io.*;
import java.util.*;
import student.*;
import support.*;
import teacher.*;
import university.*;

public class Main {
    public static void main(String[] args) {
        
        FileReadWriteDemo fileObject = new FileReadWriteDemo() ;
	


        Student s1 = new Student("Fall 20-21");         
        Student s2 = new Student("Fall 20-21");
        
        
        Teacher t1 = new Teacher();            
        Teacher t2 = new Teacher();
        
        
        SupportStaff sf;
        OfficeStuff of = new OfficeStuff("181-222-31");
        Cleaner c = new Cleaner("177-222-21");         
        
        
        //association
        University u = new University(t1,t2,s1,s2,of,c);
        


        //Sudent part
        try
        {
        s1.information();
        s1.payFees();
        }
        catch(Exception e)
        {
           System.out.println("Invalid Input!  "+e);
        }
        System.out.println("");
        
        
        try
        {
        s2.information();
        s2.payFees();
        }
        catch(Exception f)
        {
           System.out.println("Invalid Input!  "+f);
        }
        System.out.println("");       
        
        System.out.println("Student's Information ::: ");
        System.out.println("");
        s1.showInfo();        
        System.out.println("");        
        s2.showInfo();
        //university funds
        System.out.println("");
        System.out.println("::: ");
        System.out.println("University's fund has  ::: "+u.getTotalMoneyEarned()+" TK");
        System.out.println("::: ");
        System.out.println("");



        //teacher part
        t1.info();
        t1.workingHour();
        try
        {
           t1.salary(); 
        }
        catch(Exception e)
        {
           System.out.println("Invalid Input!  "); 
        }
        
        System.out.println("");
        
        try
        {
           t2.info();  
        }
        catch(Exception f)
        {
            System.out.println("Invalid Input!  ");
        }
       
        t2.workingHour();
        t2.salary();
        System.out.println("");
        
        
        System.out.println("Teacher's Information :::*::: ");
        System.out.println("");
        t1.print();
        System.out.println("");
        t2.print();


        //university funds
        System.out.println("");
        System.out.println("::::");
        System.out.println("After giving teachers salary university's fund has : "+u.getTotalMoneyEarned()+" TK");
        System.out.println("::::");
        System.out.println("");
        
        
        //support Stuff's part
        System.out.print("Enter salary for Office Stuff : ");
        of.salary();
        System.out.println("");
        
        System.out.print("Enter salary for Cleaner : ");
        c.salary();
        System.out.println("");
        
        
        System.out.println("Office Stuff's Information ::*:: ");
        of.showInformation();
        System.out.println("");
        
        System.out.println("Cleaner's Information ::*:: ");
        c.showInformation();
        System.out.println("");
        System.out.println("");
        System.out.println("::::");
        System.out.println(":::::");
        System.out.println("After spending all cost ::: ");
        System.out.println("University Earned from Fall 20-21 semeter: "+u.getTotalMoneyEarned()+" TK");
        System.out.println("::::");
        System.out.println(":::::");
        System.out.println("");
        System.out.println("******* thank you ********");
        System.out.println("");
        
    }   
    
}
