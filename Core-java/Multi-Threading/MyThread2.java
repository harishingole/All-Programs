class MyThread extends Thread{
	
	//Thread is not created bez. here we override start method.
	//if we dont call start() method of Thread class Thread is not register in Thread scheduler
	public void start() {
		for (int i = 0; i < 10; i++) {
			System.out.println("User-Defined Thread");
		}
	}

}
class ThreadDemo{
	static public void main(String... s) {
		new MyThread().start();
		for (int i = 0; i < 10; i++) {
			System.out.println("Main Thread");
		}
	}
}

