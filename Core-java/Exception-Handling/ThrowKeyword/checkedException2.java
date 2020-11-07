import java.util.*;
class InvalidAgeException extends Exception{
	//PARAMETERIZED CONSTRUCTOR
	
	InvalidAgeException(String str){
		super(str);
	}
	
}
class Test{
	static void m3(int age) throws InvalidAgeException{
		if(age > 20)
		{
			System.out.println("Eligible for marriage");
		}
		else
		{
			throw new InvalidAgeException("Invalid Age");
		}
	}
	public static void main(String... s) throws InvalidAgeException{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter age :: ");
		int age = sc.nextInt();
		//Test t = new Test();
		Test.m3(age);
	}
}

/*
Enter age :: 
12
Exception in thread "main" InvalidAgeException: Invalid Age
	at Test.m3(checkedException2.java:18)
	at Test.main(checkedException2.java:26)

*/
