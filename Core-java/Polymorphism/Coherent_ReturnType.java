/* Coherent return type concept at class level*/
class Parent
{
	Parent marry()
	{
		System.out.println("Black Girl");
		return this; 
	}
}
class Child extends Parent
{
	Child marry()
		{
			System.out.println("Red Girl");
		return this;
		}
	public static void main(String[] args) 
	{
		new Child().marry();
	}
}
