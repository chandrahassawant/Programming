package Algorithm;

import java.util.Scanner;

public class MergeSort {

    public static void merge(int arr[],int l,int mid,int r)
    {
        int n1=mid-l+1;
        int n2=r-mid;

        int [] left = new int [n1];
        int [] right = new int [n2];

        for(int i=0;i<n1;i++)
        {
            left[i]=arr[l+i];
        }

        for(int j=0;j<n2;j++)
        {
            right[j]=arr[mid+j+1];
        }

        int i=0;
        int j=0;
        int k=l;

        while(i<n1 && j< n2)
        {
            if(left[i]<= right[j])
            {
                arr[k++]=left[i++];
            }
            else
            {
                arr[k++]=right[j++];
            }
        }

        while(i<n1)
        {
            arr[k++]=left[i++];
        }

        while (j<n2) {
            arr[k++]=right[j++];
        }
    }

    public static void mergeSort(int arr[],int l,int r)
    {
        if(l<r)
        {
            int mid = (l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
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

        mergeSort(arr,0,size-1);

        for (int i : arr) {
            System.out.print(i+" ");
        }
    }
}
