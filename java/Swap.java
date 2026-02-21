public class Swap {
    public static void main(String[] args) {
        int a = 5, b = 10;
        System.out.println("Before swapping: a = " + a + ", b = " + b);

        // Swapping using a temporary variable
        a = a+b;
        b = a-b;
        a = a-b;

        System.out.println("After swapping: a = " + a + ", b = " + b);
    }
}
