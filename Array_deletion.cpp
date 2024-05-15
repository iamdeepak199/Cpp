#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"enter the size of the array :"<<endl;
    cin>>size;
    int arr[size];
    int pos;
    
  cout<<"Enter the Array elements :"<<endl;
   for(int i=0;i<size;i++){
        cin>>arr[i];
    }
  for(int i=0;i<size;i++){
        
        cout<<arr[i]<<" ";
    }
    
    cout<<endl<<"Enter Position which you want to delet from the array "<<endl;
    cin>>pos;
    if(pos<=0 || pos>size){
            cout<<"Invailed Postion :"<<endl;
        }
        
    for(int i=pos-1;i<size-1;i++){
        arr[i]=arr[i+1];
    }
     size--;
     cout<<"Updated array will be:"<<endl;
     for(int i=0;i<size;i++){
        
        cout<<arr[i]<<" ";
    }
   
    
}