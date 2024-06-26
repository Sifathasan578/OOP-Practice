# Introduction to OOP

## What is OOP?
- **Object-Oriented Programming (OOP)** is a programming paradigm.
- It consists of a set of rules, ideas, and concepts designed to solve problems in programming.

---

# Classes and Objects

## Example:
- **Class: Car**
  - **Attributes**: Number of doors, windows, model, wheels, etc.
  - **Behaviors**: drive, accelerate, open door, open window.

### Key Points:
- A class is a user-defined data type.
- Predefined data types: int, double, string, etc.
- All members are private by default.

---

# Access Modifiers

### By Default:
- Members are private.

### Types:
- **Private**: Members are not accessible by other classes. They are hidden.
- **Public**: Members are accessible by other classes. They are not hidden.
- **Protected**: Members are in between private and public. They have specific rules.

---

# Constructors

### Characteristics:
1. Method does not have a return type.
2. Has the same name as the class it belongs to.
3. Constructors must be public.

### Important Note:
- Creating your own constructor will result in losing the default constructor.

---

# 4 Pillars of OOP

1. **Encapsulation**
2. **Abstraction**
3. **Inheritance**
4. **Polymorphism**

---

# Encapsulation

### Concept:
- Bundling together data and methods that operate on that data within a class.
- Purpose: Prevents outside access or modification of data directly.

### Access:
- Through specific public functions, known as getters and setters.

---

# Abstraction

### Concept:
- Hiding complex details behind a simpler interface.

### Example:
- Taking a picture: The internal complexities are hidden from the user.

### Implementation:
- Abstract classes and interfaces in languages like Java and C#.
- Use of pure virtual functions to enforce implementation in derived classes.

```cpp
virtual void AskForPromotion() = 0; // Pure virtual function
```

### Contract Signing:
- A class that implements an abstract class must provide an implementation for its methods.

```cpp
class Employee: AbstractEmployee {
}
```

---

# Inheritance

### Concept:
- A base class (super class/parent class) and a derived class (sub class/child class).
- The derived class inherits attributes and behaviors from the base class.

### Example:
- **Car:**
  - **State**: model, windows, doors, etc.
  - **Behaviors**: accelerate, drive

---

# Polymorphism

### Concept:
- Poly (many) and Morph (forms) = Many forms
- Allows an object to take many forms.

### Common Use:
- Using a parent class reference to refer to a child class object.

### Implementation:
- Virtual functions to ensure derived class implementations are executed.

```cpp
virtual void Work() {
    cout << Name << " is checking email, task backlog, performing those tasks...\n";
}
```

### Behavior:
- Polymorphic behavior ensures the correct implementation is executed in derived classes.

---

This structure should make your notes easier to understand and reference.
