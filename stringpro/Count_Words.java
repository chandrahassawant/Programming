public class Count_Words {
    
    static int count(String s)
    {
        String []arr= s.split(" ");
        return arr.length;
    }

    public static void main(String[] args) {
        String s="Welcome to Java world";
        int Count =count(s);
        System.out.println(Count);
    }
}
