package stack;
import java.util.Scanner;
public class stackPrint
{

    public static void main(String[] args) {
        
        System.out.println("Enter the size of stack");

        Scanner sc = new Scanner(System.in);
        int size=sc.nextInt();

        int top=-1;

        int [] stack_arr = new int[size];


        System.out.println("Enter the elements for stack");
        
    for(int i=0;i<stack_arr.length;i++)
    {
        stack_arr[i] =sc.nextInt();
    }

    for (int i : stack_arr) {
        System.out.println(i);
    }

    }
}