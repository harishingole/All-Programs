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
