// This is problem the cnstructor is excuting same value double
class Emp
{
	int eid;
	String ename;
	float esal;
	
	Emp()//Constructor are used to initialize values of instance variable during object creation
	{
		eid=1;
		ename="Harish Ingole";
		esal=50000.5f;
	}

	static void disp()
	{
		System.out.println("Emp Id = " + eid);
		System.out.println("Emp name = " + ename);
		System.out.println("Emp salary = " + esal);
	}
	
	public static void main(String[] args) 
	{
		Emp e=new Emp();
		Emp e2= new Emp();//problem values are printing twice : duplication
		e.disp();
		e2.disp();
	}
}
