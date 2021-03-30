**Here we will learn about operators in C++**
*C++ has rich variety of operators like arithmetic, relational, logoacal and other types as well*

---

#   1)Arithmetic Operators: 
*   provides operators for five basic operations :-
*   `+ => for addition`
*   `- => for subtraction`
*   `* => for multiplication`
*   `/ => for division`
*   `% => for getting remainder`
*   all of them are Binary operators that is they require 2 operands, but + and - can act as unary operator as well.

---

#   2)Increment or Decrement operator:
*   (i)Increment operator:-
*   ++a => prefix increment -> increase then use
*   a++ => postfix increment -> use then increase
*   (ii)Decrement operator:-
*   --a => prefix decrement -> decrease then use
*   a-- => postfix decrement ->use then decrease
*   

---

#   3)Relational Operator:
*    `<  - less than`
*    `> - greater than`
*    `<= - less than equal to`
*    `>= - greater than equal to`
*   ` == - equals to (compares)`
*   ` != - not equal to`

---

#   4)Logical operators:
*   || => Logical OR => if any of the expression is true then whole is true
*   && => Logiacl AND => if any of the expression is true then whole is false
*   ! => Logical NOT => negates the result of the expression 

---

#   5)Conditional Operator:
*   also known as ternary operator as three operands are required
*   => :?
*   expr1?expr2:expr3
*   i.e. if expr1 is true then give expr2 else give expr3

---

#   6)Some other type of Operators:
   (i) sizeof => it returns the length (in bytes) of the variable or the data type
*       eg. - sizeof var(here var is a declared variable)
*           - sizeof(type) (here type is a C++ data type)
*   (ii) comma operator - is used to store string together several expression, a group of expression separated by commas is evaluated 
*   Left to Right and the Right most expression becomes the value of total comma separated expressions.
*       eg. - b = (a =3, a+1)
*             here first a is assigned a value of 3 then b is assigned a value of a+1 i.e. 3+1 = 4
