class A{
	
	void m1(){
		System.out.println("void m1()");
	}
	void m2(){
		System.out.println("void m2()");
	}
}
class B extends A{
	

	void m3(){
	System.out.println("void m3()");}
	void m4(){
	System.out.println("void m4()");}
	public static void main(String[] a){	
	B b = new B();
	b.m1();
	b.m2();
	b.m3();
	b.m4();
	}
}
