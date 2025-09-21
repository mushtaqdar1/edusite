public class Student {
    public static void main(String[] args) {
        Student s1 = new Student("Mushtaq", 101, "Computer Science");
        s1.displayDetails();

        Student s2 = new Student("Zoya", 102, "Electronics");
        s2.displayDetails();
    }

    String name;
    int rollNumber;
    String department;

    // Constructor with default department
    Student(String name, int rollNumber) {
        this.name = name;
        this.rollNumber = rollNumber;
        this.department = "Undeclared";
    }

    // Constructor with all fields
    Student(String name, int rollNumber, String department) {
        this.name = name;
        this.rollNumber = rollNumber;
        this.department = department;
    }

    // Method to display student details
    void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Department: " + department);
    }
}