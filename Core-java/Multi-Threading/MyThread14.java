/*Implement Thread using anonymous inner class*/

class MyThreadDemo{
	public static void main(String... s){
		Thread t = new Thread()
		{
			public void run()
			{
				System.out.println("First Thread");
			}
		}; // semicolon is mandatory
		
		Thread t1 = new Thread()
		{
			public void run()
			{
				System.out.println("Second Thread");
			}
		};
		t.start();
		t1.start();
		for(int i=0;i<1;i++){System.out.println("Main Thread");}
	}
}
