import java.util.*;

class StaticTest{
	static int i = 47;
}

class Incrementable{
	static int increment(){
		return StaticTest.i++;
	}
}

public class HelloData{
	public static void main(String []args){
		StaticTest st1 = new StaticTest();
		StaticTest st2 = new StaticTest();
		Incrementable sf = new Incrementable();
		System.out.println(Incrementable.increment());
		System.out.println(StaticTest.i++);
		System.out.println(st1.i++);
		System.out.println(StaticTest.i);
		System.out.println(sf.increment());
		System.out.println(Incrementable.increment());
		System.out.println("Hello, it's: ");
		System.out.println(new Date());
		System.getProperties().list(System.out);
		System.out.println(System.getProperty("user.name"));
		System.out.println(
		System.getProperty("java.library.path"));
	}
	
}