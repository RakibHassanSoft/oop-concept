//--------------------------- Encapsulation-----------------------------

//public-----------
// #include <bits/stdc++.h>
// using namespace std;

// class MyClass {
// public:
//     int myPublicVar;

//     void setMyVar(int value) {
//         myPublicVar = value;
//     }

//     int getMyVar() {
//         return myPublicVar;
//     }
// };

// int main() {
//     MyClass obj;
//     obj.setMyVar(42);

//     cout << "Value of myPublicVar from outside the class: " << obj.myPublicVar << endl;
//     cout << "Value of myPublicVar using member function: " << obj.getMyVar() << endl;

//     obj.myPublicVar = 10;  // Modifying public variable directly

//     cout << "Modified value of myPublicVar: " << obj.myPublicVar << endl;
//     return 0;
// }


//privet---------------
// #include <bits/stdc++.h>
// using namespace std;

// class MyClass {
// private:
//     int myPrivateVar;

// public:
//     void setMyVar(int value) {
//         myPrivateVar = value;
//     }

//     int getMyVar() {
//         return myPrivateVar;
//     }
// };

// int main() {
//     MyClass obj;
//     // obj.myPrivateVar = 42; // This line would cause a compilation error

//     obj.setMyVar(42); // Accessing private variable via public member function

//     cout << "Value of myPrivateVar using member function: " << obj.getMyVar() << endl;

//     return 0;
// }


// //protected-------------
// #include <bits/stdc++.h>
// using namespace std;

// class MyBaseClass {
// protected:
//     int myProtectedVar;

// public:
//     void setMyVar(int value) {
//         myProtectedVar = value;
//     }

//     int getMyVar() {
//         return myProtectedVar;
//     }
// };

// class MyDerivedClass : public MyBaseClass {
// public:
//     void accessProtectedVar() {
//         myProtectedVar = 42; // Accessing protected variable from derived class
//     }
// };

// int main() {
//     MyDerivedClass obj;
//     // obj.myProtectedVar = 42; // This line would cause a compilation error

//     obj.setMyVar(42); // Accessing protected variable via public member function

//     cout << "Value of myProtectedVar using member function: " << obj.getMyVar() << endl;

//     obj.accessProtectedVar(); // Accessing protected variable from derived class

//     return 0;
// }




//--------------------------------Inheritance----------------------------
//single 
// #include <bits/stdc++.h>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Dog dog;
//     dog.speak();  // Output: "Animal speaks"
//     dog.bark();   // Output: "Dog barks"
//     return 0;
// }


////Multilevel Inheritance
// #include <bits/stdc++.h>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };

// class Mammal : public Animal {
// };

// class Dog : public Mammal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Dog dog;
//     dog.speak();  // Output: "Animal speaks"
//     dog.bark();   // Output: "Dog barks"
//     return 0;
// }



////Multiple Inheritance
// #include <bits/stdc++.h>
// using namespace std;

// class A {
// public:
//     void methodA() {
//         cout << "Method A" << endl;
//     }
// };

// class B {
// public:
//     void methodB() {
//         cout << "Method B" << endl;
//     }
// };

// class C : public A, public B {
// };

// int main() {
//     C obj;
//     obj.methodA();  // Output: "Method A"
//     obj.methodB();  // Output: "Method B"
//     return 0;
// }


////Hierarchical Inheritance
// #include <bits/stdc++.h>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void bark() {
//         cout << "Dog barks" << endl;
//     }
// };

// class Cat : public Animal {
// public:
//     void meow() {
//         cout << "Cat meows" << endl;
//     }
// };

// int main() {
//     Dog dog;
//     Cat cat;
//     dog.speak();  // Output: "Animal speaks"
//     dog.bark();   // Output: "Dog barks"
//     cat.speak();  // Output: "Animal speaks"
//     cat.meow();   // Output: "Cat meows"
//     return 0;
// }



////Hybrid inheritance
// #include <bits/stdc++.h>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };

// class Mammal : public Animal {
// public:
//     void run() {
//         cout << "Mammal runs" << endl;
//     }
// };

// class Bird {
// public:
//     void fly() {
//         cout << "Bird flies" << endl;
//     }
// };

// class Bat : public Mammal, public Bird {
// public:
//     void navigate() {
//         cout << "Bat navigates in the dark" << endl;
//     }
// };

// int main() {
//     Bat bat;
//     bat.speak();   // Output: "Animal speaks"
//     bat.run();     // Output: "Mammal runs"
//     bat.fly();     // Output: "Bird flies"
//     bat.navigate(); // Output: "Bat navigates in the dark"
//     return 0;
// }



//--------------------------------Polymorphism----------------------------
///simple 
// #include <bits/stdc++.h>
// using namespace std;

