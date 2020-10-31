/*join() method is used to stop the thread forcefully until the completion of another thread*/

class MyThread extends Thread{
	
	public void run() {
		for (int i = 0; i < 5; i++) {
			try{Thread.sleep(1000);}
			catch(InterruptedException ie){ie.printStackTrace();}
			System.out.println(Thread.currentThread().getName());
		}
	}

}
class ThreadDemo{
	static public void main(String... s) {
		MyThread t1 = new MyThread();
		MyThread t2 = new MyThread();
		t1.start();
		//stop main thread untill t1 complete;
		try{t1.join();}
		catch(InterruptedException ie){ie.printStackTrace();}
		t2.start();
		//stop main thread only for 2 sec;
		try{t2.join(2000);}
		catch(InterruptedException ie){ie.printStackTrace();}
		
		for (int i = 0; i < 5; i++) {
			try{Thread.sleep(1000);}
			catch(InterruptedException ie){ie.printStackTrace();}
			System.out.println(Thread.currentThread().getName());
		}
	}
}

