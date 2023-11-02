import javax.swing.*;
import java.awt.event.*;
import java.awt.GridLayout;

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
        setLayout(new GridLayout(4,1));
        add(t1);
        add(new JLabel());
        add(t2);
        add(new JLabel());
        add(t3);
        add(new JLabel());
        add(b1);
        add(b2);
        t3.setEditable(false);
        // setting the properties of the frame
        setSize(400, 400);
        setVisible(true);
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