public class GarbageCollector
{
    public static void main(String[] args)
    {
        for(int i=0;i<1000;i++)
        {
            Object obj=new Object();
        }
        
        System.gc();
        
        System.out.println("Garbage Collection Done");
    }
}
