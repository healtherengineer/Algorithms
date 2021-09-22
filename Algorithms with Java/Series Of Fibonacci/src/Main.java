
import java.util.Scanner;


public class Main {
    public  static void printArr(int[] arr){
        for(int i = 0 ; i < arr.length ; i++){
            System.out.print( arr[i] + " ");
        }
    
}
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("How many numbers Do you wanna exist in the Series : ");
        int lmt = scanner.nextInt();
        int[] fib = new int[lmt];
        fib[0] = 0 ;
        fib[1] = 1 ;
        for(int i = 2 ;i<lmt;i++ ){
            fib[i] = fib[i-1] + fib[i-2];
        }
        printArr(fib);
    }
    
}
