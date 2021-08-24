import java.util.*;
public class Main {
	public static void main(String[] args) {

		// int[] arr = new int[10];
		ArrayList<Integer> list = new ArrayList<>();
		list.add(10);
		list.add(20);
		list.add(30);
		System.out.println(list + " --> " + list.size());

		list.add(1, 1000);
		System.out.println(list + " --> " + list.size());

		System.out.println(list.get(1));
		list.set(1, 2000);
		System.out.println(list + " --> " + list.size());
		list.remove(1);
		System.out.println(list + " --> " + list.size());


	}
}


// In java strings are immutable right;

