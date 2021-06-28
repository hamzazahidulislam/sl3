package OOP.Overloading;

class Calculator {
    public int add(int a, int b) {
        return a + b;
    }

    public int add(int a, int b, int c) {
        return a + b;
    }

    public double add(double a, double b) {
        return a + b;
    }
}

public class Test {
    public static void main(String[] args) {
        Calculator c = new Calculator();
        System.out.println(c.add(5, 4));
        System.out.println(c.add(2, 3, 4));
        System.out.println(c.add(4.2, 3.5));
    }
}
