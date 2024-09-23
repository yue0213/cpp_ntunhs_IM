
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<cstdlib>
using namespace std;
char a,b,c,d,e,f;
int main()
{
    cout<<"歡迎使用醫療診斷系統，請依序回答問題:\n請問您最近是否發燒?(y/n)";
    cin>>a;
    
    if(a=='y'||a=='Y'){
    cout<<"請問您最近是否咳嗽?(y/n)";
    cin>>b;
    
        if(b=='y'||b=='Y'){
            cout<<"請問您最近是否疲倦? (y/n)";
            cin>>c;
        
            if(c=='y'||c=='Y'){
                cout<< "先生/小姐您可能得了感冒。" << endl;
                return 0;
            }else{
                cout<< "先生/小姐您屬於其他系統的疾病。" << endl;
                return 0;
            }
        }else{
             cout<<"請問您最近是否高血壓? (y/n)";
             cin>>d;
        }
             if(d=='y'||d=='Y'){
               cout<<"請問您最近經常感到口乾舌燥? (y/n)";
               cin>>e;
             
                 if(e=='y'||e=='Y'){
                     cout<< "先生/小姐您可能得了肝病。" << endl;
                     return 0;
                 }else{
                     cout<< "先生/小姐您屬於其他系統的疾病。" << endl;
                     return 0;
                 }
             }else{
                 cout<<"請問您最近經常感到盜汗? (y/n)";
                 cin>>f;
             
                 if(f=='y'||f=='Y'){
                     cout<< "先生/小姐您可能得了肺病。" << endl;
                     return 0;
                 }else{
                     cout<< "先生/小姐您可能得了其他系統的疾病。" << endl;
                     return 0;
                 }
             }
    }else{
    cout<<"正常"<< endl;
    }
    system("pause");
    return 0;
}
