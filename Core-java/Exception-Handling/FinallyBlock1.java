class Test{
	public static void main(String... s){
		try{System.out.println(10/0);}
		catch(NullPointerException ae){System.out.println("catch-Blocked");}
		finally{
			System.out.println("finally-Blocked");
		}
	}
}
