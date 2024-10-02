import java.util.Scanner;
//function without argument with return value 
public class sFunctionFour {
    public static void main(String[] args) {

        int a=sum();
        System.out.print("Result of Enterd numbers :"+a);
        

    }
    public static int sum(){
        System.out.print("Enter two numbers :");
        try (Scanner s = new Scanner(System.in)) {
            int a=s.nextInt();
            int b=s.nextInt();

            int result=a+b;
            return result;
        }
    }
    
}
