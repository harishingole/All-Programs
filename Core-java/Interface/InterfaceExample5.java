interface it1{
	int a=10;//interface var by deafault final
	void m1();//method are by public and absract
}
class Test implements it1{
	public void m1(){
		a=a+1;//InterfaceExample5.java:7: error: cannot assign a value to final variable a
		System.out.println(a);
		}
	public static void main(String... s)
	{	
		Test t =new Test();
		t.m1();
	}	
}

