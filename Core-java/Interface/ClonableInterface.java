class Test implements Cloneable{

	int a=1;
	int b=2;

	public static void main(String... s)throws Exception{
		Test t = new Test();
		System.out.println(t.a);
		System.out.println(t.b);
		t.a=10;
		t.b=20;
		Test t1 = (Test) t.clone();
		System.out.println(t.a);
		System.out.println(t.b);
		t.a=100;
		t.b=200;
		System.out.println(t.a);
		System.out.println(t.b);
		//i want the value 10 and 20 but at this line object is having 100 ans 200 hot to get that
		//that values. so to get that values we have to use clonning process clone is method
		//present in object class 
		System.out.println(t1.a);
		System.out.println(t1.b);

	} 
}
