public class Calculator {
public int add(int a, int b) // Instance method to add two numbers
{        int sum = a + b;
        return sum;    }
public static int multiply(int x, int y) // Static method to multiply two numbers
 {        return x * y;    }
    // Method with void return type (does not return any value)
    public void displayMessage(String message) {
        System.out.println(message);
    }
    public static void main(String[] args) {
        // Calling an instance method requires an object
        Calculator myCalculator = new Calculator();
        int resultAdd = myCalculator.add(10, 5);
        System.out.println("Sum: " + resultAdd); // Output: Sum: 15
        // Calling a static method using the class name
        int resultMultiply = Calculator.multiply(4, 6);
        System.out.println("Product: " + resultMultiply); // Output: Product: 24
        // Calling a void method
        myCalculator.displayMessage("Hello from Java method!"); // Output: Hello from Java method!
    }
}
