import java.util.Scanner;
public class rectangle{


    // public double length;
    // public double breadth;

    public static double rectangleArea(float len ,float bre)
    {
        return len*bre;
    }

    public static double rectanglePerimeter(float len,float bre)
    {
       return  2*(len+bre);
    }


public static void main(String[] args) {

    System.out.println("Enter the length and breath");
    Scanner sc = new Scanner(System.in);

    float len=sc.nextFloat();
    float breath=sc.nextFloat();

    double area = rectangleArea(len, breath);

    double perimeter=rectanglePerimeter(len, breath);


    System.out.println("The area is "+ area);
    System.out.println("The Perimeter "+perimeter);
}

}

