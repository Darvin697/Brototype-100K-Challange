import java.util.Scanner;

public class NumberPattern {
    public static void main(String[] args) {
        System.out.print("Enter your limit :");
        try (Scanner s = new Scanner(System.in)) {
            int limit=s.nextInt();

            for(int i=1;i<limit;i++){
                for(int j=0;j<=i;j++){
                    int  sum=j+1;
                    System.out.print(" "+sum);
                }
                System.out.print("\n");

            }
        }
    }
}
