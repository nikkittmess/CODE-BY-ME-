import java.awt.event.*;
import javax.swing.*;
public class CBAL
{
    JFrame f;
    void ComboBoxExample()
    {
        f=new JFrame("Combo Box With Action Listener");
        final JLabel label=new JLabel();
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setSize(400,100);
        JButton b=new JButton("Show");
        b.setBounds(200,100,75,20);
        String languages[]={"C","JAVA","Python","R","PHP"};
        final JComboBox cb=new JComboBox(languages);
        cb.setBounds(50,100,90,20);
        f.add(cb);
        f.add(b);
        f.add(label);
        f.setSize(400,400);
        f.setLayout(null);
        f.setVisible(true);
        b.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                {
                    String data="Programming Langauge Selected :"+cb.getItemAt(cb.getSelectedIndex());
                    label.setText(data);    
                }
            }
        }
        
    
        );
        
    }
    
    public static void main(String[] args)
    {
        CBAL cbal=new CBAL();
        cbal.ComboBoxExample();
    }
}

