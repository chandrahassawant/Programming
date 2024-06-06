package Udemy;
import java.util.ArrayList;
public class ArrList {

    public static void main(String[] args) {
        
        ArrayList<Integer> marks = new ArrayList<Integer>();
        marks.add(50);
        marks.add(100);
        marks.add(150);
        marks.add(200);


        for (Integer integer : marks) {
            System.out.print(integer+" ");
        }


        ArrayList<String> names= new ArrayList<String>();
        names.add("chandu");
        names.add("Suhas");

        System.out.println();
        
        for (String string : names) {
            System.out.print(string+" ");
        }
    }


    

}
