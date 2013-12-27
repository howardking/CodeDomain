/**
 * @author shuaihua
 *
 */
public class Polytest {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		A a = null;
		if (args[0].equals("1")){
			a = new B();
			a.method();
		}
		if (args[0].equals("2")){
			a = new C();
			a.method();
		}
		if (args[0].equals("3")){
			a = new D();
			a.method();
		}

	}

}

class A
{
	public void method(){
		System.out.println("A");
	}
}

class B extends A
{
	public void method(){
		System.out.println("B");
	}
}

class C extends A
{
	public void method(){
		System.out.println("C");
	}
}

class D extends A
{
	public void method(){
		System.out.println("D");
	}
}
