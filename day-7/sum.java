import java.util.Scanner;

public class sum {
    public static void main(String arg[]){
        try (Scanner s = new Scanner(System.in)) {
            System.out.println("Enter two numbers :");

            int a=s.nextInt();
            int b=s.nextInt();

            int c=a+b;

            System.out.println("Sum of Entered number :"+c);
        }






    }
    
}
