class Animal1 {
    void sound() {
        System.out.println("Animal makes a sound");
    }
}

class Dog1 extends Animal1 {
    @Override
    void sound() {
        System.out.println("Dog barks");
    }
}

public class Myoverride {
    public static void main(String[] args) {
        Animal1 a = new Dog1();
        a.sound();
    }
}