import java.awt.*;
import javax.swing.*;
public class OptionPane
{
    JFrame f;
    public void OptionPaneExample()
    {
         f=new JFrame();
         String name=JOptionPane.showInputDialog(f,"Enter Name");
         String c;
         if(name.equalsIgnoreCase("nikkitt"))
         {
             c="Welcome Back Nikkitt";
         }
         else
         {
             c="Wrong User";
         }
         JOptionPane.showMessageDialog(f,c);
    }
    public static void main(String[] arg)
    {
        
    
        
        OptionPane op=new OptionPane();
        op.OptionPaneExample();
        
        
    
    }
}