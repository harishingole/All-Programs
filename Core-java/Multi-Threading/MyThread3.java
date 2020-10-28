public class MyThread3 extends Thread{
	
	// its possible overload run method but Thread class always override run() method with 0- args
	public void run() {
		for (int i = 0; i < 10; i++) {
			System.out.println("0-args User-Defined Thread");
		}
	}
	public void run(int i) {
		for (i=0; i < 10; i++) {
			System.out.println("1-args User-Defined Thread");
		}
	}

}
class ThreadDemo{
	static public void main(String... s) {
		new MyThread3().start();
		
		for (int i = 0; i < 10; i++) {
			System.out.println("Main Thread");
		}
	}
}

