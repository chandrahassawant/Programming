package Java;

public class Example {
    
        public void display()
        {
            System.out.println("Super class display");
        }
    }
    
    class Below extends Example
    {
        public void display()
        {
            System.out.println("Sub class display");
        }
    }
    
    
    class Test
    {
        public static void main(String[] args) {
            
    
            Example n = new Example();
            n.display();

            Below m = new Below();
            m.display();

            Example o= new Below();
            o.display();

            // Below p = new Example();  // gives error
            // p.display();
        }
    }
    

