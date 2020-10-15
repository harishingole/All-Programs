class Test
{
	static int a=1000;
	static int b=2000;
	public static void main(String... a){
		
		System.out.println(Test.a);
		System.out.println(Test.b);
		Test t = new Test();
		t.main();
	}
	void main(){
		
		System.out.println(Test.a);
		System.out.println(Test.b);
	}
	
}
