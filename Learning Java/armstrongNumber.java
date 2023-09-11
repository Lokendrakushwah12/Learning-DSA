import java.util.Scanner;

public class armstrongNumber {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        System.out.print("Enter the range: ");
        int firstNumber=in.nextInt();
        int secondNumber=in.nextInt();
        System.out.print("Armstrong numbers are: ");
        
        for(int i=firstNumber;i<=secondNumber;i++){
            if(check(i)){
                System.out.print(i+" ");
            }
        }
        in.close();
    }
    static boolean check(int number){
        int temp=number;
        int sum=0;
        while(temp>0){
            int rem=temp%10;
            sum+=rem*rem*rem;
            temp/=10;
        }
        if(sum==number){
            return true;
        }
        else{
            return false;
        }
    }
}
