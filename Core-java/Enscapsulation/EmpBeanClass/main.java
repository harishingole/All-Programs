class TestClient{
	
	public static void main(String... a){
		EmpBean e = new EmpBean();
		e.setEid(1);
		e.setEname("Harish");
		int eid = e.getEid();
		System.out.println(eid);
		String ename = e.getEname();
		System.out.println(ename);
		
	}
}

