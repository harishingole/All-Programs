// Static Block Eaxmple 
class A
{
	static
	{
	
		System.out.println("Static 1  ");
	}
	public static void main(String[] args) throws ClassNotFoundException
	{
		Class.forName("B");
		Class.forName("C");
	}
}
class B

{
	static
	{
		System.out.println("Class B Static 2 = ");
	}
}

class C
{
	static
	{
		System.out.println("Class C  Static 3 = ");
	}
}
		
	

