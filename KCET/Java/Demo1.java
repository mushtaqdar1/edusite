class Student {
    int age;
    String name;

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

public class Demo1 {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.age = 30;
        s1.name = "Mushtaq";
        s1.display();
    }
}