abstract class Test{

	abstract void m1();
	abstract void m2();
	abstract void m3();
	void m4(){System.out.println("Void m4");}
}
abstract class Test1 extends Test{
	
	void m1(){System.out.println("Void m1");}
}
abstract class Test2 extends Test1{
	void m2(){System.out.println("Void m2");}
	
}
class Test3 extends Test2{
	
	void m3(){System.out.println("Void m3");}
	public static void main(String[] args)
	{
		//Test t = new Test();//Abstract class object creation is possible
		Test3 t1 = new Test3();
		t1.m1();
		t1.m2();
		t1.m3();
		t1.m4();
	}
}
