#include <iostream>
using namespace std;

/* Operations on Data Chapter*/

int main()
{
  /* 1 - Basic Operations */
  int num1 {2};
  int num2 {7};

  cout << "Addition is: " << num1 + num2 << endl; // --> Addition
  cout << "Subtraction is: " << num2 - num1 << endl; // --> Subtraction
  cout << "Multiplication is: " << num1 * num2 << endl; // --> Multiplication
  cout << "Division is: " << num2/num1 << " With a reminder of: " << num2%num1 << endl; // --> Division and Modulo operation

  /* 2 - Precedence and Associativity*/
  int a {6};
  int b {3};
  int c {8};
  int d {9};
  int e {3};
  int f {2};
  int g {5};

  int result2 = a + b * c - d/e - f + g; // --> Multiplications and Divisions are evaluated before Additions and Subtractions
  cout << "result: " << result2 << endl;
  result2 = a/b*c +d - e +f; //-->Following associativity rules operations are performed left to right with precedence to Multiplications and Divisions
  cout << "result: " << result2 << endl;
  result2 = a/(b*c) +d - e +f; // --> Parenthesis override Precedence and Associativity rules
  cout << "result: " << result2 << endl;


}