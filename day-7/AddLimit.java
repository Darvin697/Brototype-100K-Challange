import java.util.Scanner;

public class AddLimit {

    public static void main(String arg[]){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter your limit");
            int limit=sc.nextInt();
            int sum=0;

            for(int i=0;i<=limit;i++){
                sum=sum+i;
            }
            System.out.println("Result :"+sum);
        }



    }
    
}
