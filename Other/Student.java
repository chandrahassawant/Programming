import java.util.Scanner;

public class Student {

    public static int Total(int m1,int m2,int m3)
    {
        int total_marks =m1+m2+m3;
        return total_marks;
    }

    public static float Average(int m1,int m2,int m3)
    {
        float average= (m1+m2+m3)/3;
        return average;
    }
}

class newStudent{
    public static void main(String[] args) {
        
        System.out.println("Enter the roll Number");
        Scanner sc = new Scanner(System.in);
        // int roll_no=sc.nextInt();
        // String name =sc.nextLine();
        // String course =sc.nextLine();
        int m1 =sc.nextInt();
        int m2=sc.nextInt();
        int m3=sc.nextInt();


        Student s1 = new Student();
        int Total_marks =s1.Total(m1, m2, m3);
        float Average=s1.Average(m1, m2, m3);

        System.out.println(Total_marks);
        System.out.println(Average);

    }

}
