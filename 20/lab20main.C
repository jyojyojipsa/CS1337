#include <iostream>
#include <cstdlib>

using namespace std;

// Function isNegative returns true if num is negative and false otherwise
bool isNegative(int num);

int main()
{
  int num;

  while (cin >> num)
    cout << num << " is "
         << (isNegative(num) ? "negative" : "not negative") << endl;

  return EXIT_SUCCESS;
}
