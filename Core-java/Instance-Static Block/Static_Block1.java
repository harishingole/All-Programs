// Static Block Eaxmple 
class Test
{
	
	int a;
	int b;
	{
		a=10;
		System.out.println("INSTANCE BLOCK :: "+a);
	}
	{
		b=20;
		System.out.println("INSTANCE BLOCK :: "+b);
	}
	static
	{
		System.out.println("STATIC BLOCK :: "+a);
	}
	static
	{
		System.out.println("STATIC BLOCK :: "+b);
	}
	Test()
	{
		System.out.println(a);
	}
	Test(int c)
	{
		System.out.println(c);
	}	
	public static void main(String[] args) 
	{
		new Test(30);
	
	}
}
