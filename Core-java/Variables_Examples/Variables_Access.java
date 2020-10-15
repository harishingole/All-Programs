class Test
{
	//static variables
	static int a=15;
	static int b=10;

	//instance method
	void m1()
	{	//instance area

		System.out.println(Test.a);//Static Variable access through class
		System.out.println(Test.b);//Static Variable access through class 
	}

	//static method
	public static void main(String[] args) 
	{	//static Area
		Test v = new Test();
		System.out.println(a);//Direct access
		System.out.println(b);//Direct access
		v.m1();
	}
}
