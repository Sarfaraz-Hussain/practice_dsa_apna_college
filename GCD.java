import java.util.*;
import java.lang.*;

public class GCD {

	public static int gcd(int a, int b) {
		int res = Math.min(a, b);
		while (res > 0) {
			if (a % res == 0 && b % res == 0)
				break;
			res--;
		}
		return res;
	}

	public static void main(String[] args) {
		int a, b;
		Scanner sc = new Scanner(System.in);
		a = sc.nextInt();
		b = sc.nextInt();

		System.out.println(gcd(a, b));
	}
}
