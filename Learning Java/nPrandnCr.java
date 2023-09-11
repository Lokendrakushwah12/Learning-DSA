import java.util.Scanner;
public class nPrandnCr {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the value of n: ");
        int n=sc.nextInt();
        System.out.print("Enter the value of r: ");
        int r=sc.nextInt();
        System.out.println("nPr is "+factorial(n)/factorial(n-r));
        System.out.println("nCr is "+factorial(n)/(factorial(r)*factorial(n-r)));
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
