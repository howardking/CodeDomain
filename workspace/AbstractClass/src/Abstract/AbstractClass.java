package Abstract;

class Dog{
	static {
		System.out.println("This is Class Dog, not a abstract class");
	}
}

abstract class Abstract extends Dog{
	static {
		System.out.println("This is a abstract Class extends Class Dog");
	}
	
}

public class AbstractClass {
	static {
		System.out.println("This is the static block, which is in the main");
	}
	public static void main(String[] args){
		System.out.println("This is main Function");
		//Abstract abs = new Abstract();
	}

}



