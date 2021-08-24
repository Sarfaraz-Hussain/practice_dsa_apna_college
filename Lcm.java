import java.lang.*;
import java.util.*;

public class Lcm {
	public static int lcm(int a, int b) {
		int res = Math.max(a, b);
		while (true) {
			if (res % a == 0 && res % b == 0)
				break;
			res++;
		}
		return res;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b;
		a = sc.nextInt();
		b = sc.nextInt();
		System.out.println(lcm(a, b));
	}
}