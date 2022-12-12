#include <iostream>
#include <cstdlib>

using namespace std;

// Function isOdd returns true if num is odd and false otherwise
bool isOdd(int num);

int main()
{
  int num;

  while (cin >> num)
    cout << num << " is " << (isOdd(num) ? "odd" : "even") << endl;

  return EXIT_SUCCESS;
}
