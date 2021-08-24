import java.util.*;

public class ArraySum {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int [] myArray = new int[n];
		for (int i = 0; i < n; i++) {
			myArray[i] = sc.nextInt();
		}

		int sum = myArray[0];
		for (int i = 1; i < n; i++) {
			sum += myArray[i];
		}
		System.out.println(sum);
	}
}