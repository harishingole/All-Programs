interface it1{
	void m1();
	void m2();
	void m3();
	void m4();
	void m5();
	void m6();
	void m7();
	void m8();
	
}
class X implements it1{
	public void m1(){};public void m2(){};public void m3(){};
	public void m4(){};public void m5(){};public void m6(){};
	public void m7(){};public void m8(){};
}
class Test extends X{
	public void m6(){System.out.println("void m6");};
	public void m7(){System.out.println("void m7");};
	public static void main(String... s){
		Test t = new Test();
		t.m6();
		t.m7();
	}
}
