
import java.util.*;

class Q2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        String s = sc.nextLine();
        System.out.print("Enter a Character: ");
        char c = sc.nextLine().charAt(0);

        char[] ch = s.toCharArray();
        int count = 0;
        for (char i : ch) {
            if (i == c) {
                count++;
            }

        }
        System.out.println("Character " + c + " occured " + count + " times.");
    }
}
