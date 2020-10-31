class MyThreadDemo{
	
	public static void main(String... s){
		Runnable r1 =  new Runnable()
		{
			public void run()
			{
				System.out.println("Thread is create using Anonymous inner class - r1");
			}
		};
		Runnable r2 =  new Runnable()
		{
			public void run()
			{
				System.out.println("Thread is create using Anonymous inner class - r2");
			}
		};
		Thread t1 = new Thread(r1);
		t1.start();
		Thread t2 = new Thread(r2);
		t2.start();
	}
}
 
