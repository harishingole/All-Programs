// In this problem we achieve the abstraction and runtime polymorphism with pure abstract class = Interface

interface it1{
	void m1();// by default public and abstract
	void m2();// by default public and abstract
	void m3();// by default public and abstract
}
class Test implements it1{
	public void m1(){System.out.println("void m1()");}
	public void m2(){System.out.println("void m2()");}
	public void m3(){System.out.println("void m3()");}
	public static void main(String... s){
		it1 t = new Test();// Interface is able to hold implementation class object
		t.m1();
		t.m2();
		t.m3();			
	}		
}

/*
InterfaceExample1.java:9: error: m3() in Test cannot implement m3() in it1
	void m3(){System.out.println("void m3()");}
	     ^
  attempting to assign weaker access privileges; was public

This error occures bez we decrease the method permission by default interface methods are public 
and abstract and we are decreasing the method permission with default modifier 
to overcome this proble we need to use public modifier for all Test class methods 


*/
