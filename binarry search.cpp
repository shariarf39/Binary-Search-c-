#include<iostream>
using namespace std;

int binary(int arr[], int len, int input){

int low=0, high = len;

while(low<=high){

    int half = (low+high)/2;

    if(arr[half]==input){
        return half;
    }

    if(input>arr[half]){
            low = half +1;


    }
        else{
            high = half -1;

        }

        }

        return -1;




}
int main(){

int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
int len = end(arr)-begin(arr);
int input;
cin>>input;
//cout<<len;

int index = binary(arr, len, input);

if(index==-1)
cout<<"Not Found"<<endl;
else
    cout<< "Found  "<<index;

}
