class MyThreadDemo {
	public static void main(String[] a){
		new Thread()
		{
			public void run()
			{
				System.out.println("Thread is create using Anonymous inner class");
			}
		}.start();
		for(int i=0;i<1;i++){System.out.println("Main Thread");}
	}
}
