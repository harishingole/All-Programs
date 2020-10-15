/*
	for instance varibale every object creation seperate memory will be created
	but for static variable even we create multiple object there is only on 		memory is created
*/
class  Max
{
	int a=10;
	static int b=20;
	public static void main(String[] args) 
	{
		Max m = new Max();
		System.out.println(m.a);
		System.out.println(m.b);
		m.a=111;
		m.b=222;
		System.out.println(m.a);//111
		System.out.println(m.b);//222
		
		Max m1 =new Max();
		System.out.println(m1.a);//10
		System.out.println(m1.b);//222
		
		Max m2 =new Max();
		System.out.println(m2.a);//10
		System.out.println(m2.b);//222
		
		
	}
}
