import javax.swing.*;
import java.awt.event.*;

public class Calc extends JFrame implements ActionListener {
    String s1, s2, s3;
    int a, b, c = 0;
    JButton b1, b2;
    JTextField t1, t2, t3;
    Calc() {
        b1 = new JButton("+");
        b2 = new JButton("-");
        t1 = new JTextField();
        t2 = new JTextField();
        t3 = new JTextField();
        b1.addActionListener(this);
        b2.addActionListener(this);
        // setting bounds
        t1.setBounds(50, 50, 150, 20);
        t2.setBounds(50, 100, 150, 20);
        t3.setBounds(50, 150, 150, 20);
        b1.setBounds(100, 150, 50, 50);
        b2.setBounds(170, 150, 50, 50);
        // adding the elements to the frame
        add(t1);
        add(t2);
        add(t3);
        add(b1);
        add(b2);
        t3.setEditable(false);
        // setting the properties of the frame
        setSize(400, 400);
        setVisible(true);
        setLayout(null);
    }
    public void actionPerformed(ActionEvent e) {
        s1 = t1.getText();
        s2 = t2.getText();

        a = Integer.parseInt(s1);
        b = Integer.parseInt(s2);

        if (e.getSource() == b1) {
            c = a + b;
        } else if (e.getSource() == b2) {
            c = a - b;
        }
        s3 = Integer.toString(c);
        t3.setText(s3);
    }
    public static void main(String[] args) {
        new Calc();
    }
}