public class SingletonTest
{
	public static void main(String[] args){
		Singleton singleton1 = Singleton.getInstance();
		Singleton singleton2 = Singleton.getInstance();
		System.out.println(singleton1 == singleton2);
	}
}

class Singleton
{
	private static Singleton singleton= new Singleton();
	private Singleton(){
		
	}
	
	public static Singleton getInstance(){
		return singleton;
	}
}

class Singleton
{/*此方法在多线程中可能不是单例的*/
	private static Singleton singleton;
	
	private Singleton(){}
	
	public static Singleton getInstance(){
		if (singleton == null){
			singleton = new Singleton();
		}
		return singleton;
	}
	
}