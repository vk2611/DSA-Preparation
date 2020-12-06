import java.util.*;

class Solution {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int t = s.nextInt();
		for (int k = 0; k < t; k++) {
			int n = s.nextInt();
			boolean ans = false;
			String str = Integer.toString(n);
			//System.out.println(str);
			for (int i = 0; i < str.length()-1; i++) {
				char ch = str.charAt(i);
				char cch=str.charAt(i+1);
				if (ch == '2' && cch=='1') {
					ans=true;
				}
			}
			if (n % 21 == 0) {
				ans = true;
			}
			if (ans == false) {
				System.out.println("The streak lives still in our heart!");
			}
			else {
				System.out.println("The streak is broken!");
			}
		}
	}
}
