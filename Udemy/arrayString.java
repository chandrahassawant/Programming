package Udemy;
import java.util.*;
public class arrayString {
    
    public static void main(String[] args) {
        System.out.println("Enter the size of array");
        Scanner sc = new Scanner(System.in);
        int size =sc.nextInt();

        String [] name = new String[size];

        System.out.println("Enter the name");
        
        for(int i=0;i<size;i++)
        {
            name[i]= sc.nextLine();
        }

        for (String string : name) {
            System.out.print(string+ " ");
        }

    }
}
