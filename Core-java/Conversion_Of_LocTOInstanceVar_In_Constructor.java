class Emp
{
	int eid;
	String ename;
	float esal;
	Emp(int id,String name,float sal)//local variable
	{
		//Conversions 
		this.eid=id;//conversion to local variable to instance variable;	
		this.ename=name;//conversion to local variable to instance variable;	
		this.esal=sal;//conversion to local variable to instance variable;	
	}
	void disp()
	{
		System.out.println("Emp Id = " + eid);//instance varibale
		System.out.println("Emp name = " + ename);
		System.out.println("Emp salary = " + esal);
	}
	public static void main(String[] args) 
	{
		Emp e=new Emp(1,"Harish",10000.23f);
		Emp e2= new Emp(2,"Vicky",20000.0f);
		e.disp();
		e2.disp();
	}
}
