#include<iostream>
#include<math.h>
using namespace std;

void fastio(bool read = false) {
	if(read) {
		#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
		freopen("error.txt","w",stderr);
		#endif
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return;
}

int main(){
    fastio(true);
   int N;
   int sum=1;
    cout<<"Enter the Number to ArmStrong or Not? : ";
    cin>>N;
     int orignalN=N;
    cout<<N<<endl;
    
    while(N){
    int Last_digit=N%10;
    sum+=pow(Last_digit,3);
    N=N/10;
    }
 
  if(sum==orignalN){
    cout<<orignalN<<" Yes it is a Armstorng number:";
  }
  else{
    cout<<orignalN<<" No it is not a Armstrong :";
  }

    }