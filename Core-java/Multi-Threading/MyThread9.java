/*implementation of  Hook Thread*/
class MyThread extends Thread{
	
	public void run() {
		System.out.println("Hook Functionality");
		
	}

}
class ThreadDemo{
	static public void main(String... s) {
		MyThread t = new MyThread();
		Runtime r = Runtime.getRuntime();
		//to make thread as hook thread call below method but addShutdownHook() method is present in runtime class
		r.addShutdownHook(t);
		
		for (int i = 0; i < 10; i++) {
			try{
				Thread.sleep(1000);
			}
			catch(InterruptedException ie){
				ie.printStackTrace();
			}
			if(i==4){
				System.exit(0);
			}
			System.out.println("Main Thread");
		}
		
	}
}

