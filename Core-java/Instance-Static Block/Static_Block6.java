class Test 
{
	static int a;
	static void disp()
	{
		System.out.println(Test.a);
	}
	static
	{
		a=10;
	}
	public static void main(String[] args) 
	{
		new Test().disp();
	}
}
