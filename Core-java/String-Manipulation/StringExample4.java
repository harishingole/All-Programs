class Test{
	public static void main(String... s){
		String str = new String("Saru");
		//reverse method is not present in String class so convert string in string buffer
		//str.reverse();
		System.out.println(sb);
		StringBuffer sb = new StringBuffer(str);
		System.out.println(sb);
		sb.reverse();
		System.out.println(sb);
	}
}
