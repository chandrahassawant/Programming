package String_Class;

import java.util.Scanner;

public class StringImp {


    public static void main(String[] args) {
        
    Scanner sc = new Scanner(System.in);
    String name=sc.nextLine();
    // name = name+" sawant.";
    name = name + " suki";

    name = name + " MH07";
    System.out.println(name);
    

    //If we use number then it simply join the number to string 
    name = name + 100; 
    System.out.println(name);

    name =name + 100 +20 ; // It will not add it just simply join
    System.out.println(name);


    name =name + (100 +20) ; // It will add 120 and then join
    System.out.println(name);

    

    }
}
