#include<iostream>
#include<string>
using namespace std;
/* Prototype of the functions */
int addNumbers(int, int);
int multiplyNumbers(int, int);

int main(int argc, char **argv)
{
  int firstNumber = 12;
  int secondNumber = 9;

  cout << "First Number is: " << firstNumber << endl << "Second Number is: " << secondNumber << endl;

  int thirdNumber {4}; // --> Another way to declare variables

  /* if the function is not declared it will not be compiled*/
  int sum = addNumbers(firstNumber, secondNumber);

  cout << "The sum of the two numbers is: " << sum << endl;
  cout << "The multiplication of the two numbers is: " << multiplyNumbers(firstNumber, secondNumber) << endl;

  cerr << "This is an error" << endl;
  clog << "This is a log" << endl;

  string name;
  int age;

  /* Input from terminal */
  cout << "Please enter your name: ";
  cin >> name;

  cout << "Please enter your age ";
  cin >> age;

  cout << "Hello " << name << "! You are " << age << " years old" << endl;

  /* It is possible to get multiple inputs in more than one line*/
  cout << "Please enter your name and your age separated by space: ";
  cin >> name >> age;
  cout << "Hello " << name << "! You are " << age << " years old" << endl;

  cout << "Helloo C++20" << endl;
  int new_age { 21 };
  cout << "Age: " << new_age << endl;

  /* The user may insert spaces for the input string
  * "getLine" is used to handle these cases
  */ 
  string fullName;
  int age1;
  cout << "Please enter your full name and age separated by white spaces: " << endl;
  cin.ignore(); // --> This is needed because there is a cin input from above which makes the getline not working properly
  getline(cin, fullName);
  cin >> age1;
  cout << "Hello " << fullName << "! You are " << age1 << " years old" << endl;

  /* Working with different number systems */
  int number1 = 15; // Decimal
  int number2 = 017; // Octal
  int number3 = 0x0f; // Hexadecimal
  int number4 = 0b00001111; // Binary
    // Numbers will be printed in decimal
  cout << "Number 1 is: " << number1 << endl;
  cout << "Number 2 is: " << number2 << endl;
  cout << "Number 3 is: " << number3 << endl;
  cout << "Number 4 is: " << number4 << endl; 

  /* Integers */
  cout << sizeof(int) << endl; // this will return 4 which is the bytes size occupied by int data type
  int elephant_count; // This will initialize to random number
  int lion_count {}; // Variable braced initialization, this will initialize to 0
  int dog_count = 10; // Assignment variable initialization
  int cat_count (15); // Functional variable initialization
  int domestic_animals {dog_count + cat_count};
  //int narrowing_conversion {2.9}; --> This throws a compiler error
  //int narrowing_conversion_functional(2.9); --> This throws a compiler warning, but generates a data loss since the value stored will be 2 instead of 2.9
  return 0;
}
/* Function declaration */
int addNumbers(int first_number, int second_number)
{
  return first_number + second_number;
}
/* This functions multiplies two numbers */
int multiplyNumbers(int first_number, int second_number)
{
  return first_number * second_number;
}