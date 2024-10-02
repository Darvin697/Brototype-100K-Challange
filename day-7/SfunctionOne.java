import java.util.Scanner;

public class SfunctionOne {
    //function without argument without return value
    public static void main(String[] args) {
        sum();
        
    }

    public static void sum(){
        System.out.print("Enter two numbers :");
        try (Scanner s = new Scanner(System.in)) {
            int a=s.nextInt();
            int b=s.nextInt();
            int sum=a+b;
            System.out.println("Sum of the Entered numbers :"+sum);
        }
    }
    
}
