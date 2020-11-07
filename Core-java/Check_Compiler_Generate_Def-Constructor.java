//if you are not declaring o-args constructor then its Compiler's responsibility to generate default constructor BUT if you ar edeclaring 1-args constructor then compiler is note generating 0-args constructor.You must declare 0-args constructor otherwise compiler give an error 
/*constructor3.java:11: error: constructor Test in class Test cannot be applied to given types;
		Test t=new Test();*/
class Test
{
	
	Test(int a)
	{
		System.out.println("1-args");
	}
	public static void main(String[] args) 
	{
		Test t=new Test();
		Test t1=new Test(12);
	}
}
