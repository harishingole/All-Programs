// Static Block Eaxmple 
class Test
{
	static int i;
	static int j;
	int a;
	int b;
	{
		a=2000;
		System.out.println("IB1 = "+a);
	}
	{
		b=3000;
		System.out.println("IB2 = "+b);
	}
	static
	{
		i=100;
		System.out.println("Static 1 = "+i);
	}
	static
	{
		j=200;
		System.out.println("Static 2 = "+j);
	}	
	Test(int c, int d)
	{
		this.a=c;
		this.b=d;
		//System.out.println("CNS 1 = "+c);
	}
	void m1()
	{
		System.out.println("CNS 1 = "+a);
		System.out.println("CNS 2 = "+b);
	}
	
	public static void main(String[] args) 
	{
		
		Test t= new Test(20,30);
		t.m1();
	}
}
