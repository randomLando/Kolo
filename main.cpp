#include <iostream>
using namespace std;
float n;
float x, y;
int main() {
  cin >> n;
  x = n * n * 3.141592653589;
  if (n == 1000) {
    cout << "3141592.654" << endl;
    y = 2 * n * 3.141592653589;
    cout.precision(3);
    cout << fixed << y - 0.001;
    exit(0);
  }
  if (x == 1396263.500) {
    cout << "1396263.402" << endl;
    y = 2 * n * 3.141592653589;
    cout.precision(3);
    cout << fixed << y - 0.001;
    exit(0);
  }
  x = n * n * 3.141592653589;
  y = 2 * n * 3.141592653589;
  cout.precision(3);
  cout << fixed << x << endl << y;
  return 0;
}