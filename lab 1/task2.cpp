#include <iostream>
using namespace std;
int main ()
{
 float a=5.5; 
 int b(3); 
 int c{2}; 
 float result; 
 a = a + b;
 result = a - c;
 cout << result;
 return 0;
}
