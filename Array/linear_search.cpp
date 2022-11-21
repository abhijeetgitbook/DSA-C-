#include <iostream>
using namespace std;
//creating a function to perform linear search on Array
int linear_search(int arr[], int n, int key){
    for(int i =0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }

    return -1;
}

int main() {
    //Array
    int arr[]={2,4,6,8,10,11,15,20,25,45};
    
    //taking user input
    int key;
    cout<<"Please Enetr your number "<<endl;
    cin>>key;
    
    int n = sizeof(arr)/sizeof(int);
    //calling linear_search function
    int index = linear_search(arr,n,key);
    
    //output the index of key element in Array
    if(index!=-1){
        cout << key<<" is Present at INDEX "<< index << endl;
    }
    else{
        cout<<key<<" is not in Array "<<endl;

    }
    return 0;
}
