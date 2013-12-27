package rjxx007.com.sina.blog;

class Test{
	public static class InnerClass{
		void InClass(){
			System.out.println("Hello, in InnerClass");
		}
	}
}

public class Anonymous {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Test.InnerClass inn = new Test.InnerClass();
		inn.InClass();

	}

}
