/* Pattern_07 : Reverse star Pattern ( Right-Aligned )

   *
  **
 ***
****

*/

#include<iostream>
using namespace std;


int main(){
	int n;
    cout<<"Enter the number of Rows : ";
	cin>>n;
	int i,j,space;
	i=1;
	while(i<=n){
		j=1;
		space=1;
		while(space<=n-i){
			cout<<" ";
			space++;
		}
		while(j<=i){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
}