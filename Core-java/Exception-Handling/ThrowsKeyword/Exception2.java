class Test{
	void m1() throws InterruptedException{
		System.out.println("Hello - m1");
		Thread.sleep(1000);
		System.out.println("Hello - m1");
	}
	void m2() throws InterruptedException{
		m1();
	}
	void m3() {
		try{m2();}
		catch(InterruptedException ie){ie.printStackTrace();}
	}
	public static void main(String... s) {
		new Test().m3();
	}
}
