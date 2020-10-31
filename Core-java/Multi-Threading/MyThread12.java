
class MyThread extends Thread{
	
	public void run() {
		for (int i = 0; i < 10; i++) {
			System.out.println("User-Defined Thread");
			try{Thread.sleep(1000);}
			catch(InterruptedException ie){System.out.println("Thread is Interrupted");}
			
		}
	}

}
class ThreadDemo{
	static public void main(String... s) {
		MyThread  t1  = new MyThread();
		t1.start();
		t1.interrupt();
	}
}

