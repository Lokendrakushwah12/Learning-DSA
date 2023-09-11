import java.util.Scanner;

public class simpleInterest{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int principal = in.nextInt();
        float rate = in.nextFloat();
        int time = in.nextInt();
        float simpleInterest = principal * rate * time / 100;
        System.out.println("The simple interest is " + simpleInterest);
        in.close();
    }
}