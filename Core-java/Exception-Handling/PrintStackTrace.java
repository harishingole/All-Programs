//printStackTrace method print the complete information of stack where exception is occurred
class test{
	void m1()
	{
		int a;
		try{a=10/0;}
		catch(ArithmeticException ae){ae.printStackTrace();}
	}
	void m2(){
		m1();
	}
	void m3(){
		m2();
	}
	void m4(){
		m3();	
	}
	public static void main(String... s){
		new test().m4();
	}
}

