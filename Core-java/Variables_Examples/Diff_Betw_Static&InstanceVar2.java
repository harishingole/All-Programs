class Test{

	int a=10;
	static int b=20;
	
	public static void main(String... s){
	
		Test t = new Test();
		System.out.println(t.a);
		System.out.println(Test.b);		
		
		t.a=100;
		Test.b=200;
		Test t2 = new Test();
		System.out.println(t2.a);
		System.out.println(t2.b);
		

		
	}
}
