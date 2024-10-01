import java.util.Scanner;

public class primenumber {
    public static void main(String args[]) {
        System.out.println("Enter your number :");
        try (Scanner s = new Scanner(System.in)) {
            int num=s.nextInt();
            if (num % 2 == 0) {
                System.out.println("Entered number is Even number ");

                
            }else{
                System.out.println("Entered number is Odd number");
            }
        }

        
    }
    
}
