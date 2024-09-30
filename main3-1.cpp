#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int arr[100];
    srand(time(0));
    
    for(int i=0; i<100; i++){
         arr[i] = rand() % 11;    
    }
    int count_of_fives = 0;
     for(int i=0; i<100; i++){
        if( arr[i]==5){
         count_of_fives++;
     }
     }
    cout << "陣列中出現 5 的個數: " << count_of_fives << endl;

    return 0;
}
