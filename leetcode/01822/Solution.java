import java.util.Scanner;

public class Solution {
	public int arraySign(int[] nums) {
		int negNum = 0;
		for (int num : nums) {
			if (num == 0) {
				return 0;
			}
			
			if (num < 0) {
				++negNum;
			}
		}

		return negNum % 2 == 0 ? 1 : -1;
	}

	public static void main(String []args) {
		int n;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		int[] a = new int[n];
		for (int i = 0; i < n; i++) {
			a[i] = sc.nextInt();
		}

		System.out.println(arraySign(a));
	}
}
