
import java.util.Scanner;


public class Main {
    public static boolean IsPronic(int a){
        
        for(int i = 0 ; i < a ;i++){
            if(a == i * (i+1)){
                return true ;
            }
            
        }
        return false;
        
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
//        System.out.print("Sayı gir : ");
//        int num =scanner.nextInt();
//    
//        int  x = 0;
//        for(int i = 0 ; i < num ; i++){
//            if(num == i * (i+1)){
//                x = i;
//            }
//        }
//        if(x == 0){
//            System.out.println("Bu sayı pronic değildir...");
//        }
//        else{
//              System.out.println("Bu sayı pronic'tir .\n"
//                        + x +" ve " + (x+1) + "'in çarpımından oluşur...");
//        }

// 1 den 200 e kadar ;
            for(int i = 0 ; i < 200 ; i++){
                if(IsPronic(i)){
                    System.out.println(i+" Sayısı Pronic tir..");
                }
            }
    }
    
}
