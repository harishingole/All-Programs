class Test{
	public static void main(String... s){
		String str = new String();
		str =  "abc";
		String str1 = new String(); 
		str1 = "abc";
		if(str == str1)
			System.out.println("String Matched");
		else
			System.out.println("String Not Matched");
		
	}
}

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

class Test{
	public static void main(String... s){
		String str = new String("Saru");
		String str1 = new String("Saru"); 
		System.out.println(str.equals(str1));//true
		System.out.println(str == str1);//false
		
		StringBuffer sb = new StringBuffer("Hary");
		StringBuffer sb1 = new StringBuffer("Hary");		
		System.out.println(sb == sb1);//false
		System.out.println(sb.equals(sb1));//false
		
		String s1 = "Manu";
		String s2 = "Manu";
		System.out.println(s1.equals(s2));//true
		System.out.println(s1 == s2);//true
		
	}
}

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
