// Base class: Person
class Person {
    String name;
    int age;

    // Constructor
    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Method to display person details
    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

// Derived class: Employee
class Employee extends Person {
    String employeeId;
    String department;

    // Constructor
    public Employee(String name, int age, String employeeId, String department) {
        super(name, age); // Call the constructor of Person
        this.employeeId = employeeId;
        this.department = department;
    }

    // Method to display employee details
    public void displayEmployeeInfo() {
        displayInfo(); // Call method from Person
        System.out.println("Employee ID: " + employeeId);
        System.out.println("Department: " + department);
    }
}

// Main class to test inheritance
public class InheritanceDemo {
    public static void main(String[] args) {
        Employee emp = new Employee("Mushtaq Ahmad", 35, "EMP1024", "IT Services");
        emp.displayEmployeeInfo();
    }
}