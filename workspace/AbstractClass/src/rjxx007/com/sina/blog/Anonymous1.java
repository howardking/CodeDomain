package rjxx007.com.sina.blog;

interface ITest{
	public void print1();
}

public class Anonymous1 {

	/**
	 * @param args
	 */
	
	public ITest getITest(){
		return new ITest(){
			public void print1(){
				System.out.println("Hello China");
			}
		};
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Anonymous1 anon = new Anonymous1();
		ITest itest = anon.getITest();
		itest.print1();
	}

}
