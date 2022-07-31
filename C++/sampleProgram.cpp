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