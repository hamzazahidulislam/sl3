package inharitence;

class Animal {
    Animal(int a) {
        System.out.println("Animal has been crated");
    }

    public void eat() {
        System.out.println("Eating");
    }
}

public class Dog extends  Animal{
    Dog(){
        super(5);
    }

    public void Bark(){
        System.out.println("Barking....");
    }

    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.eat();
        dog.Bark();
    }
}