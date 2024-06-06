
import java.util.HashMap;

public class Anagram {
        static boolean anagram(String s1,String s2)
        {
            boolean flag=false;
            if(s1.length()!=s2.length())
            {
                return flag;
            }
            char ch [] = s1.toCharArray();
            HashMap<Character,Integer> map = new HashMap<Character,Integer>();

            for(char c : ch)
            {
                map.put(c,map.getOrDefault(c, 0) + 1);
            }
            for(char c : s2.toCharArray())
            {
                if(!map.containsKey(c))
                {
                    return flag;
                }
                int count=map.get(c);
                if(count==1)
                {
                    map.remove(c);
                }
                else
                {
                    map.put(c, count-1);
                }
            }

            if(map.isEmpty())
            {
                flag=true;
                return  flag;
            }
            return flag;
        }
    public static void main(String[] args) {
        
        String s1="heart";
        String s2="earth";


        boolean value=anagram(s1,s2);

        if(value)
        {
            System.out.println("Strings are anagram");
        }
        else
        {
            System.out.println("Strings are not anagram");
        }
    }
}
