import java.util.Scanner;

public class armstrong {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number:");
        int b = sc.nextInt();
        int a = b;
        int sum=0;
        int digits = String.valueOf(a).length();
        while(b>0){
            int digit = b%10;
            sum += Math.pow(digit, digits);
            b = b/10;
        }   
        if(sum == a){
            System.out.println("It is an Armstrong number");
        }
        else{
            System.out.println("It is not an Armstrong number");
        }
    }
}
