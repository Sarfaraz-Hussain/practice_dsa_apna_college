
import java.util.*;
public class Fibbonacchi {
	public static void main(String[] args) {
		int a = 0, b = 1;


		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		if (n == 1) {
			System.out.println(a);
		} else if (n == 2) {
			System.out.print(a + " ");
			System.out.print(b + " ");
		} else {
			System.out.print(a + " ");
			System.out.print(b + " ");
			for (int i = 0; i < n - 2; i++) {
				int t = a + b;
				System.out.print(t + " ");
				a = b;
				b = t;
			}
			System.out.print("\n");
		}


	}
}