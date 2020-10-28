//Priority of thread
//The range of the priority is from 1 to 10
public class MyThread8 extends Thread{
	
	public void run() {
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getPriority());
	}

}
class ThreadDemo{
	static public void main(String... s) {
		
		MyThread8 t1 =  new MyThread8();
		t1.start();
		//MAX_PRIORITY = 10 Its an constant declared in Thread class
		t1.setPriority(Thread.MAX_PRIORITY);
		
		MyThread8 t2 =  new MyThread8();
		t2.start();
		
		//NORM_PRIORITY = 5 Its an constant declared in Thread class
		//its an default priority
		t2.setPriority(Thread.MIN_PRIORITY);
		System.out.println("main Thread :: " + Thread.currentThread().getPriority());
		MyThread8 t3 =  new MyThread8();
		t3.start();
		//it occured an exception IllegalArgumentException
		try {
			t3.setPriority(12);
		}catch(IllegalArgumentException i)
		{
			i.printStackTrace();
		}
	}
}

