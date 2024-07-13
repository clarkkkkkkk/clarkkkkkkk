package training;
import java.util.Scanner;

public class Training {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);
        
        int num1, num2;
        String symbol;
        
        float result; // <-- temporary usage
        
        System.out.println("Welcome to Calculator");
        System.out.println("Available Operator");
        System.out.println("[+] [-] [*] [/]");
        
        System.out.println(" "); // Space
        
        System.out.print("Enter first number: ");
        num1 = read.nextInt();
        System.out.print("Select Operator to use: ");
        symbol = read.next();
        System.out.print("Enter second number: ");
        num2 = read.nextInt();
        
        switch(symbol){
            case "+":
                result = num1 + num2;
                break;
            case "-":
                result = num1 - num2;
                break;
            case "*":
                result = num1 * num2;
                break;
            case "/":
                if (num2 != 0){
                    result = num1 / num2;
                }else{
                    System.out.println("Error must be division by zero!");
                    return;
                }
                break;
            default:
                System.out.println("Invalid input please try again");
                return;
        }
        System.out.println("The result is: " + result);
    }
}