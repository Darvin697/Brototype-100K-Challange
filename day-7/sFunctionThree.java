import java.util.Scanner;
// function with argument and with return value 
public class sFunctionThree {
    public static void main(String[] args) {
        System.out.print("Enter two numbers");
        try (Scanner s = new Scanner(System.in)) {
            int a=s.nextInt();
            int b=s.nextInt();
            int r=sum(a, b);
            System.out.print("Result : "+r);
        }
    }
    public static int sum(int a,int b){
        int result=a+b;
        return result;

    }

    
}
