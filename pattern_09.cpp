/* Pattern_09 : Reverse Alphabet Triangle Pattern ( Right-Aligned )

   A
  AB
 ABC
ABCD

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of Rows : ";
  cin >> n;
  int i, j, space;
  i = 1;
  while (i <= n) {
    j = 1;
    space = 1;
		while(space<=n-i){
			cout<<" ";
			space++;
		}
    while (j <= i) {
      char ch ='A'+j-1;
      cout << ch;
      j++;
    }
    cout << endl;
    i++;
  }
}