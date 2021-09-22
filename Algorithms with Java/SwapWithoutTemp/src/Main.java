
public class Main {

    public static void main(String[] args) {

        int num1 = 20;
        int num2 = 10;
        System.out.println("Number 1 : " + num1 + "\tNumber 2 :" + num2);
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
        System.out.println("------------------------------------------");
        System.out.println("Number 1 : " + num1 + "\tNumber 2 :" + num2);

    }
}
