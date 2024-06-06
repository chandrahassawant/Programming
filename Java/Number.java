package Java;

import java.util.Scanner;

public class Number {

  // Method to find the square of a number
  public static int FindNumbers(int num) {
    return num * num;
  }

  public static void main(String[] args) {

    // Prompt the user to enter a number
    System.out.println("Enter the number");
    Scanner sc = new Scanner(System.in);

    // Read the input number from the user
    int num = sc.nextInt();

    // Call the FindNumbers method to find the square of the input number
    int result = FindNumbers(num);

    // Print the result
    System.out.println(result);

  }
}

