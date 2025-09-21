public class Lab2 {
    public static void main(String[] args) {
        System.out.println("This is Lab2 class.");
    }
    class Student
{ String name;
int rollNumber;
String department;
void displayDetails()
{ System.out.println("Name: " + name);
System.out.println("Roll Number: " + rollNumber);
System.out.println("Department: " + department); } }
public class Main
{
public static void main(String[] args)
{ Student s1 = new Student();
s1.name = "Aarav";
s1.rollNumber = 101;
s1.department = "Computer Science";
s1.displayDetails();
s1.rollNumber = 101;
s1.department = "Computer Science";
s1.displayDetails(); } }
public class Car
{ String make;
String model;
int year;
void displayDetails()
{ System.out.println("Make: " + make);
System.out.println("Model: " + model);
System.out.println("Year: " + year); } }
public class Main
{
public static void main(String[] args)
{ Car c1 = new Car();
c1.make = "Toyota";
c1.model = "Camry";
c1.year = 2020;
c1.displayDetails();
}
}
}
