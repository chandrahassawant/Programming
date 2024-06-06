package String_Class;

import java.util.Scanner;

public class ReverseWord {
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        String ans = "";
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch != ' ') {
                sb.append(ch);
            } else {
                sb.reverse();
                ans += sb.toString() + " ";
                sb.setLength(0); // Clear the StringBuilder
            }
        }

        // Append the last word (no space at the end)
        sb.reverse();
        ans += sb.toString();

        System.out.print(ans);
    }
}
