import java.util.*;
class InvalidAgeException extends RuntimeException{
	//Default CONSTRUCTOR
}
class Test{
	static void m3(int age) {
		if(age > 20)
		{
			System.out.println("Eligible for marriage");
		}
		else
		{
			throw new InvalidAgeException();
		}
	}
	public static void main(String... s) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter age :: ");
		int age = sc.nextInt();
		//Test t = new Test();
		Test.m3(age);
	}
}

