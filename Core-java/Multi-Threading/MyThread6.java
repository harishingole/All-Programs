//Different Threads are performming different task
class MyThread extends Thread{
	
	public void run() {
		for (int i = 0; i < 3; i++) {
			System.out.println("User-Defined Thread");
		}
	}

}
class MyThread1 extends Thread{
	
	public void run() {
		for (int i = 0; i < 3; i++) {
			System.out.println("User-Defined Thread");
		}
	}

}
class MyThread2 extends Thread{
	
	public void run() {
		for (int i = 0; i < 3; i++) {
			System.out.println("User-Defined Thread");
		}
	}

}
class ThreadDemo{
	static public void main(String... s) {
		
		new MyThread().start();
		new MyThread1().start();
		new MyThread2().start();
		for (int i = 0; i < 3; i++) {
			System.out.println("Main Thread");
		}
	}
}

