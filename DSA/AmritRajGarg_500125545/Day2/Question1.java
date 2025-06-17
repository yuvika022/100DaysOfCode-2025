public class Question1 {
    public static void main(String[] args) {
        int[] nums = {4, 7, 2, 9, 6, 3, 8};
        int sum = 0;

        for (int num : nums) {
            if (num % 2 == 0) sum += num; //here we check if the number is even
        }

        System.out.println("Sum of even numbers: " + sum);
    }
}
