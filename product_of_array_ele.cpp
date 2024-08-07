//wap to calculate the product of all the elemenyts of arr

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int i,mul=1;
    for(i=0;i<5;i++){
        mul*=arr[i];
   }

    cout<<"product is"<<mul;
    return 0;
}
