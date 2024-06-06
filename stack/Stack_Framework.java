
package stack;
import java.util.Stack;
public class Stack_Framework {


    public static void main(String[] args) {
        Stack<Integer> st = new Stack<>();
        System.out.println(st.isEmpty()); // return true because stack is empty
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        st.push(60);

        System.out.println(st);



        System.out.println(st.isEmpty()); //check is empty or not return boolean

        st.pop();//remove the element

        System.out.println(st);// print the element

        while(st.size()>1)
        {
            st.pop();
        }

        System.out.println(st);

        while(st.size()>0)
        {
            st.pop();
        }

        System.out.println(st);

        System.out.println(st.isEmpty());

        st.push(100);

        System.out.println(st.isEmpty());

        System.out.println(st);



    }
  

    



    

    


    
    
}



