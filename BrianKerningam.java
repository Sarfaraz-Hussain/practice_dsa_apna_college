import java.util.Scanner;

public class BrianKerningam {

	static int countSet(int n) {
		int ans = 0;
		while (n > 0) {
			n = (n & (n - 1));
			ans++;
		}
		return ans;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ans = countSet(n);
		System.out.println(ans);
	}
}