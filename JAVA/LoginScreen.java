import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

class LoginScreen implements KeyListener
{
    static JTextField name=new JTextField("USERNAME");
    static JPasswordField pass=new JPasswordField("PASSWORD");
    static JTextField text=new JTextField();
    static JButton view=new JButton("VIEW");
    
    
    public static void main()
    {
        JFrame frame=new JFrame();
        frame.setSize(500,500);
        frame.setVisible(true);
        frame.setLayout(null);
        
        JLabel label1=new JLabel("NAME: ");
        JLabel label2=new JLabel("PASSWORD :");
        
        
        label1.setBounds(100,100,100,100);
        label2.setBounds(100,150,100,100);
        name.setBounds(200,100,100,50);
        pass.setBounds(200,150,100,50);
        view.setBounds(250,250,100,100);
        text.setBounds(5,350,300,400);
        
        frame.add(label1);
        frame.add(label2);
        frame.add(name);
        frame.add(pass);
        frame.add(view);
        frame.add(text);
        
        LoginScreen obj=new LoginScreen();
        view.addKeyListener(obj);
    }
    
    
    @Override
    public void keyPressed(KeyEvent e)
    {
        String passs=String.valueOf(pass.getPassword());
        text.setText("Username="+name.getText()+"\n Password = "+passs+"Key Pressed = "+e.getKeyChar());
    
    }
    @Override
    public void keyReleased(KeyEvent e)
    {
        String passs=String.valueOf(pass.getPassword());
        text.setText("Username="+name.getText()+"\n Password = "+passs+"Key released = "+e.getKeyChar());
    
    }
    @Override
    public void keyTyped(KeyEvent e)
    {
        String passs=String.valueOf(pass.getPassword());
        text.setText("Username="+name.getText()+"\n Password = "+passs+"   Key typed = "+e.getKeyChar());
    
    }
}
