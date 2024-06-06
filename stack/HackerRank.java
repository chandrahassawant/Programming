package stack;

import java.util.Stack;
import java.util.Scanner;
public class HackerRank {
    
    public static void main(String[] args) {
        
        System.out.println("Enter the size of an stack");
        Scanner sc = new Scanner(System.in);
        int size=sc.nextInt();
        System.out.println("Enter the elements for stack");

        Stack<Integer> st1 = new Stack<>();

        while(st1.size()<size)
        {

            int element=sc.nextInt();
            st1.push(element);
        }

        System.out.println(st1);

        System.out.println("Stack after reverse");

        Stack<Integer> st2 = new Stack<>();

        while(st2.size()<size)
        {
            st2.push(st1.pop());
        }

        System.out.println(st2);





    }
}
