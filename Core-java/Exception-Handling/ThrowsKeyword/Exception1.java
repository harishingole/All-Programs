class Test{
	void m1() throws InterruptedException{
		System.out.println("Hello - m1");
		Thread.sleep(1000);
		System.out.println("Hello - m1");
	}
	void m2() throws InterruptedException{
		m1();
	}
	void m3() throws InterruptedException{
		m2();
	}
	public static void main(String... s) throws InterruptedException{
		new Test().m3();
	}
}
