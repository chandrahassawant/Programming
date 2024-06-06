package String_Class;

public class Functions {
    
    public static void main(String[] args) {
        String new_name = "diksha";
        String str = "Chandrahas";

        // Lenght
        int n = str.length();
        System.out.println(n);

        //charAt()
        System.out.println(str.charAt(0));

        //indexOf() opposite to charAt 
        int index= str.indexOf("C");
        System.out.println(index);

        //compareTo check weather same or not if same return 0 
        int result=str.compareTo(new_name);
        System.out.println(result);


        //contains return true/false
        System.out.println(str.contains("C"));
        System.out.println(new_name.contains("dik"));

        //startsWith() return true/false
        System.out.println(str.startsWith("C"));

        //endsWith() return true/false
        System.out.println(new_name.endsWith("sha"));

        
        //toLowerCase() lower remains lower
        System.out.println(str.toLowerCase());

        //toUpperCase() upper remains upper
        System.out.println(new_name.toUpperCase());


        //concat() join to string without adding space
        System.out.println(str.concat(new_name));

        









    









    }
}
