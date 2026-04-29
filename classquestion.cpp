#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout <<"enter two nos:";
    cin>>a>>b;
    try{
        if (b==0){
            throw "div by zero is not allowed!";
        }
        cout<<"result= "<<(a/b)<<endl;
    }
    catch(const char*msg){
        cout<<"exception caught:"<<msg<<endl;
    }
    cout<<"program continues normally.."<<endl;
    return 0;
}