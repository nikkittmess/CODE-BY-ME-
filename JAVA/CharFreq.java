import java.util.Scanner;
public class CharFreq 
{
    public static void main (String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        String word=sc.nextLine();
        char string[]=word.toCharArray();
        int len=string.length;        
        int freq[]=new int[len];
        for(int i=0;i<len;i++)
        {
            freq[i]=1;
            for(int j=i+1;j<len;j++)
            {
                
                if(string[i]==string[j])
                {
                    freq[i]+=1;
                    string[j]=' ';
                }
            }

        }
        for(int y=0;y<len;y++)
        {
            if(string[y]!=' ')
            {
                System.out.println(word.charAt(y)+" - "+freq[y]);
            }
        }
    }
}