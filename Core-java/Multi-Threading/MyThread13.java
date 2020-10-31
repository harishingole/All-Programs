/*Implementaion of Runnable interface*/

class MyRunnable implements Runnable{
	public void run(){
		for(int i=0;i<10;i++){System.out.println("User-Defined Thread");}
	}	
}
class MyThreadDemo{
	public static void main(String... s){
		MyRunnable r = new MyRunnable();
		Thread t = new Thread(r);
		t.start();
		
		for(int i=0;i<10;i++){System.out.println("Main Thread");}
	}
}
