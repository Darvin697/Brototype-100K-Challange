public class Operation {
    
    int result;

    void addition(int num1, int num2){
        result=num1+num2;

    }

    void substraction(int num1, int num2){
        result=num1-num2;

    }

    void multipilication(int num1, int num2){
        result=num1*num2;
    }

    void division(int num1, int num2){
        result=num1/num2;
    }

    void displayoperation(){
        System.out.println("Result : "+result);
    }

}
