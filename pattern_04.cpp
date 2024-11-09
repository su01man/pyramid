/* Pattern_04 : Reverse Number pattern ( Left-Aligned )

1
21
321
4321

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of Rows : ";
  cin >> n;
  int i,j,k;
  i=1;
  while (i <= n) {
    j = 1;
	k=n-i;
    while (j <= i) {
      cout << n-k;
	  k++;
      j++;
    }
    cout << endl;
    i++;
  }
}