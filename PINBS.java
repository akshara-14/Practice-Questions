import java.io.*;

class PINBS {
	public static void main(String[] args) throws java.lang.Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		while (t-- > 0) {
			boolean flag = false;
			String s = br.readLine();
			for (int i = 0; i < (s.length() - 1); i++) {
				if (s.charAt(i) == '1' && (s.charAt(i + 1) == '1' || s.charAt(i + 1) == '0')) {
					flag = true;
					break;
				}
			}

			if (flag == true) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}

	}
}
