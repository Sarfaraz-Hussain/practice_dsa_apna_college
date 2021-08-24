import java.util.Scanner;
public class CountDigit {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int x = sc.nextInt();

		int res = 0;
		while (x > 0) {
			x = x / 10;
			res++;
		}
		System.out.println(res);
	}
}