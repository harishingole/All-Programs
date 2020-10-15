class Test 
{
	Test()
	{
		this(10);
		System.out.println("0-Args");
	}
	Test(int a)
	{
		System.out.println("1 - args");
	}
	{
		System.out.println("Instance Blocks");
	}
	public static void main(String[] args) 
	{
		new Test();
		new Test();

	}
}
