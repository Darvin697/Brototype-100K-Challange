import java.util.Scanner;

public class input {
    public static void main(String arg[]){
        try (Scanner s = new Scanner(System.in)) {
            System.out.println("Enter two numbers :");

            int a=s.nextInt();
            int b=s.nextInt();

            System.out.println(a+"  "+b);
        }



    }
    




}
