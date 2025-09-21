package atm;
import java.util.Scanner;

public class Project {
    int PIN = 5678;
    float balance = 0;
    Scanner sc = new Scanner(System.in);

    public void verifypin() {
        while (true) {
            System.out.print("Enter your PIN: ");
            int key = sc.nextInt();
            if (PIN == key) {
                System.out.println("PIN correct ✅");
                menu();
                break;
            } else {
                System.out.println("Wrong PIN ❌ Try again.");
            }
        }
    }

    public void menu() {
        while (true) {
            System.out.println("\n--- ATM Menu ---");
            System.out.println("1. Check Balance");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Exit");
            System.out.print("Choose an option: ");
            int choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Your balance is ₹" + balance);
                    break;
                case 2:
                    System.out.print("Enter amount to deposit: ₹");
                    float deposit = sc.nextFloat();
                    balance += deposit;
                    System.out.println("Deposited successfully.");
                    break;
                case 3:
                    System.out.print("Enter amount to withdraw: ₹");
                    float withdraw = sc.nextFloat();
                    if (withdraw <= balance) {
                        balance -= withdraw;
                        System.out.println("Withdrawal successful.");
                    } else {
                        System.out.println("Insufficient balance.");
                    }
                    break;
                case 4:
                    System.out.println("Thank you for using the ATM. Goodbye!");
                    return;
                default:
                    System.out.println("Invalid option. Try again.");
            }
        }
    }

    public static void main(String[] args) {
        Project atm = new Project();
        atm.verifypin();
    }
}