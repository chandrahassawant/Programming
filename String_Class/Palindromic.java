package String_Class;

public class Palindromic {

    public static void main(String[] args) {

        StringBuilder str = new StringBuilder("abcdcba");

        int i = 0;
        int j = str.length() - 1; // Corrected to start from the end of the string

        boolean flag = true; // Changed to true initially

        while (i < j) {
            if (str.charAt(i) != str.charAt(j)) {
                flag = false;
                break;
            }
            i++;
            j--;
        }

        if (flag) { // Simplified the condition
            System.out.println("The String is palindrome");
        } else {
            System.out.println("Not palindrome");
        }

    }

}
