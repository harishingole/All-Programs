// prevention
class Parent
{
	int a=10;
	int b=20;
	void add(int a, int b)
	{
		System.out.println(a+b);//local variable
		System.out.println(this.a+this.b);//sub class
		
	}
}
class Child extends Parent 
{

	void m2()
	{
		System.out.println(super.a+super.b);// super class 
	}
	public static void main(String []args)
	{
		new Child().add(1000,2000);
		new Child().m2();
	}
}
