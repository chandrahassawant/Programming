package Algorithm;

import java.util.Scanner;

public class Bubble_Sort {
    
    public static int[]  bubbleSort(int arr[])
    {
        int n=arr.length;

        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }

        }
        
            return arr;
    }


    public static void main(String[] args) {
        

        System.out.println("Enter the size of an array");
        Scanner sc = new Scanner(System.in);
        int size=sc.nextInt();
        System.out.println("Enter the elements of array");
       

        int [] arr = new int[size];
        
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }

        System.out.println();

        // for(int i=0;i<arr.length;i++)
        // {
        //     System.out.print(+i);
        // }

        // System.out.println();

        int [] result= bubbleSort(arr);

        for (int i : result) {
            System.out.print(i);
        }

        
    }
}
