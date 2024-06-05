import java.util.Scanner;
public class MatrixMult
{
    public static void main (String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int a[][]={{1,2,3},{4,5,6},{7,8,9}};
        int b[][]={{10,11},{12,13},{14,15}};
        int c[][]=new int[3][2];
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {   c[i][j]=0;
                for(int k=0;k<3;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<2;j++)
            {   
                System.out.print(c[i][j]+" ");
                
            }
            System.out.println(" ");
        }
        
    }
}