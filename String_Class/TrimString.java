package String_Class;

public class TrimString {

    public static void main(String[] args) {
        
        String str = "     I love India     ";
       

        char ch[] = str.toCharArray();
        int start =0;
        int end = ch.length-1;
        int count=0;

        for(int i=0;i<ch.length;i++)
        {
            if(ch[i]!=' ')
            {
                start =i;
                break;
            }
           
        }

        for( int i=end;i>start-1;i--)
        {
            if(ch[i]!=' '){
                end =i;
                break;
            }
        }

        count = end-start+1;

        String result = new String(ch,start,count);

        System.out.println(result);
    }
}
