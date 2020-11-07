class Test{
	public static void main(String... s){
		try{System.out.println(10/0);}
		catch(ArithmeticException ae){
			
			System.out.println("Hello-Catch");
		}
		finally{
			System.out.println(10/0);
			System.out.println("finally-Blocked");
		}
	}
}
