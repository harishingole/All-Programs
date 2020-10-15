// prevention
class Parent
{
	void m1()
	{
		System.out.println("Parent class Method");
	}
}
class Child extends Parent 
{
	void m1()
	{
		System.out.println("Child class Method");
		
	}
	void m2()
	{
		super.m1();//super class method
		m1();
		
	}
	public static void main(String []args)
	{
		new Child().m2();
	}
}
