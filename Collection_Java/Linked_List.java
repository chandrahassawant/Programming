package Collection_Java;

import java.util.*;
public class Linked_List {


    public static void main(String[] args) {
        
        LinkedList <String> all = new LinkedList<String>();
        all.add("Raju");
        all.add("Sanju");
        all.add("Monu");
        all.add("Diksha");


        Iterator<String> itr = all.iterator();

        while(itr.hasNext())
        {
            System.out.print(itr.next()+" ");
        }

        System.out.println();

        LinkedList<String> list2 = new LinkedList<String>();
        list2.add("Chandu");

        all.addAll(list2);

        Iterator<String> result = all.iterator();
        while(result.hasNext())
        {
            System.out.print(result.next()+" ");
        }
    }



    
}
