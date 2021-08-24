import java.util.*;

public class PrimeJava {

	public static void primeFactors(int n) {
		if (n <= 1)
			return;
		for (int i = 2; i * i <= n; i++) {
			while (n % i == 0) {
				System.out.print(i + " ");
				n = n / i;
			}
		}
		if (n > 1)
			System.out.println(n);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		n = sc.nextInt();

		primeFactors(n);
	}
}