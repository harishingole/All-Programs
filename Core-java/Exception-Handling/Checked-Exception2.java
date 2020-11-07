import java.io.*;
class test{
	public static void main(String... s){
		System.out.println("Hello-Saru");
		System.out.println("Hello-Saru");
		
		try{
			FileInputStream fis = new FileInputStream("abc.txt");
		}catch(FileNotFoundException f){
			//System.out.println("File is Not present in your directory");	
			System.out.println(f.getMessage());
		}
		
		System.out.println("Hello-Saru");
		System.out.println("Hello-Saru");
		System.out.println("Hello-Saru");
	}
}
