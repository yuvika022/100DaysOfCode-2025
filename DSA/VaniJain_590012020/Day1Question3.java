import java.util.*;
public class Day1Question3{
    public static void main(String[] args){
    System.out.println("Enter the no. of elements in the aaray:")
    Scanner scr=new Scanner(System.in);
    int n=scr.nextInt();
    int [] arr=new int[n];
    int i;
    System.out.println("Enter the elements into the array:");
    for(i=0;i<n;i++)
    {
        arr[i]=scr.nextInt();
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    System.out.println("The sum of the array is "+sum);
}
}
