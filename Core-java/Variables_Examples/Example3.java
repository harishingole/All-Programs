final class Test
{
	int i=10;
	static public void main(String... a)
	{
		Test t = new Test();
		System.out.println(t.i);
		t.i++;
		System.out.println(t.i);
	}
	
}
