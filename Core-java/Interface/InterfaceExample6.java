// the variable a generate ambiguity problem
interface it1{
	int a=10;//interface var by default public static final
	//void m1();//method are by public and absract
}
interface it2{
	int a=1000;//interface var by default public static final
	//void m1();//method are by public and absract
}

class Test implements it1,it2{
	void m1(){
		
		System.out.println(a);/*InterfaceExample6.java:13: error: reference to a is ambiguous
					System.out.println(a);
		                   	both variable a in it1 and variable a in it2 match*/
		}
	public static void main(String... s)
	{	
		Test t =new Test();
		t.m1();
	}	
}

