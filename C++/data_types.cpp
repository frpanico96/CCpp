#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
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

}