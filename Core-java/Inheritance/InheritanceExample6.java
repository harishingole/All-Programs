// prevention
class Parent
{
	Parent(int a)
	{
		System.out.println("Parent class Constructor");
	}
}
class Child extends Parent 
{
	Child()
	{
		this(10,20);
		System.out.println("Child class 0-args Constructor");
	}
	Child(int a, int c)
	{
		super(10);
		System.out.println("Child class 1-args Constructor");
	}
	public static void main(String []args)
	{
		new Child();
		
	}
}
