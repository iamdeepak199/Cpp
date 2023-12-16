#include<iostream>
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
	cout<<"Enter a number :"<<endl;
	cin>>N;
	for(int i=1;i<=N;i++){
		if(i%3==0 && i%5==0){
			cout<<"FIZZBUZZ"<<"  ";
		}
		else if(i%3==0){
			cout<<"FIZZ"<<" ";
		}
		else if (i%5==0)
		{
			cout<<"BUZZ"<<" ";
		}
		else{
			cout<<i<<" ";
		}
		
	}

}

