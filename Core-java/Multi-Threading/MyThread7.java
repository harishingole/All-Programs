public class MyThread7 extends Thread{
	
	public void run() {
		
	}

}
class ThreadDemo{
	static public void main(String... s) {
		MyThread7 t1 = new MyThread7();
		MyThread7 t2 = new MyThread7();
		MyThread7 t3 = new MyThread7();
		t1.start();
		t2.start();
		t3.start();
		System.out.println(t1.getName());
		System.out.println(t2.getName());
		System.out.println(t3.getName());
		System.out.println(Thread.currentThread().getName());
		Thread.currentThread().setName("saru");
		System.out.println(Thread.currentThread().getName());
		System.out.println("Thread Name :: "+ t1.getName() +"& Its Id :: "+t1.getId());
		System.out.println("Thread Name :: "+ t2.getName() +"& Its Id :: "+t2.getId());
		System.out.println("Thread Name :: "+ t3.getName() +"& Its Id :: "+t3.getId());
		System.out.println("Thread is Alive.? :: "+ t1.isAlive());
		System.out.println("Thread is Alive.? :: "+ Thread.currentThread().isAlive());
		System.out.println("Thread Count :: "+ Thread.activeCount());
	}
}

