package rjxx007.com.sina.blog;

import java.awt.Frame;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class AnonymousSwing extends Frame{

	/**
	 * @param args
	 */
	public AnonymousSwing(String arg){
		this.setTitle("应用标题");
		addWindowListener(new WindowAdapter(){
			public void windowClosing(WindowEvent e){
				dispose();
				System.exit(0);
			}	
		});
	this.setBounds(10, 10, 200, 200);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		AnonymousSwing swing = new AnonymousSwing(null);
	}	

}
