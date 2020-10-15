//initialize Value to instance variable in IB
class Test 
{
	int a;
	//instance block
	{
		a= 10;
	}
	//instance method
	void disp()
	{
		System.out.println(a);
	}
	//static method
	public static void main(String[] args) 
	{
		Test t = new Test();
		t.disp();
	}
}
