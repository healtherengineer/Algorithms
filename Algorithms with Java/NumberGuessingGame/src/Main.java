
import java.util.Random;
import java.util.Scanner;


public class Main {
    
    public static void main(String[] args) throws InterruptedException {
        Scanner scanner = new Scanner(System.in);
        Random rand = new Random();
         System.out.println("Your computer is composing a random number");
        int prediction = rand.nextInt(10);
        Thread.sleep(3000);
        System.out.print("Enter your guess : ");
        int guess = scanner.nextInt();
        System.out.println("is it " + guess + "? Just a Joke :) ");
        Thread.sleep(3000);
        int difference = guess - prediction;
        if (difference > 0) {
            System.out.println("The number I hold " + difference + " more than " + guess);
        } 
        else if(difference == 0){
            System.out.println("Congratulations you are literally predictor");
        }
        else {
            difference *= -1;
            System.out.println("The number I hold " + difference + " less than " + guess);

        }
        Thread.sleep(5000);
        System.out.println("The real result : " + prediction);
        
    }
    
}
