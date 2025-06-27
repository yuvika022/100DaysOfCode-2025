import java.util.Scanner;

public class RemoveDuplicates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = sc.nextLine();

        boolean[] seen = new boolean[256]; // For ASCII characters
        String result = "";

        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (!seen[ch]) {
                result += ch;
                seen[ch] = true;
            }
        }

        System.out.println("Unique string: " + result);
    }
}
