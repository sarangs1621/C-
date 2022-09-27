
// 1st methord
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;

  if ( n % 2 == 0)
    cout << n << " is even.";
  else
    cout << n << " is odd.";

  return 0;
}

//2nd methord
#include <iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter an integer: ";
  cin >> n;
    
  (n % 2 == 0) ? cout << n << " is even." :  cout << n << " is odd.";
    
  return 0;
}

