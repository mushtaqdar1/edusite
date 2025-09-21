// Main.java
public class Main {
    public static void main(String[] args) {
        Student s1 = new Student("Ali", 21); // This is fine
        s1.display(); // Example method call
    }
}

class Student {
    String name;
    int age;

    // Constructor
    Student(String name, int age) {
        this.name = name; // 'this' is fine here
        this.age = age;
    }

    void display() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}