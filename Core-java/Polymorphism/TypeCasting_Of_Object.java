class Parent  
{
	void m1()
	{
		System.out.println("Parent method");
	}
}
class Child extends Parent
{
	void m1()
	{
		//this.m2();
		System.out.println("Child method");
	}
	void m2()
	{
		System.out.println("Direct method");
	}
	public static void main(String[] args) 
	{
		Parent p = new Child();
		p.m1();
		//p.m2();/*it gives an compile time error bez compiler checks 			p2()method in Parent class at compile time bit its not 				present in parent class.For resolving  this issue we have 				typecast*/
		
		Child c = (Child)p;//Typecast
		c.m2();
	}
}
