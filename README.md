# Assignment-1
The answer to the first c++ assignment ..Questions from c++ prime
1-) A class in C++ is a user defined type or data structure declared with keyword class that has data and functions (also called methods) as its members whose access is governed by the three access specifiers private, protected or public (by default access to members of a class is private). A class (declared with keyword class) in C++ differs from a structure (declared with keyword struct) as by default, members are private in a class while they are public in a structure. The private members are not accessible outside the class; they can be accessed only through methods of the class. The public members form an interface to the class and are accessible outside the class. Instances of these data types are known as objects and can contain member variables, constants, member functions, and overloaded operators defined by the programmer.

2-)Absruction :
Life is full of complexities, and one way we cope with complexity is to frame simplifying
abstractions.You are a collection of more than an octillion atoms. Some students of the
mind would say that your mind is a collection of several semiautonomous agents. But it’s
much simpler to think of yourself as a single entity. In computing, abstraction is the crucial
step of representing information in terms of its interface with the user.That is, you
abstract the essential operational features of a problem and express a solution in those
terms. In the softball statistics example, the interface describes how the user initializes,
updates, and displays the data. From abstraction, it is a short step to the user-defined type,
which in C++ is a class design that implements the abstract interface.
What

Encapsulation :
All data access must occur through the public interface. Thus, the
data fields of an object are effectively hidden from the programmer.
They are a part of the implementation details that are of no concern
to the user of the class. The act of hiding implementation details is
called encapsulation. While it is theoretically possible in C++ to leave
data fields unencapsulated (by placing them into the public section), this is very
uncommon in practice. We will always make all data fields private in this book.
The Product class is so simple that it is not obvious what benefit we gain

Data hiding : Encapsualtion asure data hiding . As the private in a class is the part of code which is hidden and only the ceator of the class access it.

3)To a programmer, an object is a region of storage with associated semantics.
To a designer, an object is any identifiable component in the problem domain.
In the following diagram recRoomTV is an object of class TV.
After a declaration such as int i;, i is said to be an object of type int. In
OO/C++, an object is usually an instance of a class.


4)Member Functions
Member functions can (and should) be used to interact with data contained within user defined types. User defined types provide flexibility in the "divide and conquer" scheme in program writing. In other words, one programmer can write a user defined type and guarantee an interface. Another programmer can write the main program with that expected interface. The two pieces are put together and compiled for usage. User defined types provide encapsulation defined in the Object Oriented Programming (OOP) paradigm.

Within classes, to protect the data members, the programmer can define functions to perform the operations on those data members. Member functions and functions are names used interchangeably in reference to classes. Function prototypes are declared within the class definition. These prototypes can take the form of non-class functions as well as class suitable prototypes. Functions can be declared and defined within the class definition. However, most functions can have very large definitions and make the class very unreadable. Therefore it is possible to define the function outside of the class definition using the scope resolution operator "::". This scope resolution operator allows a programmer to define the functions somewhere else. This can allow the programmer to provide a header file .h defining the class and a .obj file built from the compiled .cpp file which contains the function definitions. This can hide the implementation and prevent tampering. The user would have to define every function again to change the implementation. Functions within classes can access and modify (unless the function is constant) data members without declaring them, because the data members are already declared in the class.

But class data memebres are the parameters which are defined by the class. These members may be implicit or explicit , public or private.
 
 6-)Constructors are the special type of member function that initialises the object automatically when it is created Compiler identifies that the given member function is a constructor by its name and return type. Constructor has same name as that of class and it does not have any return type.
 Use of Constructor in C++
Suppose you are working on 100's of objects and the default value of a data member is 0. Initialising all objects manually will be very tedious. Instead, you can define a constructor which initialises that data member to 0. Then all you have to do is define object and constructor will initialise object automatically. These types of situation arises frequently while handling array of objects. Also, if you want to execute some codes immediately after object is created, you can place that code inside the body of constructor
Destructor :in object-oriented programming, a destructor (sometimes shortened to dtor) is a method which is automatically invoked when the object is destroyed. It can happen when its lifetime is bound to scope and the execution leaves the scope, when it is embedded into another object whose lifetime ends, or when it was allocated dynamically and is released explicitly. Its main purpose is to free the resources (memory allocations, open files or sockets, database connections, resource locks, etc.) which were acquired by the object along its life cycle and/or deregister from other entities which may keep references to it. The use of destructors is a necessity to the concept of Resource Acquisition Is Initialization (RAII).


