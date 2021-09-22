
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter First Number : ");
        int num1 = scanner.nextInt();
        System.out.print("Enter Second Number :");
        int num2 = scanner.nextInt();
        
        int result = 0;
        for(int i = 0 ;  i < num2 ; i++){
            result += num1;
        }
        System.out.println("Result : " + result );
        
    }
    
}
