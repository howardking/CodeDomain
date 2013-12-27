package rjxx007.com.sina.blog;

class Inst{
	private String StrName="Woeld";
	
	public void SetName(String StrName){
		this.StrName = StrName;
	}
	
	public void Dispaly(){
		System.out.println("Hello"+" "+StrName);
	}
}

public class HelloChina {

	public static void main(String[] args) {
		Inst inst = new Inst();
		inst.SetName("China");
		inst.Dispaly();

	}

}
