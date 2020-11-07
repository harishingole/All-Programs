class test{
	public static void main(String... s){
		System.out.println("Hello-Saru");
		System.out.println("Hello-Saru");
		try{
			Thread.sleep(3000);//3sec//unreported exception InterruptedException
		}catch(InterruptedException i){
			System.out.println(i);	
		}System.out.println("Hello-Moto");
		System.out.println("Hello-Moto");
		System.out.println("Hello-Moto");
	}
}
