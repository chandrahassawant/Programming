package Udemy;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class First_Second {

    public static void main(String[] args) {
        
        System.out.println("Enter the size of an array");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        System.out.println("Enter the elements of an array");

        int[] arr = new int[size];
        for(int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        Set<Integer> set = new HashSet<>();
        
        for(int num : arr) {
            set.add(num); // now duplicates removed
        }

        Integer[] unique = set.toArray(new Integer[0]);

        System.out.println("Unique elements are :");

        for(Integer integer : unique) {
            System.out.print(integer + " ");
        }

        int[] result = First_Sec(unique);

        System.out.println("\nThe largest element is: " + result[0]);
        System.out.println("The second largest element is: " + result[1]);
    }

    public static int[] First_Sec(Integer[] unique) {
        int largest = unique[0];
        int secondLargest = Integer.MIN_VALUE;

        for(int i = 1; i < unique.length; i++) {
            if(unique[i] > largest) {
                secondLargest = largest;
                largest = unique[i];
            } else if(unique[i] > secondLargest) {
                secondLargest = unique[i];
            }
        }

        int[] result = {largest, secondLargest};
        return result;
    }
}
