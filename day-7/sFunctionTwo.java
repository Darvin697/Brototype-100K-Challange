import java.util.Scanner;
//function with argument without return value 
public class sFunctionTwo {
    public static void main(String[] args) {
        System.out.print("Enter two numbers :");
        try (Scanner s = new Scanner(System.in)) {
            int a=s.nextInt();
            int b=s.nextInt();
            sum(a, b);
        }

    }
    public static void sum(int c,int d){
       int result=c+d;

       System.out.println("Result of numbers :"+result);


    }
}
