package Udemy;

import java.util.Scanner;

public class Middle_array {
    

    public static int [] middle(int []arr)
    {
        int size =arr.length;
        int [] update = new int [size-2];

        update[0]=arr[1];
        
        for(int i=1;i<size-2;i++)
        {
            update[i]=arr[i+1];
        }

        // for (int i : update) {
        //     System.out.print(i+" ");
        // }

        return update;
    }


    public static void main(String[] args) {
        
        System.out.println("Enter the size of an array");
        Scanner sc = new Scanner(System.in);
        int size=sc.nextInt();

        int [] arr = new int [size];


        System.out.println("Enter the elements for array");

        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }

        System.out.println("The elements are :");

        for (int i : arr) {
            System.out.print(i+" ");
        }

       int [] result = middle(arr);

       System.out.println();

       for (int i : result) {
            System.out.print(i+" ");
       }

    }
}
