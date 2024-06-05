class ThreadClass extends Thread
{
    public static void main()
    {
        Thread t1=new Thread();
        t1.start();
        try{
            while(t1.isAlive())
        {
            System.out.println("T1 is running");
            t1.sleep(400);
        }
            
        }
        catch(InterruptedException e)
        {
            e.printStackTrace();
        }
        
        t1.stop();
    }
}