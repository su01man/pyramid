/* Pattern_02 : Number Triangle Pattern ( Left-Aligned )

1
22
333
4444

*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cout<<"Enter the number of Rows : ";
  cin>>n;
  int i, j;
  i = 1;
  while(i<=n) {
    j = 1;
    while(j<=i){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }
}