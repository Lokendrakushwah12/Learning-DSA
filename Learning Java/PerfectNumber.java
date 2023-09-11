import java.util.*;

public class PerfectNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int number = in.nextInt();
        int sum = -number;
        for (int i = 1; i * i <= number; i++) {
            if (number % i == 0) {
                sum += (i+number/i);
                // System.out.println(i + " " + number / i);
            }
        }
        if (sum == number) {
            System.out.println(number + " is a perfect number.");
        } else {
            System.out.println(number + " is not a perfect number.");
        }
        in.close();
    }
}
