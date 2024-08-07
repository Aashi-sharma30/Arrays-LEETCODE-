//wap to find the x element in arr.


#include<iostream>
using namespace std;
int main(){
    int n,x;
    int arr[n];
    cout<<"enter size";
    cin>>n;
    cout<<"enter x";
    cin>>x;
    cout<<"enter elements";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    bool flag=false;
    for(int i=0;i<=n;i++){
        if(arr[i]==x){
            flag=true;
        }
        if(flag==true){
            cout<<"ele found";
        } 
        else{
            "not found";
        }
            //cout<<x<<" "<<i;
    }

}