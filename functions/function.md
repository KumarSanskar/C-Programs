# Functions in C++ :-
* functions can be considered as a smaller part of a bigger program.
* they are made so as to simplfy the work of programmer so that same chunk code of need not to be written again and again
* use of function make the program more readable and manageable
* they act on a data and return a value.

---

each function has its own name and when that is encounters it's executed at that time

----
* There are two types of functions in C++ - 
*Built in functions(library)* - they are part of compiler package. e.g. - exit(), pow(), strln().
*User defined functions* - they are created by the user and as per the requierment of the program.
---

**Function definition - 
* general form of function defination is =>
*   `type function-name(parameter-list){
        //body of the function//
     }`

* type sepcifies the return type of the value of the function.
* if no type is specified 'int' is returned.
* parameter list is comma separated list of variables of a function reffered as it's arguments.
* parameter list can even be empty.
* a function defination must have a return statement.
---

* Function Prototype - it describes a the function interface to to the compiler by giving details such as number and type 
                      of arguments and type of values returned.
---

* Void keyword - used for return type of functions that don't return a value.
* using the void as return type one makes sure that it can be used in assignment statement.
---

* Default arguments -
* we can assign a default value to the function's parameter if we don't want a variable input for that argument.
* `e.g. -  float(flot principalAmount, float rate, int time = 2) `
---

* A function can be invoked in two ways - 
* (i) Call by Value - it copies the values in actual parameters into formal parameters.
*                    - during this any change in formal parameter is not reflected back in actual parameter.
* (ii) Call by Reference - in place of passing value to function being called, a reference to original variable (value) is passed.
*                         - during this any change made in formal parameter is reflected back in actual parameter.
---
* The return statement - 
* it is used in two ways - 
* (i) as an immediate exit fromm the function
* (ii) used fro returning value to a calling code
---
* All functions in C++ return a valueexceot that of void type
* There may be three types of function in C++ -
1. Computational Function - they compute some value and return the computed value like sqrt() or the pow().
2. Manipulative Function - the functions that manipulate information and return a success or failure code, generally if value is 0 is returned, it denotes sucessful operation while any other number denotes failure.
3. Procedural functions - they perform an action but have no explicit return value. e.g. - exit()
 ---
* Lifetime - the time interval for which a particular variable or data value lives in memory is called Lifetime of variable or data value.
* For Global Variable - the lifetime is program run 
* For Local Variable having function scope - the lifetime is function run
* For Local variable having block scope - the lifetime is block run
---
* Standard Library inProgramming Language - 
* Library - is collection of subprograms used to develop other program and software
*           rather they are helper code used in other independent progrmas
* C++ header file - it contains files containg the standard functions that your program may use, they provide function prototype, definations for library function.Data types and constants used with the library functions are also defined in them.
* Some of the common standard library functions are -
* stdio.h => it defines the header files defines types and macros needed for the standard I/O package, it also defines standard I/O predefined streams like stdin,stdout, stdprn while including iostream.h files in your programs stdio.h automatically gets included in our program.
* iostream.h => it declares basic C++ stream I/O routine like open, close etc.
* string.h => it declares several string manipulation and memory manipulation routines like strcat, strchr, strcpy memccpy etc.
* math.h => declares prototypes for the math functions and math error handleres, it can perform mathematical calculation and conversions.
* stdlib.h => this header files declares several commonlyh used routines like conversion routines, search/sort routines and other miscellaneous things like calloc, malloc, realloc, _fullpath etc.
* iomanip.h => this file declares the C++ stream I/O manipulators and contians macros for creating parameterized manipulators like dec, endl, flush etc.
 
