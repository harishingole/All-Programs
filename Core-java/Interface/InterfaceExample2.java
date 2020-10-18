//In this example we achieve abstraction,Inheritance and Polymorphism
interface it1{
	void m1();// by default public and abstract
	void m2();// by default public and abstract
	void m3();// by default public and abstract
}
abstract class Test implements it1{
	public void m1(){System.out.println("void m1()");}
}
abstract class Test1 extends Test{
	public void m2(){System.out.println("void m2()");}
}
class Test2 extends Test1{
	public void m3(){System.out.println("void m3()");}
	public static void main(String... s){
		it1 t = new Test2();// Interface is able to hold implementation class object
		t.m1();
		t.m2();
		t.m3();			
	}		
}
