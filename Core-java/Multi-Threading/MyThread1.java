class MyThread extends Thread{
	//if you do not override run method empty implementation of Thread class run method will execute
}	//so its always recommended to override the run method
class ThreadDemo{
	static public void main(String... s) {
		new MyThread().start();
		for (int i = 0; i < 10; i++) {
			System.out.println("Main Thread");
		}
	}
}

