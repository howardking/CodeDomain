interface inter{
	int VALUE = 5;
	void play();
}

interface inter2 extends inter{
	void adjust();
}

interface inter3 extends inter{
	void run();
}

interface inter4 extends inter, inter2, inter3{

}

public class InterfaceInheritance implements inter
{
	public void play(){
		System.out.println("This is interface Play()");
	}
	public static void main(String[] args){
		InterfaceInheritance interfaceIn = new InterfaceInheritance();
		interfaceIn.play();
	}
}

