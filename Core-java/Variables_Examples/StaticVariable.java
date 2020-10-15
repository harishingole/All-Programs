class Test
{
	static int a=1000;
	static int b=2000;
	public static void main(String... a){
		
		System.out.println(Test.a);
		System.out.println(Test.b);
		new Test().m1();
	}
	public static void m1()
	{
		System.out.println(a);
		System.out.println(b);

	}
	
}
