import java.util.Scanner;
import java.lang.Math;

class MultipleInterface implements div,sub,add,mul,pow
{
    @Override
    public void action(int a[])
    {
        div.super.action(a);
        sub.super.action(a);
        add.super.action(a);
        pow.super.action(a);
        mul.super.action(a);
        
        
    }
    
    public static void main ()
    {
        Scanner sc=new Scanner(System.in);
        MultipleInterface m=new MultipleInterface();
        
        System.out.println("Enter 2 numbers");
        
        int a=sc.nextInt();
        int b=sc.nextInt();
        int c[]={a,b};
        m.action(c);
        
        
    }
}



interface div
{
    default void action(int a[])
    {
        int result=(int)a[0]/a[1];
        System.out.println("Result of division of "+a[0]+" "+a[1]+" = "+result);
    }
    
}

interface add
{
    default void action(int a[])
    {
        int result=(int)a[0]+a[1];
        
        System.out.println("Result of addition of "+a[0]+" "+a[1]+" = "+result);
    }
    
}
interface sub
{
    default void action(int a[])
    {
        int result=(int)a[0]-a[1];
        
        System.out.println("Result of subtraction of "+a[0]+" "+a[1]+" = "+result);
    }
    
}

interface mul
{
    default void action(int a[])
    {
        int result=(int)a[0]*a[1];
        
        
        System.out.println("Result of multiplication of "+a[0]+" "+a[1]+" = "+result);
    }
    
}

interface pow
{
    default void action(int a[])
    {
        int result=(int)Math.pow(a[0],a[1]);
        
        System.out.println("Result of power of "+a[0]+" "+a[1]+" = "+result);
    }
    
}


















