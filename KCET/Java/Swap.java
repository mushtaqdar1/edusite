public class Swap {
    
    public static void main(String[] args) {
        int number1, number2, temp;
        number1 = 10;
        number2 = 20;

        // Displaying values before swapping
        System.out.println("Before swapping:");
        System.out.println("Number 1: " + number1);
        System.out.println("Number 2: " + number2);

        // Swapping
        temp = number1;
        number1 = number2;
        number2 = temp;

        // Displaying values after swapping
        System.out.println("After swapping:");
        System.out.println("Number 1: " + number1);
        System.out.println("Number 2: " + number2);
    }
}

