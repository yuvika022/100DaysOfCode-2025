import java.util.*;
public class Day3_Q3 {
    public static int Secondlargest(int arr[],int n){
        Arrays.sort(arr);
        return arr[n-2];
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int n = scan.nextInt();
        System.out.println("Start entering elements of array");
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]= scan.nextInt();
        }
        System.out.println("Second largest element in array is "+Secondlargest(arr,n));
   
    }
}
