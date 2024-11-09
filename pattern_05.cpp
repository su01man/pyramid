/* Pattern_05 : Floyd's Triangle Pattern ( Left-Aligned )

 1
 2 3
 4 5 6
 7 8 9 10
 
*/

#include <iostream>
using namespace std;

int main() {
  int n,num=1;
  cout<<"Enter the number of Rows : ";
  cin>>n;
  int i, j;
  i = 1;
  while(i<=n) {
    j = 1;
    while(j<=i){
      cout<<" "<<num;
      num++;
      j++;
    }
    cout<<endl;
    i++;
  }
}