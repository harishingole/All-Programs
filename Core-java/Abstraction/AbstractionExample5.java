// it is possible to declare variables, constructor, static block, instance block, methods
abstract class Test{
	
	static int a;
	int b;
	
	Test(){
		System.out.println("Test()");
	}
	static {
		a=10;
	}
	{
		b=20;
	}
	
	void m1()
	{
		System.out.println("void m1()");
		System.out.println("a :: "+Test.a+"\nb :: "+this.b);
	}
}
class Test1 extends Test{
	
	
	Test1(){super();}
	public static void main(String[] args){
		new Test1().m1();	
	}
	
}
