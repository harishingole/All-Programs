public class MyThread4 extends Thread{
	
	public void run() {
		m1();
		m2();
		m3();
	}
	void m1(){System.out.println("m1 method");}
	void m2(){System.out.println("m2 method");}
	void m3(){System.out.println("m3 method");}		

}
class ThreadDemo{
	static public void main(String... s) {
		new MyThread4().start();
		for (int i = 0; i < 10; i++) {
			System.out.println("Main Thread");
		}
	}
}