// class Shape {
// public:
//     virtual void draw() {
//         cout << "Drawing a shape" << endl;
//     }
// };

// class Circle : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing a circle" << endl;
//     }
// };

// class Square : public Shape {
// public:
//     void draw() override {
//         cout << "Drawing a square" << endl;
//     }
// };

// int main() {
//     Shape* shape1 = new Circle();
//     Shape* shape2 = new Square();

//     shape1->draw();  // Output: Drawing a circle
//     shape2->draw();  // Output: Drawing a square

//     delete shape1;
//     delete shape2;

//     return 0;
// }



////Method Overriding 
// #include <bits/stdc++.h>
// using namespace std;

// class Animal {
// public:
//     virtual void sound() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() override {
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Animal animal;
//     Dog dog;

//     animal.sound();  // Output: Animal makes a sound
//     dog.sound();     // Output: Dog barks

//     return 0;
// }



////Method Overloading 
// #include <bits/stdc++.h>
// using namespace std;

// class Calculator {
// public:
//     int add(int a) {
//         return a;
//     }

//     int add(int a, int b) {
//         return a + b;
//     }

//     int add(int a, int b, int c) {
//         return a + b + c;
//     }
// };

// int main() {
//     Calculator calc;

//     cout << calc.add(1) << endl;           // Output: 1
//     cout << calc.add(1, 2) << endl;        // Output: 3
//     cout << calc.add(1, 2, 3) << endl;     // Output: 6

//     return 0;
// }



//-------------------------------Abstration-------------------------
////simple
// #include <bits/stdc++.h>
// using namespace std;
// // Abstract class declaration
// class AbstractShape {
// public:
//     // Pure virtual function (abstract method)
//     virtual void draw() const = 0;

//     // Normal member function
//     void displayArea() const {
//         cout << "Area calculation not available for this shape." << endl;
//     }

//     // Virtual destructor for polymorphic behavior
//     virtual ~AbstractShape() {}
// };

// // Concrete subclass of the abstract class
// class Circle : public AbstractShape {
// public:
//     void draw() const override {
//         cout << "Drawing a circle." << endl;
//     }
// };

// // Concrete subclass of the abstract class
// class Square : public AbstractShape {
// public:
//     void draw() const override {
//         cout << "Drawing a square." << endl;
//     }
// };

// // Usage of abstract class and concrete subclasses
// int main() {
//     Circle circle;
//     Square square;

//     circle.draw();        // Output: Drawing a circle.
//     circle.displayArea(); // Output: Area calculation not available for this shape.

//     square.draw();        // Output: Drawing a square.
//     square.displayArea(); // Output: Area calculation not available for this shape.

//     return 0;
// }



////interface
// #include <bits/stdc++.h>
//using namespace std;
// // Interface (Abstract class) declaration
// class Shape {
// public:
//     virtual ~Shape() {}  // Virtual destructor for polymorphic behavior
//     virtual double calculateArea() const = 0;  // Pure virtual function (interface method)
// };

// // Class implementing the interface
// class Circle : public Shape {
// private:
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     double calculateArea() const override {
//         return 3.14 * radius * radius;
//     }
// };

// // Class implementing the interface
// class Square : public Shape {
// private:
//     double sideLength;

// public:
//     Square(double length) : sideLength(length) {}

//     double calculateArea() const override {
//         return sideLength * sideLength;
//     }
// };

// // Usage of interface and concrete classes
// int main() {
//     Circle circle(5);
//     Square square(4);

//     cout << "Area of Circle: " << circle.calculateArea() << endl;  // Output: Area of Circle: 78.5
//     cout << "Area of Square: " << square.calculateArea() << endl;  // Output: Area of Square: 16

//     return 0;
// }


////Abstract Classes
// #include <bits/stdc++.h>
//using namespace std;
// // Abstract class declaration
// class Animal {
// public:
//     virtual ~Animal() {}  // Virtual destructor for polymorphic behavior
//     virtual void makeSound() const = 0;  // Pure virtual function (abstract method)

//     void sleep() const {
//         cout << "Zzz..." << endl;
//     }
// };

// // Concrete subclass of the abstract class
// class Dog : public Animal {
// public:
//     void makeSound() const override {
//         cout << "Woof!" << endl;
//     }
// };

// // Concrete subclass of the abstract class
// class Cat : public Animal {
// public:
//     void makeSound() const override {
//         cout << "Meow!" << endl;
//     }
// };

// // Usage of abstract class and concrete subclasses
// int main() {
//     Dog dog;
//     Cat cat;

//     dog.makeSound();  // Output: Woof!
//     dog.sleep();      // Output: Zzz...

//     cat.makeSound();  // Output: Meow!
//     cat.sleep();      // Output: Zzz...

//     return 0;
// }
