package Udemy;

import java.util.Scanner;

public class array {
    
     
    public static void main(String[] args) {
        
       
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of array");
        int n=sc.nextInt();
        int [] arr = new int [n];
        System.out.println("Enter the elements for array");

        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }

        for (int i : arr) {
            System.out.println(i);
        }
    }
}
