package Udemy;

import java.util.Scanner;

public class TwoD_Array {


    public static void main(String[] args) {
        System.out.println("Enter size for row and column");
        Scanner sc = new Scanner(System.in);
        int row=sc.nextInt();
        int column=sc.nextInt();
        int [][] arr= new int [row][column];

        for(int i=0;i<row;i++)
        {
            for (int j=0;j<column;j++)
            {
                arr[i][j]=sc.nextInt();
            }
        }

        System.out.println("2D Array elements:");
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                System.out.print(arr[i][j] +" ");
            }
            System.out.println();
        }

      
    }
}
