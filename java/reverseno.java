import java.util.*;
public class reverseno {
    public static void main(String[] args){
        int a = 12345;
        while(a>0){
            int i = a%10;
            System.out.print(i);
            a = a/10;
        }
    }
}
