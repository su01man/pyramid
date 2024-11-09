/* Pattern_06 : Floyd's Alphabet Triangle Pattern ( Left-Aligned )

A
BC
CDE
DEFG

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of Rows : ";
  cin >> n;
  int i, j;
  i = 1;
  while (i <= n) {
    j = 1;
    char startCh='A'+i-1;
    while (j <= i) {
      char ch =startCh+j-1;
      cout << ch;
      j++;
    }
    cout << endl;
    i++;
  }
}