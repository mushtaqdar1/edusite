class A {
    private void display() {
        System.out.println("Hello from A");
    }

    public void show() {
        display(); // internal call
    }
}