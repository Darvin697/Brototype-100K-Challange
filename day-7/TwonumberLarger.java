import java.util.Scanner;

public class TwonumberLarger {
    public static void main(String arg[]){
        System.out.println("Enter two numbers :");
        try (Scanner s = new Scanner(System.in)) {
            int num1=s.nextInt();
            int num2=s.nextInt();

            if (num1 < num2) {
                System.out.println("Entered number "+num2+ "is greater");
                
            }else{
                System.out.println("Entered number "+num1+" is greater");
            }
        }










    }
    
}
