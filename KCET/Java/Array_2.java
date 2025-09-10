public class Array_2 {
    
    public static void main(String[] args) {
        int numbers[][] = new int[5][5];
         

        System.out.println("2D Array:");
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                System.out.print(numbers[i][j] + " ");
            }
            System.out.println();
        }
    }
}