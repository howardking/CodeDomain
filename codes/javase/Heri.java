public class Heri{
	public static void main(String[] args){
		Father father = new Son();
		father.output();
		father = new Father();
		father.output();
	}
}

class Father{
	public void output(){
		System.out.println("Father");
	}
}

class Son extends Father{
	public void output(){
		super.output();
		System.out.println("Son");
	}
}
