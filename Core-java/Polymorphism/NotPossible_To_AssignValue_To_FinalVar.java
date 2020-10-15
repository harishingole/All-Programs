class A 
{
	final int a;
	void m1(int a)
	{
		this.a = a;
		System.out.println(this.a);
	}
}
class B extends A
{	
	void m1()
	{
		System.out.println("Child m1()");
	}
	public static void main(String[] args) 
	{
		A a = new B();
		a.m1(10);
	}
}
