class MyThread extends Thread{
	public void run()
	{
		System.out.println("Thread is created by extending Thread class");
	}
}
class MyRunnable implements Runnable{
	public void run()
	{
		System.out.println("Thread is created by implementing Runnable Interface");
	}
}
class MyThreadDemo{
	static public void main(String[] args){
		new MyThread().start();
		new Thread(new MyRunnable()).start();
	}
}
