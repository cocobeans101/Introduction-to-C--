#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.1415926;

int main() {
    /*
    Topic 1 : variables and Identifiers
    */
   int apples = 5; //Declared and initialized...
   int oranges = 3;
   int totalFruits = apples + oranges;

   cout << "Top 1 : Variables and Identifiers\n";
   cout << "Apples: " << apples << endl;
   cout << "Oranges: " << oranges << endl;
   cout << "Total fruits: " << totalFruits << endl << endl;

   //Topic 2 : Arithmetic Expressions...

   //Basic expressions
   int a = 10, b = 4;
   int sum = a + b;
   int diff = a - b;
   int prod = a * b;
   int quotient = a / b;
   int remainder = a % b;

   cout << "Topic 2 : Arithmetic Expressions" << endl;
   cout << "a: " << a << endl;
   cout << "b: " << b << endl;
   cout << "Sum: " << sum << endl;
   cout << "Difference: " << diff << endl;
   cout << "Product: " << prod << endl;
   cout << "Quotient: " << quotient << endl;
   cout << "Remainder: " << remainder << endl << endl;

   //You can print out the above variables if you like...

   //Topic 3 : Floating-Point NUmbers and Precision

   double price = 19.99;
   double taxRate = 0.075; //7.5% sales tax
   double taxAmount = price * taxRate;
   double totalPrice = price + taxAmount;

   cout << "Topic 3 : Floating-Point Numbers\n";
   cout << "Base Price: " << price << endl;
   cout << "Tax Rate: " << taxRate << endl;
   cout << "Tax Amount: " << taxAmount << endl;

   cout << fixed << setprecision(2) << "Total Price (formatted to 2 decimal places): " << totalPrice << endl << endl;
   // Fixed changes from scientific to fixed point...

   //Topic 4 : Constant Variables (const)
   
   double radius = 2.5;

   double circleArea = PI * radius * radius;

   cout << "Topic 4: Constant Variables\n";
   cout << "PI(constant): " << PI << endl;
   cout << "Radius: " << radius << endl;
   cout << "Area of the circle: " << circleArea << endl << endl;

   // Topic 5 : Math Functions...

   double number = 16.0;

   double root = sqrt(number);
   double power = pow(2.0, 8.0); // 2^8
   double absoluteValue = abs(-3.5);


   cout << "Topic 5 : Math Functions\n";
   cout << "Square Root of " << number << " : " << root << endl;
   cout << "2^8 using pow function is " << power << endl;
   cout << "abs(-3.5) is " << absoluteValue << endl << endl;

   // Topic 6 : Integer Division and Modulus

   int totalStudents = 23, groupSize = 4;
   
   int fullGroups = totalStudents / groupSize;
   int leftOver = totalStudents % groupSize;

   cout << "Topic 6 : Integer Division and Modulus\n";
   cout << "Total Students: " << totalStudents << endl;
   cout << "Group Size: " << groupSize << endl;
   cout << "Full Groups: " << fullGroups << endl;
   cout << "Students Left: " << leftOver << endl << endl;

   // Topic 7 : Type Conversions (casting)

   int pizzas = 7, people = 2;

   //Interger division
   int slicesPerPersonInt = pizzas / people;
   //Explicit type conversion...
   double slicePerPersonDouble = static_cast<double>(pizzas) / people; // double / int

   cout << "Topic 7 : Type Conversions" << endl;
   cout << "Pizzaas: " << pizzas << endl;
   cout << "People: " << people << endl;
   cout << "Integer Division: " << slicesPerPersonInt << endl;
   cout << "Floating-Point Division: " << slicePerPersonDouble << endl;

   //Implicit type conversions...
   double average = (pizzas + people) / 2.0;
   cout << "Average of pizzas and people (using 2.0): " << average << endl << endl;

   // Topic 8 : Characters and ASCII code

   char letterA = 'A';
   char letterB = 'B';
   char digitChar = '7';

   int codeA = static_cast<int>(letterA);
   int codeB = static_cast<int>(letterB);
   int codeDigit = static_cast<int>(digitChar);

   cout << "Topic 8 : Characters and ASCII code" << endl;
   cout << "ASCII code of '" << letterA << "' is: " << codeA << endl;
   cout << "ASCII code of '" << letterB << "' is: " << codeB << endl;
   cout << "ASCII code of '" << digitChar << "' is: " << codeDigit << endl << endl;

   char nextLetter = letterA + 1; 
   cout << "We add 1 to '" << letterA << "' : " << nextLetter << endl;

}