// Define the base class (superclass)
abstract class Animal {
    private String name;  // Encapsulation: private variables

    // Constructor
    public Animal(String name) {
        this.name = name;
    }

    // Getter for name
    public String getName() {
        return name;
    }

    // Abstract method (to be implemented by subclasses)
    public abstract void makeSound();

    // Non-abstract method
    public void eat() {
        System.out.println(name + " is eating.");
    }
}

// Define a subclass (Dog) that extends Animal
class Dog extends Animal {

    public Dog(String name) {
        super(name);
    }

    // Implementation of the abstract method
    @Override
    public void makeSound() {
        System.out.println(getName() + " says: Woof Woof");
    }

    // Additional method specific to Dog
    public void fetch() {
        System.out.println(getName() + " is fetching the ball.");
    }
}

// Define another subclass (Cat) that extends Animal
class Cat extends Animal {

    public Cat(String name) {
        super(name);
    }

    // Implementation of the abstract method
    @Override
    public void makeSound() {
        System.out.println(getName() + " says: Meow Meow");
    }

    // Additional method specific to Cat
    public void scratch() {
        System.out.println(getName() + " is scratching the furniture.");
    }
}

// Main class to demonstrate OOP concepts
public class OOPExample {
    public static void main(String[] args) {
        // Create objects (instances) of Dog and Cat
        Dog myDog = new Dog("Buddy");
        Cat myCat = new Cat("Whiskers");

        // Polymorphism: Animal reference holding Dog object
        Animal animalDog = myDog;
        Animal animalCat = myCat;

        // Using the methods
        myDog.makeSound(); // Buddy says: Woof Woof
        myDog.eat();       // Buddy is eating.
        myDog.fetch();     // Buddy is fetching the ball.

        myCat.makeSound(); // Whiskers says: Meow Meow
        myCat.eat();       // Whiskers is eating.
        myCat.scratch();   // Whiskers is scratching the furniture.

        // Demonstrating polymorphism
        animalDog.makeSound(); // Buddy says: Woof Woof
        animalCat.makeSound(); // Whiskers says: Meow Meow
    }
}
