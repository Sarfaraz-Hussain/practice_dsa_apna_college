import java.util.*;
public class IsPalindrome {

	public static boolean isPalindrome(int num) {
		int number = num;
		int rev = 0;
		while (num > 0) {
			rev = rev * 10 + num % 10;
			num = num / 10;
		}

		if (rev == number)
			return true;
		else
			return false;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		if (isPalindrome(sc.nextInt()))
			System.out.println("number is palindrome");
		else
			System.out.println("number is not palindrome");
	}
}