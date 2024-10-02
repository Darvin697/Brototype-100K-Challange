import java.util.Scanner;

public class ArraySum {
    public static void main(String[] args) {
        System.out.println("Enter your limit for the Array :");
        try (Scanner s = new Scanner(System.in)) {
            int limit=s.nextInt();
            System.out.print("Enter values for the array");
            int[] arr = new int[limit];

            for ( int i = 0; i < limit; i++) {
                 arr[i]=s.nextInt();
                
                
            }
            //sum
            int sum=0;
            for (int i = 0; i < limit; i++) {
                sum=arr[i]+sum;
                
            }
            System.out.print("Sum of array :"+sum);
        }
    }
    
}
