import java.util.Scanner;

public class Election
{

    private int age;


    int getAge()
    {
        return age;
    }

    void setAge(int ag)
    {
        age = ag;
    }

    static boolean flag=false;
    public static boolean Check_Eligible(int age)
    {

           flag= age > 18 ? true : ( age == 18 ? false : false);
           return flag;
    }
}


class Govt{

    public static void main(String[] args) {
        

        
        System.out.println("Enter the person Age");
        Scanner sc = new Scanner(System.in);
        int age =sc.nextInt();
        Election person = new Election();
        person.setAge(age);

        boolean Result= person.Check_Eligible(age);

        if(Result)
        {
            System.out.println("Person Eligible");
        }
        else
        {
            System.out.println("Not eligible");
        }

    }

}