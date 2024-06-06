package String_Class;

public class FirstChar {
    

    public static void main(String[] args) {
        
        String str = "My name is chandrahas";

        char ch[] = str.toCharArray();

        for(int i=0;i<ch.length;i++)
        {
            if(ch[i]!=' ')  
            {
                if(i==0)
                {
                    System.out.println(ch[i]);
                } 
                else if(ch[i-1]==' ')
                {
                    System.out.println(ch[i]);
                } 
            }
            else
            {
                continue;
            }
        }


    

    }
}
