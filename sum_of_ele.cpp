// sum of all elements of arr
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[5]={ 4,4,6,2,1};
    for(int i=0;i<=5;i++){
        sum+=arr[i];
    }
    cout<<sum;
}