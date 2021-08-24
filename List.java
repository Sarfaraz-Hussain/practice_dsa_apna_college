class Node {
	int data;
	Node next;
	Node(int data) {
		this.data = data;
		next = null;
	}
}



public class List {
	static void printList(Node head) {
		if (head == null)
			return;
		Node temp = head;
		while (temp != null) {
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
		System.out.print("\n");
	}

	public static void main(String[] args) {
		Node head = new Node(10);
		head.next = new Node(20);
		head.next.next = new Node(30);
		printList(head);
	}
}