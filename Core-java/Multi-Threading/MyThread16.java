class MyThreadDemo {
	public static void main(String[] a){
		Thread t = new Thread()
		{
			public void run()
			{
				System.out.println("Thread is create using Anonymous inner class");
			}
		};
		t.start();
		t.start();//IllegalThreadStateException
		
		for(int i=0;i<1;i++){System.out.println("Main Thread");}
	}
}
