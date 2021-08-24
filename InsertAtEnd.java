import java.util.Scanner;
class Node {
	int data;
	Node next;
	Node(int data) {
		this.data = data;
		next = null;
	}
}

public class InsertAtEnd {
	static void insertAtEnd(Node head, int x) {
		Node temp = head;
		while (temp.next != null)
			temp = temp.next;
		// create new node to add
		Node curr = new Node(x);
		temp.next = curr;

	}
	static void printList(Node head) {
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
		// here adding logic starts
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		insertAtEnd(head, x);
		printList(head);
	}
}