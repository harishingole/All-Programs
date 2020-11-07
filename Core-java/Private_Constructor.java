

class Test{
	private Test(){
		System.out.println("Hello Private Constructor");
	}
	private Test(int a){
		System.out.println("a ::"+a);
	}
	void m1(){
		System.out.println("Hello Parent m1()");
	}
	static public void main(String... a){
		new Test().m1();
		new Test(10);	
	}

	}
/*class Test1 extends Test{
	void m1(){
		System.out.println("Hello Child m1()");
	}
	

}/
/*Important Notes about Private Constructor
	
	1.if a class has private constructor we can not inherit or aquire the properties and behaviour of that class.
	2.to achieve the singleton class 
	
*/
