package Udemy;
import java.util.Scanner;

public class Full_Array_Insertion {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of array:");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elements for array:");

        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Enter the size of new array:");
        int new_size = sc.nextInt();

        int[] newarr = new int[new_size];

        for(int i = 0; i < Math.min(n, new_size); i++) {
            newarr[i] = arr[i];
        }

        System.out.println("Elements copied from the original array to the new array:");
        for(int i : newarr) {
            System.out.println(i);
        }
    }
}
