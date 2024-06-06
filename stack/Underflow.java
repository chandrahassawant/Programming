package stack;

import java.util.Scanner;
import java.util.Stack;

public class Underflow {


    public static void underflow(Stack <Integer>st)
    {
        while(!st.isEmpty())
        {
            st.pop();
        }


        if (st.isEmpty()) {
            System.out.println("Stack is empty");
        }

    }
    public static void main(String[] args) {
        
        Stack <Integer> st = new Stack<>();

        System.out.println("Enter the elements");
        Scanner sc = new Scanner(System.in);

        while(st.size()<5)
        {
            int number = sc.nextInt();
            st.push(number);
        }

        System.out.println(st);

        underflow(st);




    }
    
}
