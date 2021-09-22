
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static boolean Isprime(int a) {
        if (a == 1) {
            return false;
        }
        for (int i = 2; i < a; i++) {

            if (a % i == 0) {

                return false;
            }

        }
        return true;

    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();
        System.out.println("Please Enter the number : ");
        int n1 = scanner.nextInt();

        for (int i = 1; i <= n1; i++) {
            if (n1 % i == 0) {

                if (Isprime(i)) {
                    System.out.print(i + " ");
                    arr.add(i);
                }
            }

        }
        System.out.println("");
        int c = 0;

        while (n1 % arr.get(c) == 0 && n1 > 0) {
            n1 = n1 / arr.get(c);
            System.out.print(arr.get(c) + " ");
            if (n1 % arr.get(c) != 0) {
                if (c < arr.size() - 1) {
                    c++;
                }

            }
        }

    }

}
