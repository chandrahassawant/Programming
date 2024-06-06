package stack;

import java.util.Scanner;
import java.util.Stack;

public class CopyStack {
    

    public static void main(String[] args) {
        

        Stack <Integer> st_one = new Stack<>();
        Scanner sc = new Scanner(System.in) ;
        System.out.println("Enter the size of 1st stack");
        int size =sc.nextInt();
        System.out.println("Enter the elements");

        while(st_one.size()<size)
        {   
            int ele=sc.nextInt();
            st_one.push(ele);
        }

        System.out.println(st_one); 

        Stack <Integer> st_two = new Stack<>();
        while(!st_one.isEmpty()) {
            int x = st_one.pop(); // Pop from st_one
            st_two.push(x); // Push to st_two
        }

        System.out.println(st_two);


    }
}
