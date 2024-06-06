package Udemy;

import java.util.Scanner;

public class Diagonal {


    public static int sum(int [][]arr)
    {   
        int sumOfDiagonal=0;
        int n=arr.length;

        for(int i=0;i<n;i++)
        {
            sumOfDiagonal= sumOfDiagonal+(arr[i][i]);
        }

        return sumOfDiagonal;
    }

    public static void main(String[] args) {
        
        System.out.println("Enter the size of rows and column");
        Scanner sc = new Scanner(System.in);
        int rows=sc.nextInt();
        int column=sc.nextInt();

        int [] [] arr = new int[rows][column];

        System.out.println("Enter the elements");

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<column;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }

        
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<column;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            
            System.out.println();
        }

        int result= sum(arr);
        
        System.out.println(result);
    }
    
}
