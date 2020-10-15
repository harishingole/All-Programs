//initialize Value to instance variable in IB
class Test 
{
	int a;
	{
		a= 10;
	}
	static void disp()
	{	Test t = new Test();
		System.out.println(t.a);
	}

	public static void main(String[] args) 
	{
		new Test().disp();
	}
}
