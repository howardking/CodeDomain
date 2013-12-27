package rjxx007.com.sina.blog;

class Father{
	public int Friends = 10;
	protected int Age = 56; 
	private String FaName = "Jack";
	
	public String GetFaName(){
		return this.FaName;
	}
	
	public static void main(String[] srgs){
		System.out.println("This main function is in Father");
		
	}
}

class Sun extends Father{
	public int Age = 20;
	String SunName = "Chen";
	public void Display(){
		System.out.println(super.Friends);
	}
	public static void main(String[] srgs){
		System.out.println("This main function is in Sun");
		
	}
}

public class Interitance {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Father father = new Sun();
		Sun sun = new Sun();
		System.out.println(father.Age);
		System.out.println(father.Friends);
		//System.out.println(father.FaName);
		System.out.println(father.GetFaName());
		System.out.println(((Sun)father).Age);
		System.out.println(((Sun)father).SunName);
		sun.Display();
		System.out.println(sun.GetFaName());
		Father.main(null);
		Sun.main(null);
	}

}
