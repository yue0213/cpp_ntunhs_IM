
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include<string>
using namespace std;
struct Student{
    string name;
    int chinese;
    int math;
    int english;
};
char calculateGrade(float average){
    char level;
    if(average>=90){
        level='A';
    }else if(average>=80){
        level='B';
    }else if(average>=70){
        level='C';
    }else if(average>=60){
        level='D';
    }else{
        level='F';
    }
    return level;
}
int main()
{
    Student studentA;
    int numStudents;
    cout<<"輸入學生的數量:";
    cin>>numStudents;
    
    Student student[numStudents];
    
    int maxtotal=-1;
    int topStudentIndex=-1;
    
    for(int i=0;i<numStudents;i++){
    cout<<"輸入第"<<i+1<<"學生的名字:";
    cin>>student[i].name;
    
    cout<<"輸入"<<student[i].name<<"的國文成績:";
    cin>>student[i].chinese;
    
    cout<<"輸入"<<student[i].name<<"的數學成績:";
    cin>>student[i].math;
    
    cout<<"輸入"<<student[i].name<<"的英文成績:";
    cin>>student[i].english;
    int total=student[i].chinese+student[i].math+student[i].english;
    if(total>maxtotal){
    maxtotal=total;
    topStudentIndex=i;
    }
    }
    
    for(int i=0;i<numStudents;i++){
         int total=student[i].chinese+student[i].math+student[i].english;
         float average=total/3.0;
         char grade=calculateGrade(average);

    cout<<"學生:"<<student[i].name<<endl;
    cout<<"國文:"<<student[i].chinese<<endl;
    cout<<"數學:"<<student[i].math<<endl;
    cout<<"英文:"<<student[i].english<<endl;
    cout<<"總成績:"<<total<<endl;
    cout<<"平均:"<<average<<endl;
    cout<<"評級:"<<grade<<endl;
    }
    if(topStudentIndex!=-1){
        cout<<"\n第一名學生是:"<<student[topStudentIndex].name<<endl;
        cout<<"總成績:"<<maxtotal<<endl;
    }
    return 0;
}