import java.util.Scanner;

public class Bitwise {

	static boolean isKthSet(int n, int k) {
		if ((n & (1 << (k - 1))) != 0)
			return true;
		else
			return false;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, k;
		n = sc.nextInt();
		k = sc.nextInt();
		if (isKthSet(n, k))
			System.out.println("Yes");
		else
			System.out.println("No");
	}
}