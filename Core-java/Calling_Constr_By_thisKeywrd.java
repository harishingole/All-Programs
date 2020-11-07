// Calling Constructor using This Keyword;
class Test
{
	Test()
	{
		this(10);
		System.out.println("0-ARGS CONSTRUCTOR");
		
	}

	Test(int a)
	{
		this(10,20);
		System.out.println("1-ARGS CONSTRUCTOR");
	}

	Test(int a, int b)
	{
		System.out.println("2-ARGS CONSTRUCTOR");
	}
	public static void main(String[] args) 
	{
		Test t2 = new Test();
	}
}
