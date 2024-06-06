package String_Class;

public class Substrings {


    public static void main(String[] args) {
        

        StringBuilder str = new StringBuilder("abcd");

        for(int i=0;i<4;i++)
        {
            for(int j=i+1;j<=4;j++)
            {
                System.out.println(str.substring(i, j));
            }
        }

        


    }
    
}
