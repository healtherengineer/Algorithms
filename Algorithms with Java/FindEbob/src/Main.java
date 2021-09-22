
import java.util.Scanner;

public class Main {

    public static int findEbob(int a, int b) {
        int lmt = Math.min(a, b);
        int ebob = 1;
        for (int i = 2; i <= lmt; i++) {
            if (a % i == 0 && b % i == 0) {
                if (ebob <= i) {
                    ebob = i;
                }

            }
        }
        return ebob;

    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter two numbers you want to find their ebob  : ");
        int a = scanner.nextInt();
        System.out.println("Second number :");
        int b = scanner.nextInt();
        System.out.println("Their ebob is " + findEbob(a, b));
        
    }

}
