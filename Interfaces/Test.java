
package Interfaces;

interface Test {

    void method1();

    void method2();
}

    class My implements Test
    {
        public void method1()
        {
            System.out.println("Method 1 of class My");
        }

        public void method2()
        {
            System.out.println("Method 2 of class My");
        }

        public void method3()
        {
            System.out.println("Method 3 of class My");
        }

    
    }

     class InterfacesPractice
    {
        public static void main(String[] args) {
            
            Test t = new My();
                t.method1();
                t.method2();

    

         }
    }

   
 
    
