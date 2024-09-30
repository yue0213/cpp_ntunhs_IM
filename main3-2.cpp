#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#define MAX 100
int main(){
    int arr[MAX];
    int n;
    cout <<"輸入陣列大小(最多100)";
    cin>>n;
    if(n<1 || n>100){
    cout<<"錯誤"<<endl;
    return 1;
    }
    for(int i=0; i<100; i++){
         arr[i] = rand() % 11;    
    }
    cout<<"輸入"<<n<<"個整數"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"反轉後的陣列為:";
    for(int i =n-1;i>=0;i--){
    cout<<arr[i];
    if (i>0){
        cout<<" ";
    }
    }
    cout<<endl;
    return 0;

}
