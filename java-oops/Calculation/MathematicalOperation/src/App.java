import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        System.out.print("Enter two numbers :");
        try (Scanner s = new Scanner(System.in)) {
            int a=s.nextInt();
            int b=s.nextInt();

            System.out.print("Enter 1 for Addition : \nEnter 2 for Sustraction : \nEnter 3 for Multiplication : \nEnter 4 for Divison : ");
            int c=s.nextInt();
            Operation s1=new Operation();
            switch (c) {
                case 1:
                s1.addition(a, b);
                s1.displayoperation();
                    break;
                case 2:
                s1.substraction(a, b);
                s1.displayoperation();
                    break;
                case 3:
                s1.multipilication(a,b);
                s1.displayoperation();
                    break;
                case 4:
                s1.division(a, b);
                s1.displayoperation();
                    break;
                default:
                System.out.println("Error !!!");
                    break;
            }
        }

        
    }
}