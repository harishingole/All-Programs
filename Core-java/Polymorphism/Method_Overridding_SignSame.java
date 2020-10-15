/* Method Overriding
rule no1 : Overridden method type type 
& Overridding Method type must be same at premitive level*/
class Parent 
{// overridden method
	void marry()
	{
		System.out.println("Black Girl");
	}
}
class Child extends Parent
{// overridding method
	int marry()
	{
		System.out.println("Red Girl");
		return 10;
	}
	public static void main(String[] args) 
	{
		new Child().marry();
	}
}
o/p
E:\Java Program>javac Polymorphism2.java
Polymorphism2.java:13: error: marry() in Child cannot override marry() in Parent
        int marry()
            ^
  return type int is not compatible with void
1 error