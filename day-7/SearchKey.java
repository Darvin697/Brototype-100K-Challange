import java.util.Scanner;

public class SearchKey {
    public static void main(String[] args) {
        System.out.print("Enter your Array limit");
        try (Scanner s = new Scanner(System.in)) {
            int limit=s.nextInt();
            
            System.out.print("Enter your Array :");
            int[] a=new int[limit]; 
            for (int i = 0; i < limit; i++) {
                a[i]=s.nextInt();
            }

            System.out.print("Enter value for search");
            int key=s.nextInt();
            
            System.out.println(a[2]);
            for (int i = 0; i < limit;i++){
                if (key == a[i]) {
                    
                    System.out.print("value found at "+(i+1));
                    break;

                    
                }
                else{
                    System.out.print("Value not found");
                    
                    
                }
                
                
            }
            
        }
    }
    
}
