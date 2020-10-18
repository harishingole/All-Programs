interface it{
	interface it1{
		void m1();
	}	
}
class Test implements it.it1{
	
	public void m1(){System.out.println("void m1()");}
	public static void main(String... args){
		Test i = new Test();
		i.m1();
	}
}
