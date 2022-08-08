#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

  /* 1 - Integers */
  unsigned short unsigned_short {456};
  signed short signed_short {-456};

  // The unsigned modifier make the integer positive only, trying to declare an unsigned negative number will occur in a compile error
  unsigned int unsigned_int {10}; 
  // The signed modifier make clear that the value have to be signed (default modifier)
  signed int signed_int {-300}; 

  unsigned long unsigned_long {44};
  signed long signed_long {- 44};

  unsigned long long unsigned_long_long {888};
  signed long long signed_long_long {-888};

  cout << "unsigned short: "<< sizeof(unsigned_short) << endl;
  cout << "signed short: "<< sizeof(signed_short) << endl;

  cout << "unsigned int: "<< sizeof(unsigned_int) << endl;
  cout << "signed int: "<< sizeof(signed_int) << endl;

  cout << "unsigned long: "<< sizeof(unsigned_long) << endl;
  cout << "signed long: "<< sizeof(signed_long) << endl;

  cout << "unsigned long long: "<< sizeof(unsigned_long_long) << endl;
  cout << "signed long long: "<< sizeof(signed_long_long) << endl;

  /* 2 - Floating Numbers */

  float float_number {1.12345678901234567890f};
  double double_number {1.12345678901234567890};
  long double ldouble_number {1.12345678901234567890123456789L};

  cout << "float: " << sizeof(float_number) << endl;
  cout << "double: " << sizeof(double_number) << endl;
  cout << "long double: " << sizeof(ldouble_number) << endl;
  
  cout << setprecision(20);
  cout << "float: " << float_number << endl; //Maximum precision 7
  cout << "double: " << double_number << endl; //Maximum precision 15
  cout << "long double: " << ldouble_number << endl; 

  float number4 {192400023.0f};
  cout << "number4: " << number4 << endl; // number4 gets chunked it need to be converted as double

  double number5 {192400023};
  double number6 {1.92400023e8};
  double number7 {0.00000000002498};
  double number8 {3.498e-11};

  cout << "number5: " << number5 << endl;
  cout << "number6: " << number6 << endl;
  cout << "number7: " << number7 << endl;
  cout << "number8: " << number8 << endl;

  double number9 {5.6};
  double number10 {};
  double number11 {};

  double result = { number9 / number10 };

  cout << number9 << " / " << number10 << " yields " << result << endl;
  cout << result << " + " << number9 << " yields " << result + number9 << endl;

  result = number10/number11;
  cout << number10 << " / " << number11 << " = " << result << endl;

  /* 3 - Booleans */

  bool red_light {true};
  bool green_light {false};

  if(red_light == true)
  {
    cout << "Stop!" << endl;
  }
  else
  {
    cout << "Go Thorugh!" << endl;
  }
  if(green_light)
  {
    cout << "The light is green" << endl;
  }
  else
  {
    cout << "The Light is Not Green" << endl;
  }

  cout << sizeof(bool) << endl; // Check the size of booleans
  cout << "Red Light: " << red_light << endl; // --> Booleans are printed as numbers True: 1
  cout << "Green Light: " << green_light << endl; // --> Booleans are printed as numbers False: 0
  cout << boolalpha; // --> This statement will make boolean be printed as true or false rather then 1 or 0
  cout << "Red Light is " << red_light << endl;
  cout << "Green Light is " << green_light << endl;

  /* 4 - Characters and Text */
  char character1 {'a'};

  cout << sizeof(char) << endl; // --> Char occupies 1 byte

  char character2 = 65; // --> ASCII encoding
  cout << "Character2 as char is " << character2 << endl; //--> Prints the corrisponding Character wich is "A"
  cout << "Charcater2 as int is " << static_cast<int>(character2) << endl; // --> Prints the int value which is 65

  /* 5 - Auto keyword */

  auto var1 {12}; // --> Inteprets as integer
  auto var2 {13.0}; // --> Inteprets as double
  auto var3 {14.0f}; // --> Inteprets as float
  auto var4 {15.0l}; // --> Inteprets as long double 
  auto var5 {'e'}; // --> Inteprets as character
  auto var6 {true}; // --> Inteprets as boolean

  cout << "var1 occupies: " << sizeof(var1) << endl;
  cout << "var2 occupies: " << sizeof(var2) << endl;
  cout << "var3 occupies: " << sizeof(var3) << endl;
  cout << "var4 occupies: " << sizeof(var4) << endl;
  cout << "var5 occupies: " << sizeof(var5) << endl;
  cout << "var6 occupies: " << sizeof(var6) << endl;

  /* 6 - Assignments */
  int var7 {123}; // --> Declarationa and Intialization
  cout << "var7 is: " << var7 << endl;
  var7 = 65; // --> Assignment
  cout << "var7 now is: " << var7 << endl;

  auto var8 {333u}; // --> Declaring and initializing an unsigned int
  var8 = -22; //--> Assigning a negative value does not returns a compiler error and assign a random value

  cout << "Var 8 should be 333 and is instead: " << var8 << endl;

  return 0;
}