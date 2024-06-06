package Collection_Java;

import java.util.ArrayList;

public class array_List {
    public static void main(String[] args) {
        
        ArrayList<Integer> all = new ArrayList<>(20); 
        all.add(50);
        all.add(60);
        all.add(40);
        all.add(10);

        System.out.print(all);
        all.remove(3);
        System.out.println();
        System.out.print(all);
    
        ArrayList <Integer> allnew = new ArrayList<Integer>(10);

        allnew.add(40);
        allnew.add(60);
        allnew.add(20);
        allnew.add(90);

        all.addAll(allnew);
        System.out.println();
        System.out.print(all);

        System.out.println();

        System.out.println(all.subList(3, 6));
        

        System.out.println(all.contains(100));

        System.out.println();


        System.out.println(all.equals(allnew));

        System.out.println();

        System.out.println(all.indexOf(40));

        System.out.println();

        System.out.println(all.lastIndexOf(40));

        all.set(3,100);

        System.out.println(all);

        //Iterating through ArrayList

        for(int i=0;i<all.size();i++)
        {
            System.out.print(all.get(i)+" ");

        }
            System.out.println();

        for (Integer integer : all) {
            System.out.print(integer + " ");
        }

      
        


    }
}
