package stack;

import java.util.Scanner;
import java.util.Stack;

public class Stack_framework_size {
    
    public static void main(String[] args) {
        
        System.out.println("Enter the size of an stack");
        Scanner sc = new Scanner(System.in);

        int size =sc.nextInt();

        System.out.println("Enter the number");
      

        Stack<Integer> stack_number = new Stack<>();


        if(stack_number.isEmpty()==true)
        {
        while(stack_number.size()<size)
        {
           
           {
            int number =sc.nextInt();
            stack_number.push(number);
           }
           
            
        }
    }

        System.out.println(stack_number);


}

}
