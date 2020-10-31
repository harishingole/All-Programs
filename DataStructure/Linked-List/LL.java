import java.util.*;
class Node {
	private int data;
	private Node next;
	
	public int getData() {
		return data;
	}
	public void setData(int data) {
		this.data = data;
	}
	public Node getNext() {
		return next;
	}
	public void setNext(Node next) {
		this.next = next;
	}
}
public class LL {
	static Node Head = null;
	
	void insertAtFront(int data)
	{
		Node tmp = new Node();
		if(Head == null)
		{
			tmp.setData(data);
			tmp.setNext(null);
			Head = tmp;
		}
		else
		{
			tmp.setData(data);
			tmp.setNext(Head);
			Head = tmp;
		}
	}
	void insertAtEnd(int data)
	{
		Node tmp = new Node();
		if(Head == null)
		{
			tmp.setData(data);
			tmp.setNext(null);
			Head = tmp;
		}
		Node t = Head;
		while(t.getNext()!=null)
		{
			t = t.getNext();
		}
		tmp.setData(data);
		tmp.setNext(null);
		t.setNext(tmp);
	}
	void reverse(Node c,Node p)
	{
		if(c!=null)
		{
			reverse(c.getNext() , c);
			c.setNext(p);
		}
		else
		{
			Head = p;
		}
	}
	void deleteNode()
	{
		Node p = Head;
		Node q = null;
		Scanner sc = new Scanner(System.in);
		System.out.println("Insert data from above list which you want to delete");
		int data = sc.nextInt(); 
		
		if(p != null && p.getData() == data){
			
			Head = p.getNext();
			return;
			
		}
		else
		{
			while(p != null && p.getData() != data){	
			q = p;
			p = p.getNext();
			}
			q.setNext(p.getNext());
		}
	}
	void printList()
	{
		Node n =  Head;
		while(n!=null)
		{
			System.out.print(n.getData() + "->");
			n = n.getNext(); 
		}
		System.out.println();
	}
	public static void main(String[] args){
		LL l = new LL();
		for(int i=1;i<=5;i++)
		{
			l.insertAtFront(i);
			
		}
		l.printList();
		/*for(int i=1;i<=5;i++)
		{
			l.insertAtEnd(i);
		}*/
		
		l.reverse(Head,null);
		l.printList();
		l.deleteNode();
		l.printList();
	}
}
