class Chandu {
    
    int length;
    int breath;
    
    // Constructor with parameters
    Chandu(int length, int breath) {
        this.length = length;
        this.breath = breath;
    }
    
    // No-argument constructor
    Chandu() {
        // Default values
        this.length = 0;
        this.breath = 0;
    }

    public void display() {
        System.out.println("The length is : " + this.length);
        System.out.println("The breath is : " + this.breath);
    }
}

class Cuboid extends Chandu {

    int height;
    
    Cuboid(int length, int breath, int height) {
        super(length, breath);
        this.height = height;
    }

    public void display() {
        super.display(); // Call display method of superclass
        System.out.println("The height is : " + height);
    }
}

class Test {

    public static void main(String[] args) {
        Cuboid T1 = new Cuboid(10, 20, 30);
        T1.display();

        Chandu S1 = new Chandu(20, 30);
        S1.display();
    }
}
