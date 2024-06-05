import java.util.Scanner;
public class ExceptionHandling
{
    public static void main (String[] args) 
    {
        try 
        {
           int a[]={1,2,3,4,5};
           a[6]=5/0;
        } 
        catch(ArithmeticException e) 
        {
            System.out.println(e.getMessage());
        }
        catch(IndexOutOfBoundsException e)
        {
            System.out.println(e.getMessage());
        }
    }
}