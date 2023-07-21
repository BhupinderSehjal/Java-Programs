import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class WindowBank
{
public void login()
{
JFrame J1 = new JFrame("Bank");
J1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
J1.setSize(900,800);
JPanel P1 = new JPanel();
P1.setLayout(null);
J1.setContentPane(P1);
J1.setVisible(true);
JLabel L1 = new JLabel("BANKING SYSTEM");
L1.setBounds(500,50,550,70);            //600 coloumn 60 line 400 breadth 70 length
L1.setFont(new Font("Dungeon",Font.PLAIN,50));
L1.setForeground(Color.BLACK);
P1.add(L1);
JLabel L2 = new JLabel("User Name ");
L2.setBounds(380,200,400,30);            //600 coloumn 60 line 400 breadth 70 length
L2.setFont(new Font("Dungeon",Font.PLAIN,30));
L2.setForeground(Color.DARK_GRAY);
P1.add(L2);

JTextField T1 = new JTextField();
T1.setBounds(640,200,350,30);            //600 coloumn 60 line 400 breadth 70 length
T1.setFont(new Font("Dungeon",Font.PLAIN,20));
T1.setForeground(Color.GRAY);
P1.add(T1);

JLabel L3 = new JLabel("Password  ");
L3.setBounds(380,270,400,30);            //600 coloumn 60 line 400 breadth 70 length
L3.setFont(new Font("Dungeon",Font.PLAIN,30));
L3.setForeground(Color.DARK_GRAY);
P1.add(L3);

JPasswordField PF = new JPasswordField();
PF.setBounds(640,270,350,30);            //600 coloumn 60 line 400 breadth 70 length
PF.setFont(new Font("Dungeon",Font.PLAIN,20));
PF.setForeground(Color.GRAY);
P1.add(PF);

JButton B1 = new JButton("OK ");
B1.setBounds(760,350,118,30);            //600 coloumn 60 line 400 breadth 70 length
B1.setFont(new Font("Dungeon",Font.PLAIN,30));
B1.setForeground(Color.DARK_GRAY);
P1.add(B1);

B1.addActionListener(new ActionListener()
{
public void actionPerformed(ActionEvent e)
{
	String un = T1.getText();
	String p = new String(PF.getPassword());
	JOptionPane.showMessageDialog(null,un+"\n"+p);
}
}
);

}
public void Accopen()
{
JFrame J2 = new JFrame("BANK");
J2.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
J2.setSize(900,800);
JPanel P2 = new JPanel();
P2.setLayout(null);
J2.setContentPane(P2);
J2.setVisible(true);
JLabel LB1 = new JLabel("ACCOUNT OPENING");
LB1.setBounds(500,50,550,70);            //600 coloumn 60 line 400 breadth 70 length
LB1.setFont(new Font("Digital-7 Mono",Font.PLAIN,50));
LB1.setForeground(Color.BLACK);
P2.add(LB1);
JLabel LB2 = new JLabel("Account No. ");
LB2.setBounds(380,200,400,30);            //600 coloumn 60 line 400 breadth 70 length
LB2.setFont(new Font("Dungeon",Font.PLAIN,30));
LB2.setForeground(Color.DARK_GRAY);
P2.add(LB2);

JTextField T2 = new JTextField();
T2.setBounds(640,200,350,30);            //600 coloumn 60 line 400 breadth 70 length
T2.setFont(new Font("Dungeon",Font.PLAIN,20));
T2.setForeground(Color.GRAY);
P2.add(T2);

JLabel L3 = new JLabel("Name  ");
L3.setBounds(380,270,400,30);            //600 coloumn 60 line 400 breadth 70 length
L3.setFont(new Font("Dungeon",Font.PLAIN,30));
L3.setForeground(Color.DARK_GRAY);
P2.add(L3);

JTextField T5 = new JTextField();
T5.setBounds(640,270,350,30);            //600 coloumn 60 line 400 breadth 70 length
T5.setFont(new Font("Dungeon",Font.PLAIN,20));
T5.setForeground(Color.LIGHT_GRAY);
P2.add(T5);

JLabel L4 = new JLabel("Amount  ");
L4.setBounds(380,340,400,30);            //600 coloumn 60 line 400 breadth 70 length
L4.setFont(new Font("Dungeon",Font.PLAIN,30));
L4.setForeground(Color.DARK_GRAY);
P2.add(L4);

JTextField T4 = new JTextField();
T4.setBounds(640,340,350,30);            //600 coloumn 60 line 400 breadth 70 length
T4.setFont(new Font("Dungeon",Font.PLAIN,20));
T4.setForeground(Color.LIGHT_GRAY);
P2.add(T4);

JLabel L5 = new JLabel("Type ");
L5.setBounds(380,410,400,30);            //600 coloumn 60 line 400 breadth 70 length
L5.setFont(new Font("Dungeon",Font.PLAIN,30));
L5.setForeground(Color.DARK_GRAY);
P2.add(L5);

JTextField T3 = new JTextField();
T3.setBounds(640,410,350,30);            //600 coloumn 60 line 400 breadth 70 length
T3.setFont(new Font("Dungeon",Font.PLAIN,20));
T3.setForeground(Color.LIGHT_GRAY);
P2.add(T3);

JLabel L6 = new JLabel("Date  ");
L6.setBounds(380,480,400,30);            //600 coloumn 60 line 400 breadth 70 length
L6.setFont(new Font("Dungeon",Font.PLAIN,30));
L6.setForeground(Color.DARK_GRAY);
P2.add(L6);

JTextField T6 = new JTextField();
T6.setBounds(640,480,350,30);            //600 coloumn 60 line 400 breadth 70 length
T6.setFont(new Font("Dungeon",Font.PLAIN,20));
T6.setForeground(Color.LIGHT_GRAY);
P2.add(T6);

JButton B2 = new JButton("OK ");
B2.setBounds(760,550,118,30);            //600 coloumn 60 line 400 breadth 70 length
B2.setFont(new Font("Dungeon",Font.PLAIN,25));
B2.setForeground(Color.DARK_GRAY);
P2.add(B2);
}


public static void main(String Args[])
{
	WindowBank BN1 = new WindowBank();
	BN1.login();
	BN1.Accopen();
}
} 
