package static_variable;

public class Hondacity {

    static long price = 10;

    int a, b;

    static double onRoadPrice(String city) {
        switch (city) {
            case "delhi":
                return price + (price * 0.1);
            case "mumbai":
                return price + (price * 0.9);
            default:
                System.out.println("City not found"); // Handle unknown cities
                return -1; // or any other suitable value
        }
    }

}

class Test {

    public static void main(String[] args) {
        // System.out.println(Hondacity.onRoadPrice("mumbai"));  // access using class-name and method name

        Hondacity T = new Hondacity();
        System.out.println(T.onRoadPrice("mumbai"));
        
    }
}
