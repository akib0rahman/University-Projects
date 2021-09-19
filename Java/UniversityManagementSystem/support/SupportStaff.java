package support;
import java.util.*;
import employee.*;

public abstract class SupportStaff implements Employee{
    Scanner input = new Scanner(System.in);
    
    private String id;
   
    public SupportStaff()
    {
	//default constructor
    }
    
    public SupportStaff(String id)
    {
        this.id = id; 
    }

    public String getId()
    {
        return id;
    }
    
    public void setId(String id) 
    {
        this.id = id;
    }

   
    public  void salary()
    {
        System.out.print("Enter salary   : ");
        
    }
    
    public  void workingHour()
    {
        
    }
    
    public void showInformation()
    {
        System.out.println("Id number    : "+ id );
        System.out.println("Working hour 7Am - 2Pm");
        
    }
    
}
