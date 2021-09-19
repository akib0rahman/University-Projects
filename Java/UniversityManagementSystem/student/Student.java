package student;
import java.util.Scanner;
import university.University;

public class Student {
    
    
    Scanner input = new Scanner(System.in);
    
    public String name;
    private String id;
    public String semesterName;
    public int totalCredit;
    private int totalFees;
    private int fees;
    public int creditFee;
    
    public Student()
    {
    //default constructor
    }
    public Student(String semesterName)
    {
        this.semesterName = semesterName;
        
    }
    
    
    public void information()
            
    {
        
        System.out.print("Enter student  name    : ");
        name = input.nextLine();
        
        System.out.print("Enter student  id      : ");
        id = input.nextLine();
       
        
        System.out.print("Enter total    credit  : ");
        
        totalCredit = input.nextInt();
        while(true)
        {
            if(totalCredit<12)
            {
                System.out.println("You can't take less than 12 credit!!  ");               
                System.out.print("Enter total    credit  : ");
                totalCredit = input.nextInt();
            }
            if(totalCredit>=12)
                break;
        }
        
        System.out.print("Enter credit   fee     : ");
        totalFees = input.nextInt();
        
    }
    
   
    public void payFees()           
    {
        fees = totalCredit*totalFees;
        
        University.updateTotalMoneyEarned(fees);      
    }
    
    public void showInfo()
    {
        System.out.println("Semester Name :  "+semesterName);
        System.out.println("Student Name  :  "+name);
        System.out.println("Student Id    :  "+id);
        System.out.println("Credit taken  :  "+totalCredit);
        System.out.println("Credit fee    :  "+totalFees);
        System.out.println("Student's total semester fee : "+fees);
        
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public int getTotalFees() {
        return totalFees;
    }

    public void setTotalFees(int totalFees) {
        this.totalFees = totalFees;
    }

    public int getFeesPaid() {
        return fees;
    }

    public void setFeesPaid(int feesPaid) {
        this.fees = feesPaid;
    }
    
}
