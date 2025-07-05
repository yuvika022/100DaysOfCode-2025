
import java.util.*;

class Q2 {

    public static int[] mergeSortedArrays(int[] arr1, int[] arr2) {
        int n = arr1.length, m = arr2.length;
        int[] result = new int[n + m];

        int i = 0, j = 0, k = 0;

        // Merge while both arrays have elements
        while (i < n && j < m) {
            if (arr1[i] <= arr2[j]) {
                result[k++] = arr1[i++];
            } else {
                result[k++] = arr2[j++];
            }
        }

        // Copy remaining elements from arr1 (if any)
        while (i < n) {
            result[k++] = arr1[i++];
        }

        // Copy remaining elements from arr2 (if any)
        while (j < m) {
            result[k++] = arr2[j++];
        }

        return result;
    }

    public static void main(String[] args) {
        int[] arr1 = {1, 3, 5, 7};
        int[] arr2 = {2, 4, 6, 8};

        int[] merged = mergeSortedArrays(arr1, arr2);

        System.out.println("Merged Array: " + Arrays.toString(merged));
    }
}
