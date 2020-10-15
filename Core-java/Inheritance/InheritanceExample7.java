// prevention
class Parent
{// defualt constructor 
}
class Child extends Parent 
{
	Child()
	{
		super();
		System.out.println("Child class 0-args Constructor");
	}
	public static void main(String []args)
	{
		new Child();
		
	}
}
