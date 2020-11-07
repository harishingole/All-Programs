//Userdefined  Constructors
class Test
{
	void m1()
	{
		System.out.println("m1 Method");
	}
	//user defined cons
	Test()
	{
		System.out.println("0- Args");
	}
	Test(int a)
	{
		System.out.println(a);
	}
	public static void main(String[] args) 
	{
		new Test();
		new Test(2);//parameterized constructor
		new Test().m1();//we can called m1 method by any object in this class
	}
}
