//Is it possible to create constructor.?
//	--Yes
abstract class Test{

	Test(){
		System.out.println("abstract Test()");
	}
	
	abstract void m2();
}
class Test1 extends Test{

	void m2(){
		System.out.println("void m1()");
	}
	Test1(){
		super();
		System.out.println("Test1()");
	}
	public static void main(String[] args)
	{
		Test t = new Test1();
		
		t.m2();
	}
}

