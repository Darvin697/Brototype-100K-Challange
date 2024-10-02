import java.util.Scanner;;
public class MultiArr {
    public static void main(String[] args) {
        int[][] a = new int[3][3];
        try (Scanner s = new Scanner(System.in)) {
            System.out.print("Enters values for the array :");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    a[i][j]=s.nextInt();
                    
                }
                
            }
            System.out.println("Your Array :");
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    System.out.print(a[i][j]+" ");
                    
                }
                System.out.print("\n");
                
            }
        }
    }
    
}
