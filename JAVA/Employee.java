


class Employee
{
    String name;
    int age;
    int PhNo;
    String address;
    int salary;
    public Employee(String name,int age,int PhNo,String address,int salary)
    {
        this.name=name;
        this.age=age;
        this.PhNo=PhNo;
        this.address=address;
        this.salary=salary;
    }
    public void printSalary()
    {
        System.out.println("Salary : "+salary);
    }
}

class Officer extends Employee
{
    String specialization;
    
    public Officer(String name,int age,int PhNo,String address,int salary,String specialization )
    {
        super(name,age,PhNo,address,salary);
        this.specialization=specialization;
    }

    
}

class Manager extends Employee
{
    String department;
    
    public Manager(String name,int age,int PhNo,String address,int salary,String specialization )
    {
        super(name,age,PhNo,address,salary);
        this.department=department;
    }

    
}

class Inheritance
{
    public static void main (String[] args) 
    {
        Officer officer=new Officer("Nikkitt Mesiliy",19,123456789,"Banaglore",5099999,"Data Science");
        Manager manager=new Manager("BRUH",99,3393948,"Hyderabad",99,"Time Pass");
        
    
        
        System.out.println("Officer Information");
        System.out.println("Name= "+officer.name);
        System.out.println("Age= "+officer.age);
        System.out.println("Phone Number= "+officer.PhNo);
        System.out.println("Address= "+officer.address);
        officer.printSalary();
        System.out.println("specialization = "+officer.specialization);
        
        
        
        System.out.println("\n\nManagerInformation");
        System.out.println("Name= "+manager.name);
        System.out.println("Age= "+manager.age);
        System.out.println("Phone Number= "+manager.PhNo);
        System.out.println("Address= "+manager.address);
        manager.printSalary();
        System.out.println("specialization = "+manager.department);
    }
}