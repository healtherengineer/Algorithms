
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int fakt = 1;
        System.out.print("Enter  numeric data : ");
        int data = scanner.nextInt();
        for (int i = 1; i <= data; i++) {
            fakt *= i;

        }
        System.out.println("Factorial of " + data + " is " + fakt + ".");

    }

}
