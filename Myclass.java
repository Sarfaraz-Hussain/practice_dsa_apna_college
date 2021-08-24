
import java.util.*;
public class Myclass {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();
		ArrayList<Integer> a = new ArrayList<Integer>(n);

		for (int i = 0; i < n; i++) {
			a.add(sc.nextInt());
		}
		for (int i = 0; i < n; i++)
			System.out.println(a.get(i) + " ");


	}
}