import java.util.ArrayList;
import java.util.Scanner;

public class TodoList {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> todoList = new ArrayList<>();
        boolean continueLoop = true;

        while (continueLoop) {
            System.out.println("\nChoose an option for your To-Do List:");
            System.out.println("1. Add");
            System.out.println("2. Delete");
            System.out.println("3. Show");
            System.out.print("Enter your choice: ");
            String choice = sc.next().toLowerCase();

            switch (choice) {
                case "add":
                    System.out.print("Enter the item to add: ");
                    sc.nextLine(); // consume leftover newline
                    String item = sc.nextLine();
                    todoList.add(item);
                    System.out.println("'" + item + "' has been added.");
                    break;

                case "delete":
                    System.out.print("Enter the item number to delete: ");
                    int index = sc.nextInt();
                    if (index > 0 && index <= todoList.size()) {
                        String removedItem = todoList.remove(index - 1);
                        System.out.println("'" + removedItem + "' has been deleted.");
                    } else {
                        System.out.println("Item not found. Invalid index.");
                    }
                    break;

                case "show":
                    if (todoList.isEmpty()) {
                        System.out.println("Your to-do list is empty.");
                    } else {
                        System.out.println("Your To-Do List:");
                        for (int i = 0; i < todoList.size(); i++) {
                            System.out.println((i + 1) + ". " + todoList.get(i));
                        }
                    }
                    break;

                default:
                    System.out.println("Invalid choice. Please enter 'add', 'delete', or 'show'.");
            }

            System.out.print("\nDo you want to continue? (true/false): ");
            continueLoop = sc.nextBoolean();
        }

        System.out.println("Thanks for using the To-Do List Manager!");
        sc.close();
    }
}