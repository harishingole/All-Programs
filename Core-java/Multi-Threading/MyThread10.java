/* Daemon Thread implementation*/
/*Whenever main thread is completed The Daemon thread is automatically get stop whether it is completed or not*/

class MyThread extends Thread{
	
	public void run() {
		//iterate 10 times but main thread terminate on 5th iteration thats why this for loop terminate on 5th iteration
		for (int i = 0; i < 10; i++) {
			try{Thread.sleep(1000);}
			catch(InterruptedException ie){ie.printStackTrace();}
			System.out.println("Daemon Thread");
		}
	}


}
class ThreadDemo{
	static public void main(String... s) {
		MyThread t = new MyThread();
		//public final void setDaemon(boolean);
		t.setDaemon(true);
		t.start();
		
		for (int i = 0; i < 2; i++) {
			try{Thread.sleep(1000);}
			catch(InterruptedException ie){ie.printStackTrace();}
			System.out.println("Main Thread");
		}
	}
}

