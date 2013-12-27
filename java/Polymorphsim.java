public class Polymorphsim
{
    public static void main(String[] arges)
    {
        Father father = new Son();
        father.run();
	Father far = (Father)father;
        far.run();
    }
}

class Father
{
    public void run(){
        System.out.println("This is Father running");
    }
}

class Son extends Father
{
    public void run(){
        System.out.println("sun is running");
    }
}
