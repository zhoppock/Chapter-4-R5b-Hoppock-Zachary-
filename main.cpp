// Hoppock, Zachary
// squareSumLoop.cpp
// Oct. 10, 2020
// Print the sum of all squares between 1 and 100 (inclusive)
// Version # 1
#include <iostream>

using namespace std;
int main()
{
int sum = 0;
for (int i = 0; i <= 100; i++)
  sum = sum + (i*i);
cout << "The sum of all squares between 1 and 100 is " << sum;
return 0;
}