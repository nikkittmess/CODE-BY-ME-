public class ThreadSync
{
    public static void main(String[] args)
    {
        Printer printer=new Printer();
        Thread t1 = new Thread(new PrintJob("Job 1", printer));
        Thread t2 = new Thread(new PrintJob("Job 2",printer));
        t1.start();
        t2.start();
    }
}

class Printer
{
    public synchronized void printer(String jobName)
    {
        System.out.println("Starting to print "+jobName);
        try
        {
            Thread.sleep(1000);
            
        }
        catch(InterruptedException e)
        {
            e.printStackTrace();
        }
        System.out.println("Finished printing "+jobName);
    }
}

class PrintJob implements Runnable
{
    private String jobName;
    private Printer printer;
    
    public PrintJob(String jobName,Printer printer)
    {
        this.jobName=jobName;
        this.printer=printer;
    }
    
    @Override
    public void run()
    {
        printer.printer(jobName);
    }
    
}