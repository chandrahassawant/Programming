package String_Class;

import java.util.Scanner;

public class ASCI {
    

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        StringBuilder str = new StringBuilder(sc.nextLine());
        for(int i=0;i<str.length();i++)
        {
            boolean  flag= true;
            char ch = str.charAt(i);
           
            int asci = (int)ch;

            
            if(asci==32)
            {
                continue;
            }
            if(asci<=90)
            {   
                flag = false;
            }
            if(flag==false)
            {
                asci =asci + 32;
            }
            if(asci>=127)
            {
                flag = true;            
            }
            if(flag==true) {
                asci =asci - 32;
            }
            char dh =(char)asci;
            System.out.print(dh);     
        }
    }
}
