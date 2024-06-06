public class evenlength {

    static String evenstring(String s) {
        String[] words = s.split(" ");
        StringBuilder result = new StringBuilder();

        for (String ch : words) {
            if (ch.length() % 2 == 0) {
                result.append(ch).append(" ");
            }
        }

        if(result.length()==0)
        {
            String ans="Word not present";
            return ans;
        }

        // Remove the trailing space if any
        if (result.length() > 0) {
            result.setLength(result.length() - 1);
        }

        return result.toString();
    }

    public static void main(String[] args) {
        String s = "hello chand";
        System.out.println(evenstring(s)); // Output: "world"
    }
}
