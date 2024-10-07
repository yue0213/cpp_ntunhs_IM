#include <iostream>
#include <string>
using namespace std;
bool askYesNo(string question){
    char response;
    cout<<question<<"(y/n)";
    cin>>response;
    return (response=='y'||response=='Y');
}
int main(){
    if(askYesNo("你有發燒嗎?")){
        if(askYesNo("你有咳嗽嗎?")){
            if(askYesNo("你感覺疲倦嗎?")){
                if(askYesNo("你有高血壓嗎?")){
                    if(askYesNo("你感覺口乾嗎?")){
                        cout<<"診斷結果:肝病"<<endl;
                    }else{
                       cout<<"診斷結果:其他系統問題"<<endl;
                    }
                }else{
                    if(askYesNo("你有盜汗嗎?")){
                        cout<<"診斷結果:肝病"<<endl;
                    }else{
                        cout<<"診斷結果:其他系統問題"<<endl;
                    }
                }
            }else{
                cout<<"診斷結果:其他系統問題"<<endl;
            }
        }else{
            cout<<"診斷結果:感冒"<<endl;
        }
    }else{
        cout<<"你是正常的"<<endl;
            }
                    }