 
abstract class Test{

	abstract void m1();
	abstract void m2();
	abstract void m3();
	void m4(){System.out.println("Void m4");}
}
class Test1 extends Test{
	
	void m1(){System.out.println("Void m1");}
	void m2(){System.out.println("Void m2");}
	void m3(){System.out.println("Void m3");}
	public static void main(String[] args)
	{
		//Test t = new Test();//Abstract class object creation is possible
		Test t1 = new Test1();
		t1.m1(); //compile time :: Checks Test class   Runtime :: execute Test1 class Methods
		t1.m2(); //compile time :: Checks Test class  Runtime :: execute Test1 class Methods
		t1.m3(); //compile time :: Checks Test class  Runtime :: execute Test1 class Methods
		t1.m4(); //compile time :: Checks Test class  Runtime :: execute Test1 class Methods
	}
}
