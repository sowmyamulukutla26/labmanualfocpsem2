#include<iostream>
using namespace std;
int main(){
    float radius;
    float area;
    cout<<"Enter the radius of fountain: ";
    cin>>radius;
    area = 3.14 * radius * radius;
    cout<<"area of the circular fountain is: "<<area<<endl;
    return 0;
}