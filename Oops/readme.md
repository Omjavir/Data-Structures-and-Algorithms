Notes :

-> There are two ways to define class 
    > Defining inside the file 
    > Defining in another file and including it in the file E.g : `#include "Hero.cpp"`

-> There are three access modifiers 
    > Private : Can only be accessed inside the class 
    > Public : Can be accessed anywhere 
    > Protected : Similar to private and can be accessed in the class and its child / derived classes.

-> How to access private members outside the class 
    > Getter Functions 
    > Setter Functions

-> Objects can be created (allocated) by two ways : 
    > Static Allocation
        E.g : Hero om;

    > Dynamic Allocation
        E.g : Hero *om = new Hero;
        For accessing the functions (*om).level;
        Alternate method : om->level;

-> Constructors
    > Types : 
        a. Default constructor
        b. Custom created constructor
        c. Copy constructor 
    > Definition : A constructor is a special type of function called to create an object. Whenever a object is created a constructor is called automatically
    > Scope : 
    `   class Hero{
        public:
            Hero(){
                cout <<"Constructor called << endl;
            }
        };

        int main(){
            cout << "Hi"<<endl;
            Hero om;
            cout <<"Hello"<<endl;
            return 0;
        }

        Output :
            1. Hi
            2. Constructor Called
            3. Hello
    `

    > Default constructor vs created constructor
        Default constructor will disappear when we create a new custom constructor and then we'll have to pass a parameter when creating a new object.
        > Default constructr : 
            class Hero{
                public:
                int age;
            }
            Hero om;

        > Custom created constructor
            class Hero{
                public:
                int age;
                Hero(int age){
                    this.age = age;
                }
            }
            Hero om(17);
            // We will have to pass a parameter when creating a new object else it will throw an error.

-> this keyword
    > this keyword defines the object and stores the address of the current object
    > Example : 
        class Hero
        {
        public:

            int health;

            Hero(int health)
            {
                this->health        =       health;
                    ☝️                        ☝️
                health of object            input health
            }
        };

-> Deep and Shallow copy
    > Shallow copy : It's address is same and if the first property is changed then the other will also be changed. Default copy constructor creates a shallow copy
    > Deep copy : A new memory is assigned and new array is created. Custom copy constructor creates a deep copy.

-> Destructor
    > Created using `~`.
    > Used for deallocating memory. (Memory ko free karana)
    > Have no return type and no input parameters.
    > Desctructor gets called automatically for statically created objects
    > We have to manually call the destructor for dynamically created objects

-> Static keyword
    > It belongs to class not object
    > Initialize : 
        datatype classname :: fieldname = value;
                           ☝️
                Scope Resolution Operator
        Example : 
            int Hero :: timeToComplete = 24;

-> Static Functions
    > "this" keyword is not used in static functions because "this" keyword is the pointer to the current object
    > Static functions can only access static members

-> Encapsulation
    > Used for Data Hiding
    > Wrapping up the data members and functions
    > Advantages
        > Data hiding
        > Can make class "read only"
        > code readibility
        > Helps in unit testing
    > Example : 
        `
        class Hero{
            private:
                string name;
                int age;
            public:
                void setAge(int age){
                    this->age = age;
                }
                void getAge(){
                    return this->age;
                }
        };
        `

-> Inheritence
    > Syntax 
        class <derived/child_class_name> : <access_specifier> <base/parent_class_name>
    > Example
        class Male : public Human;
    > Access Modifiers
        ![Inheritence](https://media.geeksforgeeks.org/wp-content/cdn-uploads/table-class.png)
    > Types :
        > Single Inheritance :
            E.g : class B is inheriting properties of class A.

        > Multi-level Inheritance
            E.g : class C is inheriting properties of class B which means it also has inherited properties of class A.


        > Multiple Inheritance
            E.g : class C is inheriting properties from class B and class A. 

        > Hybrid Inheritance
            E.g : class B is inheriting properties of class A and class C is also inheriting properties of class A but class B cannot use the properties of class C.

        > Hierarchical Inheritance
            Combination of one or more than one types of inheritance.

-> Polymorphism
    > Polymorphism refers to the ability of an object to take on many forms or have multiple behaviors. It allows objects of different classes to be treated as objects of a common base class. 

-> Abstraction
    > Abstraction is the process of simplifying complex real-world objects into their essential characteristics. It involves hiding unnecessary details and exposing only relevant information to the users. 