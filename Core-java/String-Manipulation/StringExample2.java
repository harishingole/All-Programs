class Test{
	public static void main(String... s){
		//Mutable nature
		StringBuffer sb = new StringBuffer("Harish");
		sb.append("Ingole");
		System.out.println(sb);
		
		//Immutable nature
		String str = new String(); 
		str = "Harish";
		str.concat("Ingole");
		System.out.println(str);
	}
}
