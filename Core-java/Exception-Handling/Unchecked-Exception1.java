class Test{
	public static void main(String... s){
		System.out.println("Saru");
		System.out.println("Harish");
		System.out.println("Ingole");
		try{
			System.out.println(10/0);
		}catch(ArithmeticException ae)
		{
			System.out.println("Divide by zero not possible");
		}
		System.out.println("BE");
		System.out.println("Pune");
	}
}

