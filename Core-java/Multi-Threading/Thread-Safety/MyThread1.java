class A{
	synchronized static void message(String str){
		for(int i=0;i<3;i++){	
			System.out.println("Hi :: "+str);
			try{Thread.sleep(1000);}
			catch(InterruptedException ie){ie.printStackTrace();}
		}
	}	
}
class MyThread1 extends Thread{
	public void run(){
		A.message("Harish");
	}
}
class MyThread2 extends Thread{
	public void run(){
		A.message("Saru");
	}
}
class MyThread3 extends Thread{
	public void run(){
		A.message("Manu");
	}
}

class MyThreadDemo{
	public static void main(String[] args){
		new MyThread1().start();
		new MyThread2().start();
		new MyThread3().start();
	}
}
/*output
----Non-Synchonized behaviour----Multiple thread is able to access message method

	Hi :: Harish
	Hi :: Manu
	Hi :: Saru
	Hi :: Harish
	Hi :: Saru
	Hi :: Manu
	Hi :: Harish
	Hi :: Saru
	Hi :: Manu

----Synchonized behaviour---- only one thread is able to access message method

	Hi :: Harish
	Hi :: Harish
	Hi :: Harish
	Hi :: Manu
	Hi :: Manu
	Hi :: Manu
	Hi :: Saru
	Hi :: Saru
	Hi :: Saru
*/
