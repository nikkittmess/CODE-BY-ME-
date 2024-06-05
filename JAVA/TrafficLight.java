import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class TrafficLight extends JFrame implements ActionListener {
private JRadioButton redButton, yellowButton, greenButton;
private ButtonGroup buttonGroup;
public TrafficLight() {
super("Traffic Light");
// Set up the radio buttons
redButton = new JRadioButton("Red");
yellowButton = new JRadioButton("Yellow");
greenButton = new JRadioButton("Green");
// Add the radio buttons to a button group so that only one can be selected at a time
buttonGroup = new ButtonGroup();
buttonGroup.add(redButton);
buttonGroup.add(yellowButton);
buttonGroup.add(greenButton);
// Add action listeners to the radio buttons
redButton.addActionListener(this);
yellowButton.addActionListener(this);
greenButton.addActionListener(this);
// Lay out the radio buttons vertically
JPanel radioPanel = new JPanel(new GridLayout(3, 1));
radioPanel.add(redButton);
radioPanel.add(yellowButton);
radioPanel.add(greenButton);
// Add the radio panel to the content pane
getContentPane().add(radioPanel, BorderLayout.CENTER);

// Set up the window
setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
setSize(200, 200);
setVisible(true);
}
public void actionPerformed(ActionEvent e) {
// Turn off all the lights
redButton.setSelected(false);
yellowButton.setSelected(false);
greenButton.setSelected(false);
// Turn on the selected light
JRadioButton button = (JRadioButton) e.getSource();
button.setSelected(true);
// Display a message indicating which light is on
String message = "The " + button.getText() + " light is on.";
JOptionPane.showMessageDialog(this, message);
}
public static void main(String[] args) {
new TrafficLight();
}
}
