package Algorithm;

import java.util.Scanner;

public class SelectionSort {

    public static void selectionSort(int []arr)
    {
        int n= arr.length;

        for(int i=0;i<n-1;i++)
        {
            int min=i;

            for(int j=i+1;j<n;j++)
            {   
                    if(arr[j]<arr[min])
                    {
                        min=j;
                    }
                
            }


            if(arr[min]<arr[i])
                {
                    int temp=arr[i];
                    arr[i]=arr[min];
                    arr[min]=temp;
                }

        }
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


        selectionSort(arr);

        for (int i : arr) {
            System.out.print(i+" ");
        }


    }
    
}
