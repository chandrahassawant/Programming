package stack;

import java.util.Scanner;
import java.util.Stack;

public class Copy_one_Stack {
    
    public static void main(String[] args) {
       
        System.out.println("Enter the size of an stack");
        Scanner sc = new Scanner(System.in);
        int size=sc.nextInt();
        System.out.println("Enter the elements for stack");

        Stack<Integer> st1 = new Stack<>();

        while(st1.size()<size)
        {
            int number = sc.nextInt();
            st1.push(number);
        }

        System.out.println(st1);

        System.out.println("Now we are going to copy elements");

        Stack<Integer> st2= new Stack<>();

        while (st2.size()<size) {

            st2.push(st1.pop());
        }

        Stack<Integer> st3 = new Stack<>();

        while(st3.size()<size)
        {
            st3.push(st2.pop());
        }

        System.out.println("Elements after copying");

        System.out.println(st3);


    }
}
