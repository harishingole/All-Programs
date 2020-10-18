//implemetation of Multiple inheritance with interface
//one interface is able to extends multiple interface
//void m2(); it treated as only one declaration;
interface it{
	void m1();// by default public and abstract
	void m2();
}
interface it1{
	void m2();// by default public and abstract
	void m3();// by default public and abstract
}
interface it2 extends it,it1{
	void m4();
	void m5();
	//interface it1 contains 5 abstract methods
}
class Test implements it2{
	public void m1(){System.out.println("void m1()");}
	public void m2(){System.out.println("void m2()");}
	public void m3(){System.out.println("void m3()");}
	public void m4(){System.out.println("void m4()");}
	public void m5(){System.out.println("void m5()");}
	public static void main(String... s){
		it2 t = new Test();// Interface is able to hold implementation class object
		t.m1();
		t.m2();
		t.m3();
		t.m4();
		t.m5();			
	}		
}

