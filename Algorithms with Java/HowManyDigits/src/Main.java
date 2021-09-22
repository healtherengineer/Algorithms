
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int num = scanner.nextInt();
        ArrayList<Integer> arr = new ArrayList<>();
        int k = 0;
        while (num > 0) {

            k = num % 10;
            num = num - k;
            num = num / 10;
            arr.add(k);
        }
        int x = arr.size();
        System.out.println("Sayımız " + arr.size() + " Basamaklıdır...");
        for (int i = arr.size() - 1; i >= 0; i--) {
            int temp = (int) Math.pow(10, --x);
            System.out.println(temp + "'ler basamağı : " + arr.get(i));

        }

    }

}
