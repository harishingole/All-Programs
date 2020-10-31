class A{
	volatile static int a =10;
	static void message(){
		
		for(int i=1;i<=3;i++){	
			System.out.println("a :: "+a);
			a++;
			try{Thread.sleep(1000);}
			catch(InterruptedException ie){ie.printStackTrace();}
		}
	}	
}
class MyThread1 extends Thread{
	public void run(){
		A.message();
		
	}
}
class MyThread2 extends Thread{
	public void run(){
		A.message();
	}
}
class MyThread3 extends Thread{
	public void run(){
		A.message();
	}
}

class MyThreadDemo{
	public static void main(String[] args){
		new MyThread1().start();
		new MyThread2().start();
		new MyThread3().start();
	}
}


