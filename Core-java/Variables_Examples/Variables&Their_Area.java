class Test 
{
	//instance variables
		int a=15;
		int b=10;
		//static method
	public static void main(String[] args) 
	{	//static Area
		Test t = new Test();
		System.out.println(t.a);
		System.out.println(t.b);
		Test.m1();
	}
		//instance method
	static void m1()
	{	//static area
		Test t = new Test();
		System.out.println(t.a);
		System.out.println(t.b);
	}
}
