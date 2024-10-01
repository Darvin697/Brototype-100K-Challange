import java.util.Scanner;

public class StarPattern {
    public static void main(String[] args) {
        System.out.println("Enter your limit :");
        try (Scanner s = new Scanner(System.in)) {
            int limit=s.nextInt();

            for(int i=1;i<limit;i++){

                for(int j=0;j<i;j++){
                    System.out.print("* ");
                }
                System.out.print("\n");
            }
        }

    }
    
}
