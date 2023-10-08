#........................................polymorphism................
#Overloading
# class Calculator:
#     def add(self, a, b=None, c=None):
#         if b is not None and c is not None:
#             return a + b + c
#         elif b is not None:
#             return a + b
#         else:
#             return a
#         """
#         ..it is like..
#         def add(self, a):
#         return a
#         def add(self, a,b):
#         return a+b
#         def add(self, a,b,c):
#         return a+b+c
#         """
#
# # Creating object
# calc = Calculator()
#
# # Method overloading-like behavior
# print(calc.add(1))      # Output: 1
# print(calc.add(1, 2))   # Output: 3
# print(calc.add(1, 2, 3)) # Output: 6




#Overriding
# class Animal:
#     def sound(self):
#         print("Animal makes a sound")
#
# class Dog(Animal):
#     def sound(self):
#         print("Dog barks")
#
# # Creating objects
# animal_obj = Animal()
# dog_obj = Dog()
#
# # Method overriding in action
# animal_obj.sound()  # Output: Animal makes a sound
# dog_obj.sound()     # Output: Dog barks




#simple
# class Animal:
#     def make_sound(self):
#         pass
#
# class Dog(Animal):
#     def make_sound(self):
#         return "Woof!"
#
# class Cat(Animal):
#     def make_sound(self):
#         return "Meow!"
#
# # Polymorphic behavior
# animals = [Dog(), Cat()]
#
# for animal in animals:
#     print(animal.make_sound())


#.......................Abstract class...............................

# #Abstract Class
# from abc import ABC, abstractmethod
#
# # Abstract class declaration
# class Animal(ABC):
#     def __init__(self, name):
#         self.name = name
#
#     @abstractmethod
#     def make_sound(self):
#         pass  # Abstract method to be implemented by subclasses
#
# # Concrete subclass of the abstract class
# class Dog(Animal):
#     def make_sound(self):
#         return "Woof!"
#
# # Concrete subclass of the abstract class
# class Cat(Animal):
#     def make_sound(self):
#         return "Meow!"
#
# # Objects and usage
# dog = Dog("Buddy")
# cat = Cat("Whiskers")
#
# print(dog.make_sound())  # Output: Woof!
# print(cat.make_sound())  # Output: Meow!


# #interface of abstract
# from abc import ABC, abstractmethod
#
# # Interface declaration using ABC
# class Shape(ABC):
#     @abstractmethod
#     def calculate_area(self):
#         pass  # Abstract method to be implemented by subclasses
#
# # Class implementing the interface
# class Circle(Shape):
#     def __init__(self, radius):
#         self.radius = radius
#
#     def calculate_area(self):
#         return 3.14 * self.radius ** 2
#
# # Class implementing the interface
# class Square(Shape):
#     def __init__(self, side_length):
#         self.side_length = side_length
#
#     def calculate_area(self):
#         return self.side_length ** 2
#
# # Objects and usage
# circle = Circle(5)
# square = Square(4)
#
# print("Area of Circle:", circle.calculate_area())  # Output: Area of Circle: 78.5
# print("Area of Square:", square.calculate_area())  # Output: Area of Square: 16
#


##simple abstract
# from abc import ABC, abstractmethod
# import math
#
# # Abstract class Shape
# class Shape(ABC):
#     def __init__(self, name):
#         self.name = name
#
#     @abstractmethod
#     def calculate_area(self):
#         pass  # Abstract method to be implemented by subclasses
#
# # Concrete subclass Circle
# class Circle(Shape):
#     def __init__(self, name, radius):
#         super().__init__(name)
#         self.radius = radius
#
#     def calculate_area(self):
#         return math.pi * self.radius ** 2
#
# # Concrete subclass Square
# class Square(Shape):
#     def __init__(self, name, side_length):
#         super().__init__(name)
#         self.side_length = side_length
#
#     def calculate_area(self):
#         return self.side_length ** 2
#
# # Using the abstraction
# circle = Circle("Circle", 5)
# square = Square("Square", 4)
#
# print(f"Area of {circle.name} with radius {circle.radius}: {circle.calculate_area()}")
# # Output: Area of Circle with radius 5: 78.53981633974483
#
# print(f"Area of {square.name} with side length {square.side_length}: {square.calculate_area()}")
# # Output: Area of Square with side length 4: 16




