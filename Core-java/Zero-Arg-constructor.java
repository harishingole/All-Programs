//Default Constructors
class Test
{
	void m1()
	{
		System.out.println("m1 Method");
	}
	/*default cons 
	Test()
	{
		// Empty stack
	}*/
	public static void main(String[] args) 
	{
		Test t=new Test();//Zero Argument Constructor 
		t.m1();
	}
}
