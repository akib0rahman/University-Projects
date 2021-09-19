package support;

import university.*;

public class Cleaner extends SupportStaff {
    
    public int time;
    public int cleanerSalary;
    
    public Cleaner(String id)
    {
        super(id);
    }
    
    public  void workingHour()
    {
        
    }
    public  void salary()
    {
        cleanerSalary = input.nextInt();
        University.updateTotalMoneySpent(cleanerSalary);
    }
    
    public void showInformation()
    {
        super.showInformation();
        System.out.println("Salary       : "+cleanerSalary+" TK");
    }
}
