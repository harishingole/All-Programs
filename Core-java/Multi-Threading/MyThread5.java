public class MyThread5 extends Thread{
	
	public void run() {
		for (int i = 0; i < 10; i++) {
			System.out.println("User-Defined Thread");
		}
	}

}
class ThreadDemo{
	static public void main(String... s) {
	
		//Three thread performing single task
		new MyThread5().start();
		new MyThread5().start();
		new MyThread5().start();
		for (int i = 0; i < 10; i++) {
			System.out.println("Main Thread");
		}
	}
}

