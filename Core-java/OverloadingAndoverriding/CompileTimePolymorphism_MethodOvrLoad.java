// method overloading example
//compile time execution
class Test
{
	void m1(int a)
	{
		System.out.println("First Method");
	}
	void m1(int v, int c)
	{
		System.out.println("second method");
	}
	void m1(char ch)
	{
		System.out.println("third method");
	}
	public static void main(String[] args) 
	{
		Test t = new Test();
		t.m1(10);
		new Test().m1(10,20);
		new Test().m1('s');
	}
}