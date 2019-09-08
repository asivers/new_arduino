import arduino.Arduino;
import java.util.Scanner;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MorseArduino extends JFrame {

    public MorseArduino() throws InterruptedException {

        Arduino arduino = new Arduino("COM3", 9600);
        boolean connected = arduino.openConnection();
        Thread.sleep(2000);

        JPanel content = new JPanel();
        GridLayout layout = new GridLayout(2,1,5,0);
        content.setLayout(layout);
        content.setBorder(BorderFactory.createEmptyBorder(5, 5, 5, 5));

        JTextField textField = new JTextField("");
        textField.setHorizontalAlignment(JTextField.CENTER);

        JButton button = new JButton("Translate to morse code");

        ActionListener actionListenerButton = new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                arduino.serialWrite(textField.getText());
            }
        };

        content.add(textField);

        button.addActionListener(actionListenerButton);
        content.add(button);

        getContentPane().add(content);

        setTitle("Morse code");
        setLocation(650,300);
        setPreferredSize(new Dimension(200, 200));
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        pack();
        setVisible(true);
    }

    public static void main(String[] args) throws InterruptedException{
        new MorseArduino();
    }
}