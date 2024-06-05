class ThreadRunnable implements Runnable
{
    public static void main()
    {
        Thread t1=new Thread();
        Thread t2=new Thread();
        
        
        try{
            
            t1.start();
            t2.start();
            
            
            t1.join();
            t2.join();
            System.out.print("Done with threads");
        }
        catch(InterruptedException e)
        {
            e.printStackTrace();
        }
        
        
    }
    
    @Override
    public void run()
    {
        System.out.println("Thread is running");
    }
    
    
    
}
