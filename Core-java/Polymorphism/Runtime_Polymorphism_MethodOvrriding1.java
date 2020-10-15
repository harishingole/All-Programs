/* Method Overriding
rule no1 : Overridden method signature 
& Overridding Method signature must be same*/
class Parent 
{// overridden method
	void marry()
	{
		System.out.println("Black Girl");
	}
}
class Child extends Parent
{// overridding method
	void marry()
	{
		System.out.println("Red Girl");
		
	}
	public static void main(String[] args) 
	{
		new Child().marry();
	}
}
