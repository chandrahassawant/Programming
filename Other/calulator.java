import java.util.Scanner;

public class calulator {


    public static int sum(int num1,int num2)
    {
        return num1+num2;
    }

    public static int subtraction(int num1,int num2)
    {
        return num1-num2;
    }

    public static float divison(int num1,int num2)
    {
        return num1/num2;

    }

    public static int multi(int num1,int num2)
    {
        return num1*num2;
    }
}
    
    class Calu{
    public static void main(String[] args) {
        

        System.out.println("Enter two numbers");
        Scanner sc = new Scanner(System.in);

        int num1=sc.nextInt();
        int num2=sc.nextInt();

        calulator c1 = new calulator();

        int sumResult = c1.sum(num1, num2);
        System.out.println("Sum: " + sumResult);

        int subtractionResult = c1.subtraction(num1, num2);
        System.out.println("Subtraction: " + subtractionResult);

        float divisionResult = c1.divison(num1, num2);
        System.out.println("Division: " + divisionResult);

        int multiplicationResult = c1.multi(num1, num2);
        System.out.println("Multiplication: " + multiplicationResult);


    }
    
}




