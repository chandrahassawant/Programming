import java.util.Scanner;
public class calculatorswitchcase {
    

    public static void main(String[] args) {
        
        System.out.println("Enter two numbers");
        Scanner sc = new Scanner(System.in);

        int num1=sc.nextInt();
        int num2=sc.nextInt();

        System.out.println("Enter your choice");

        int ch=sc.nextInt();

        switch (ch) {
            case 1:
                    System.out.println(num1+num2);
                break;
        
            default:
            System.out.println("Error 404");
                break;
        }
    }



}
