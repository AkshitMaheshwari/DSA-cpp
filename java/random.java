import java.util.*;
public class random {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int b = sc.nextInt();
        int a = (int)(Math.random()*9) + 1;
        System.out.println(a);
        if(a==b){
            System.out.println("You win");
        }
        else{
            System.out.println("You lose");
        }
    }
}
