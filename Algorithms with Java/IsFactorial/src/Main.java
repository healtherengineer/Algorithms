
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the number : ");
        int lmt = scanner.nextInt();
        int fakt = 1;
        for(int i = 1 ; i <= lmt; i++){
            fakt *= i;
            if(fakt == lmt){
                System.out.println("The entered number  equals to " +i +"! ... :) " );
                return;
            }
            
        }
        System.out.println("The entered number equals to nothing inside the factorial numbers...");
        
        
        
    }
    
}
