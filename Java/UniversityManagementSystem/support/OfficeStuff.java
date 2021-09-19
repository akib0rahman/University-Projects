package support;

import university.University;

public class OfficeStuff extends SupportStaff{
    public int time;
    public int staffSalary;
    
    public OfficeStuff(String id)
    {
        super(id);
    }
    
    public  void workingHour()
    {
        
    }
    public  void salary()
    {
        staffSalary = input.nextInt();
        University.updateTotalMoneySpent(staffSalary);
    }
    
    public void showInformation()
    {
        super.showInformation();
        System.out.println("Salary       : "+staffSalary+" TK");
    }
    
}
