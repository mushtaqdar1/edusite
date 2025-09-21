class A {
    int l, b;
}

class B extends A {
    int h;

    void computeVolume() {
        int v = l * b * h;
        System.out.println("Volume: " + v);
    }
}

public class Demo2 {
    public static void main(String[] args) {
        B box = new B();
        box.l = 5;
        box.b = 4;
        box.h = 3;
        box.computeVolume();
    }
}