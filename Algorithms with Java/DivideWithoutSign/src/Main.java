
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Please First Number : ");
        int num1 = scanner.nextInt();
        System.out.print("Please Second Number : ");
        int num2 = scanner.nextInt();
         //  First Solve       
//        int i = 0, bol =1;
//        while(bol <= num1 ){
//             i++;
//            bol = num2  * i ;
//           
//        }
//        System.out.println("Result : " + (i-1));
         
            //Second Solve
            int i = 0;
            while(num1 > num2){
                num1  -=num2;
                i++;
            }
            System.out.println("Result : " + i );
            System.out.println("Remain : " + num1);
         

    }
}
