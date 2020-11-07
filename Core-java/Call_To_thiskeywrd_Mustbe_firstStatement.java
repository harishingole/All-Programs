 //call to this must be first statement in constructor
 class Test
{
	Test()
	{// call to this must be first statement in constructor
		System.out.println("0-ARGS CONSTRUCTOR");
		this(10);
	}

	Test(int a)
	{// call to this must be first statement in constructor
		
		System.out.println("1-ARGS CONSTRUCTOR");
		this(10,20);
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
