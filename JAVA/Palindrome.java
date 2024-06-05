import java.util.Scanner;
public class Palindrome 
{
    public static void main () 
    {
        Scanner sc=new Scanner(System.in);
        
        String word=sc.nextLine();
        String reverse="";
        int len=word.length()-1;
        for(int i=len;i>=0;i--)
        {
            reverse+=word.charAt(i);
        }
        
        if(word.equalsIgnoreCase(reverse))
        {
            System.out.println(word+" is a palindrom");
        }
        else
        {
            System.out.println("Not a palindrome");
        }
    }
}