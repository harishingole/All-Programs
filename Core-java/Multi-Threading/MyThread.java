public class MyThread extends Thread{
	
	public void run() {
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

