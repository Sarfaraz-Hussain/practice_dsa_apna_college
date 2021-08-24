import java.util.Scanner;
class Node {
	int data;
	Node next;
	Node(int data) {
		this.data = data;
		next = null;
	}
}

public class InsertAtBegin {
	static Node insertAtBegin(Node head, int x) {
		Node temp = new Node(x);
		temp.next = head;
		head = temp;
		temp = null;
		return head;
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

		// insert logic starts
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();
		head = insertAtBegin(head, x);
		printList(head);
	}
}