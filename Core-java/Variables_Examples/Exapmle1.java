class Data 
{	
	int i=10;
	int j=20;
	static float k=5;
	static float l=6;

	void m1() 
	{
		System.out.println(i);
		System.out.println(j);
		System.out.println(k);
		System.out.println(l);
	}
	static void m2() 
	{
		System.out.println(d.i);
		System.out.println(d.j);
		System.out.println(k);
		System.out.println(l);
	}
	public static void main(String[] args) 
	{
		
		Data d = new Data();
		//System.out.println(a.i);
		//System.out.println(a.j);
		d.m1();
		d.m2();
	}

}
