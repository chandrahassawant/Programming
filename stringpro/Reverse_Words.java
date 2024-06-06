public class Reverse_Words {

    
    public static void main(String[] args) {
        
        String s= "Welcome the java world";
        StringBuilder sb = new StringBuilder();

        String [] news=s.split(" ");

        for(int i=news.length-1;i>=0;i--)
        {
            sb.append(news[i]);
            sb.append(" ");
        }
        System.out.println(sb);
    }
}
