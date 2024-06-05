import java.util.Scanner;

public class hw3
{
	public static void main(String[] args) 
	{
	    int a,b,i;
	    Scanner sc=new Scanner(System.in);
		System.out.println("Enter 2 numbers");
		a=sc.nextInt();
		b=sc.nextInt();
		
	    for(i=a;i<=b;i++)
	    {
	        if(i==(a+2))
	        {
	            mult(a,i);
	            a=i+1;
	            System.out.println("");
	        }
	        else if(a==b)
	        {
	            mult(a,b);
	        }
	        
	    }
	}
	
	
	public static void mult(int a ,int b)
	{
	    if(a!=b)
	    {
	        
	   
	    for(int i=1;i<=10;i++)
	    {
	        
	        for(int x=a;x<=b;x++)
	        {
	
	            System.out.print(x+" * "+i+" = "+(x*i)+"\t");
	             
	        }
	         System.out.println("");
	    }
	    }
	    else
	    {
	        for(int i=1;i<=10;i++)
	    {
	        
	        
	
	            System.out.println(a+" * "+i+" = "+(a*i)+"\t");
	             
	        }
	         
	    }
	    
	}
}