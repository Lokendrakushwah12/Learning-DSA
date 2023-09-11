import java.util.Scanner;
public class Factorial {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number: ");
        int number=sc.nextInt();
        System.out.println("Factorial of "+number+" is "+factorial(number));
        sc.close();
    }
    static int factorial(int number){
        if(number==0){
            return 1;
        }
        else{
            return number*factorial(number-1);
        }
    }
}