#....................................encaptulation............................

##public
# class MyClass:
#     def __init__(self):
#         self.public_variable = 10
#
# obj = MyClass()
# print(obj.public_variable)  # Output: 10
# obj.public_variable = 20
# print(obj.public_variable)  # Output: 20
#
#
# #private
# class MyClass:
#     def __init__(self):
#         self.__private_variable = 10
#
# obj = MyClass()
# # Attempting to access the private variable directly will result in an error.
# # print(obj.__private_variable)  # Error: 'MyClass' object has no attribute '__private_variable'
#
# # You can access and modify private variables using name mangling.
# print(obj._MyClass__private_variable)  # Output: 10
# obj._MyClass__private_variable = 20
# print(obj._MyClass__private_variable)  # Output: 20
#
#
# #protected
# class MyClass:
#     def __init__(self):
#         self._protected_variable = 10
#
# obj = MyClass()
# print(obj._protected_variable)  # Output: 10
# obj._protected_variable = 20
# print(obj._protected_variable)  # Output: 20
#
#





#...................................Inheritance...........................

# #hierarchical
# class Baba:
#     tk=1000
#     def boka(self):
#         pass
#
# class Cele(Baba):
#     tk = 5
#     def boka(self):
#         return 'Ja porte bos'
#
# class Meye (Baba):
#     tk = 950
#     def boka(self):
#         return 'jao mamoni porte boso'
#
# efat=Cele()
# print(efat.boka())
# print(efat.tk)
#
# sumi=Meye()
# print(sumi.boka())
# print(sumi.tk)
#
# if efat.tk>sumi.tk:
#     print('Efat ar tk bro')
# else:
#     print("sumir tk bro")
#
#
#
#
#



#hybrid
# class Dada:
#     car_val=1000
#     def car(self):
#         return f'dadar car'
#
# class Nana:
#     nanar_tk=10000
#     def tk(self):
#         return f'nanar tk'
#
# class Baba(Dada,Nana):
#     jomi=100000
#     pass
#
# class Ma:
#     mar_tk=10000
#     def ma_ar_tk(self):
#         return f'ma ar tk'
#
#
# class Son(Baba,Ma):
#       pass
#
#
#
# efat=Son()
# print(efat.car())
# print(efat.ma_ar_tk())
# print(efat.tk())
# print(efat.mar_tk + efat.nanar_tk + efat.car_val+efat.jomi)




#Multiple
# class Dada:
#     def driving(self):
#         return f'dadar sompod'
#
# class Nana:
#     def moeny_bag(self):
#         return f'nanar sompod'
#
# class Baba(Dada,Nana):
#     pass
#
#
#
# father=Baba()
# print(father.driving())
# print(father.moeny_bag())
#



#multilevel
# class Gp:
#     def __init__(self,car):
#         self.car=car
#     def driving(self):
#         pass
#
# class Father(Gp):
#     def driving(self):
#         return f'father is driving the {self.car}'
#
# class Son(Father):
#     def driving(self):
#         return f'Son is driving the {self.car}'
#
# son=Son('BMW')
# print(son.driving())




##simple
# class Gp:
#     def __init__(self,car):
#         self.car=car
#     def driving(self):
#         pass
#
# class Father(Gp):
#     def driving(self):
#         return f'father is driving the {self.car}'
#
#
# father=Father('BMW')
# print(father.driving())


##super()
# class Animal:
#     def speak(self):
#         return "Animal speaks"

# class Dog(Animal):
#     def speak(self):
#         # Calling the speak method of the superclass (Animal)
#         # using the super() keyword
#         return super().speak() + " and barks"

# # Usage
# dog = Dog()
# print(dog.speak())  

