import java.util.*;

public class Palindrome {

	static boolean isPalindrome(int f, int l, String str) {
		if (f >= l)
			return true;
		return (str.charAt(f) == str.charAt(l)) && isPalindrome(++f, --l, str);
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str;
		str = sc.next();
		int f = 0, l = str.length() - 1;
		if (isPalindrome(f, l, str))
			System.out.println("Palindrome");
		else
			System.out.println("Not Palindrome");
	}
}