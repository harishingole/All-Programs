// Over variable a  ambiguity problem
interface it1{
	int a=10;//interface var by default public static final
	
}
interface it2{
	int a=1000;//interface var by default public static final
	
}

class Test implements it1,it2{
	void m1(){
		
		System.out.println(it1.a);
		System.out.println(it2.a);
		}
	public static void main(String... s)
	{	
		Test t =new Test();
		t.m1();
	}	
}

