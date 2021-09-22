
import java.util.Scanner;


public class Main {
    public static boolean isPerfect(int a){
        int sum = 0;
        for(int i = 1 ; i <= a/2 ; i++){
            if(a % i == 0){
                sum +=i;
            }
        }
        if(sum == a ){
            return true ;
        }
        return false;
    }
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number : ");
        if(isPerfect(scanner.nextInt())){
            System.out.println("Yes this is perfect ...  :) ");
        }
        else{
            System.out.println("Unfortunately ... Not Perfect... :( ");
        }
    }
    
}
