package Udemy;
import java.util.Scanner;

public class Search_Ele_Array {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of array:");
        int size = sc.nextInt();
        
        int[] arr = new int[size];

        System.out.println("Enter the elements for array:");
        for(int i = 0; i < size; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Array elements:");
        for (int i : arr) {
            System.out.print(i + " ");
        }
        

        System.out.println("\nEnter the key you want to search:");
        int key = sc.nextInt();

        boolean result = search_key(key, arr);
        int index = keyIndex(key, arr);

        if (result) {
            System.out.println("Key found in the array at index: " + index);
        } else {
            System.out.println("Key not found in the array.");
        }

        System.out.println("Enter the index you want to delete:");
        int deleteIndex = sc.nextInt();

        if (deleteIndex >= 0 && deleteIndex < arr.length) {
            for (int i = deleteIndex; i < arr.length - 1; i++) {
                arr[i] = arr[i + 1];
            }

            int[] newArr = new int[arr.length - 1];
            for (int i = 0; i < newArr.length; i++) {
                newArr[i] = arr[i];
            }

            System.out.println("Array after deletion:");
            for (int i : newArr) {
                System.out.print(i + " ");
            }
        } else {
            System.out.println("Invalid index for deletion.");
        }

        sc.close();
    }

    public static boolean search_key(int key, int[] arr) {
        for (int i : arr) {
            if (i == key) {
                return true;
            }
        }
        return false;
    }

    public static int keyIndex(int key, int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }
}
