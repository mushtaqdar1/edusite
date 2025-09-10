public class Array_2random {
        public static void main(String[] args) {
        int numbers[][] = new int[5][5];

        // Fill the array with random values between 0 and 9
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                numbers[i][j] = (int)(Math.random() * 10);
            }
        }

        // Print the array in grid format
        System.out.println("2D Array:");
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                System.out.print(numbers[i][j] + " ");
            }
            System.out.println();
        }
    }
}
