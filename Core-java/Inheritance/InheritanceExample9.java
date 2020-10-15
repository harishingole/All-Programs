// Parent class Instance Block 
class Parent
{
	static
	{
		System.out.println("Parent Static Block");
	}
	{
		System.out.println("Parent Instance Block");
	}
	Parent(int a)
	{
		
		System.out.println("parent class constructor 1 args");
	}
	
}
class Child extends Parent 
{	
	static
	{
		System.out.println("Child Static Block");
	}
	{
		System.out.println("Parent Instance Block");
	}
	Child()
	{
		this(10);
		System.out.println("Child Class Constructor 0 args");
	}
	Child(int c)
	{
		super(10);
		System.out.println("Child Class Constructor 1 args");
	}
	public static void main(String []args)
	{
		new Child();
	}
}
/*E:\Java Program>javac inheritance11.java

E:\Java Program>java Child
Parent Static Block
Child Static Block
Parent Instance Block
parent class constructor 1 args
Parent Instance Block
Child Class Constructor 1 args
Child Class Constructor 0 args*/
