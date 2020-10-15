// prevention
class Parent
{
	Parent(int a)
	{
		System.out.println("parent class constructor");
	}
}
class Child extends Parent 
{
	Child()
	{
		super(10);
		System.out.println("Child class 0-args Constructor");
	}
	public static void main(String []args)
	{
		new Child();
		
	}
}
