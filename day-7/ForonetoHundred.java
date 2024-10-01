import java.util.Scanner;

public class ForonetoHundred {
    public static void main(String arg[]){
        System.out.println("Enter your limit :");
        try (Scanner s = new Scanner(System.in)) {
            int limit=s.nextInt();
            
            for (int i=0;i<=limit;i++){
                System.out.println("\n"+i);


            }
        }






    }
    
}
