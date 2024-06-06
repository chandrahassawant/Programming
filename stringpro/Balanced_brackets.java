import java.util.Stack;

public class Balanced_brackets {

    static boolean balanced(String s) {
        Stack<Character> stack = new Stack<>();

        for (char c : s.toCharArray()) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push(c);
                continue;
            }

            
            if (c == ')' || c == ']' || c == '}') {
                
                if (stack.isEmpty()) {
                    return false;
                }

                char check;
                switch (c) {
                    case ')':
                        check = stack.pop();
                        if (check != '(') {
                            return false;
                        }
                        break;
                    case '}':
                        check = stack.pop();
                        if (check != '{') {
                            return false;
                        }
                        break;
                    case ']':
                        check = stack.pop();
                        if (check != '[') {
                            return false;
                        }
                        break;
                    default:
                        break;
                }
            }
        }

        
        return stack.isEmpty();
    }

    public static void main(String[] args) {
        String s = "{[()]}";
        System.out.println(balanced(s));

        s = "{[(])}";
        System.out.println(balanced(s)); 

        s = "({[()]})";
        System.out.println(balanced(s));

        s = "({[([)]]})";
        System.out.println(balanced(s));
    }
}
