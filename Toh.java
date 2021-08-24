import java.util.Scanner;

public class Toh {

	static void TOH(int n, char A, char B, char C) {
		if (n == 0)
			return;
		TOH(n - 1, A, C, B);
		System.out.println("move disc " + n + " from " + A + " --> " + C);
		TOH(n - 1, B, A, C);

	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		char A = 'A', B = 'B', C = 'C';

		TOH(n, A, B, C);
	}
}