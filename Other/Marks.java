import java.util.Scanner;

public class Marks {
    

    private int marathi;
    private int english;
    private int history;
    private int total_marks=100;

    
    int getMarathi()
    {
        return marathi;
    }

    int getEnglish()
    {
        return english;
    }

    int getHistory()
    {
        return history;
    }

    void setMarathi(int marathi_marks)
    {
        marathi=marathi_marks;
    }

    void setEnglish(int english_marks)
    {
        english=english_marks;
    }

    void setHistory(int history_marks)
    {
        history=history_marks;
    }

    

    public static int Percentage(int marathi,int english,int history)
    {

        return ((marathi+english+history)*100)/300;
    }
}


class Teacher{

    public static void main(String[] args) {
        
        
        System.out.println("Enter the marks for Marathi, English & History");
        Scanner sc = new Scanner(System.in);
        int marathi=sc.nextInt();
        int english=sc.nextInt();
        int history=sc.nextInt();


        Marks chandu = new Marks();
        chandu.setMarathi(marathi);             //here marathi is not accessible because we make it private . Data Hiding achieve.                                                                    //make it public it shown here 
        chandu.setEnglish(english);
        chandu.setHistory(history);


        int Result = Marks.Percentage(marathi, english, history);

        System.out.println(Result);


    }
}
