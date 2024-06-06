import java.util.Scanner;

public class car {

    public String regNo;
    public String color;
    public int fuelQuantity;


    public static String Shop(){
        return "Vehicle is started";

    }

    public static String regNo(String regNo)
    {
        return "MH "+regNo;
    }

    public static boolean colour(String color)
    {
        if(color=="red")
        {
            return true;
        }
        return false;
    }

    public static boolean fuelCapacity(int fuelQuantity)
    {
        if(fuelQuantity>50)
        {
            return true;
        }
        return false;
    }


    public static void main(String[]args)
    {

    Scanner sc = new Scanner(System.in);
       System.out.println("Enter the regNo");
       String regNo= sc.nextLine();
       System.out.println("Enter the color");
       String color= sc.nextLine();
       System.out.println("Enter the Fuel Capacity");
       int fuelQuantity= sc.nextInt();

           String customer_status= Shop();
           String regNo_status=regNo(regNo);
           boolean color_status=colour(color);
           boolean FuelCap_status = fuelCapacity(fuelQuantity);


           System.out.println(customer_status);
           System.out.println(regNo_status);
           System.out.println(color_status);
           System.out.println(FuelCap_status);
           
        

    }

}
