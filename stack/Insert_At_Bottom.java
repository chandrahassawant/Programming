package stack;

import java.util.Scanner;
import java.util.Stack;

public class Insert_At_Bottom {
    
    public static void main(String[] args) {
        
        System.out.println("Enter the size of an stack");
        Scanner sc = new Scanner(System.in);
        int size=sc.nextInt();
        System.out.println("Enter the elements for stack");

        Stack<Integer> st1 = new Stack<>();

        while(st1.size()<size)
        {
            int number=sc.nextInt();
            st1.push(number);
        }

        System.out.println(st1);

        Stack<Integer> st2= new Stack<>();

        while (st2.size()<size) {

            st2.push(st1.pop());
        }

        System.out.println("Now we are entering in new element");

        System.out.println("Enter the new element");
        int new_element=sc.nextInt();

        st1.push(new_element);

        while (!st2.isEmpty()) {
            st1.push(st2.pop());
        }

        System.out.println(st1);




    }
}
