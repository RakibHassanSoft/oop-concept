////---------------------------- Encapsulation------------------------
// class Car {
//   constructor(make, model) {
//     this.make = make;
//     this.model = model;
//   }

//   displayInfo() {
//     console.log(`Car: ${this.make} ${this.model}`);
//   }
// }

// const myCar = new Car('Toyota', 'Corolla');
// myCar.displayInfo(); // Output: Car: Toyota Corolla



////--------------------------- Inheritance-------------------------
// class Vehicle {
//   constructor(type) {
//     this.type = type;
//   }

//   startEngine() {
//     console.log(`${this.type} engine started.`);
//   }
// }

// class Car extends Vehicle {
//   constructor(type, make, model) {
//     super(type);
//     this.make = make;
//     this.model = model;
//   }
// }

// const myCar = new Car('Car', 'Toyota', 'Corolla');
// myCar.startEngine(); // Output: Car engine started.


////-----------------------Abstraction-------------------
// class Shape {
//   constructor() {
//     if (this.constructor === Shape) {
//       throw new Error("Abstract classes cannot be instantiated.");
//     }
//   }

//   calculateArea() {
//     throw new Error("Method 'calculateArea()' must be implemented.");
//   }
// }

// class Circle extends Shape {
//   constructor(radius) {
//     super();
//     this.radius = radius;
//   }

//   calculateArea() {
//     return Math.PI * this.radius * this.radius;
//   }
// }

// const circle = new Circle(5);
// console.log(`Circle Area: ${circle.calculateArea()}`); // Output: Circle Area: 78.54


////-------------------------Polymorphism-------------------
// class Bird {
//   fly() {
//     console.log('The bird is flying.');
//   }
// }

// class Fish {
//   swim() {
//     console.log('The fish is swimming.');
//   }
// }

// function makeAnimalMove(animal) {
//   animal.fly ? animal.fly() : animal.swim();
// }

// const bird = new Bird();
// const fish = new Fish();

// makeAnimalMove(bird); // Output: The bird is flying.
makeAnimalMove(fish); // Output: The fish is swimming.
