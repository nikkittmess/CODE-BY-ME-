import javax.swing.*;
import java.awt.*;
public class EventHandling1
{
    public static void main(String[] args)
    {
         JFrame f= new JFrame();
         JPanel p=new JPanel();
         JLabel l=new JLabel("FIRST LABEL");
         JButton b=new JButton("CLICK ME");//BUTTON WITH MESSAGE
         
         b.setBackground(Color.white);
         b.setForeground(Color.red);
         f.setSize(400,500);//SETTING SIZE
         f.setVisible(true);//MAKE THE FRAME VISIBLE
         f.setTitle("FIRST FRAME");
         p.add(l);//ADDING LABEL TO PANEL
         f.add(p);//ADDING PANEL TO FRAME
         f.add(b);
         f.setVisible(true);
         
    }
}