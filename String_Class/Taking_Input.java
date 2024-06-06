package String_Class;

import java.util.Scanner;

public class Taking_Input {


    public static void main(String[] args) {
        
        String str = "Chandrhas";

        System.out.println(str);

        System.out.println("Enter the name");

        Scanner sc = new Scanner(System.in);
        String name=sc.nextLine();

        System.out.println(name);
    }
    
    
}
