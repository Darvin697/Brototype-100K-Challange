import java.util.Scanner;

public class PositiveorNegitive {
    public static void main(String  arg[]){
        try (Scanner s = new Scanner(System.in)) {
            System.out.println("Enter your Number :");
            
            int num=s.nextInt();

            if (num < 0) {
                System.out.println("Entered number is Negtive");
                
            }else{
                System.out.println("Entered number is Positive");
            }
        }











    }



    


}
