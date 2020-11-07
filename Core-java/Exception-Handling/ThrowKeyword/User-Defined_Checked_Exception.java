//CREATTION OF USERDEFINED CHECKED EXCEPTION BY USING DEFAULT CONSTRUCTOR APROACH
import java.util.*;
class InvalidAgeException extends Exception{
	//DEFAULT CONSTRUCTOR
}
class Test{
	static void m3(int age) throws InvalidAgeException{
		if(age > 20)
		{
			System.out.println("Eligible for marriage");
		}
		else
		{
			throw new InvalidAgeException();
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
Exception in thread "main" InvalidAgeException
	at Test.m3(Exception1.java:12)
	at Test.main(Exception1.java:20)

*/
