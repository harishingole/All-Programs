
class Test{
	public static void main(String... s){
		int [] arr={1,2,3,4,5};
		System.out.println(arr[0]);
		System.out.println(arr[1]);		
		try{
			System.out.println(arr[10]);
		}catch(ArrayIndexOutOfBoundsException a)
		{
			System.out.println(a);

		}
		System.out.println("BE");
		System.out.println("Pune");
	}
}

