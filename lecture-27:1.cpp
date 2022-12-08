#include <iostream>
using namespace std;

void display(int num){
    if(num){
        display(num-1);
    }else{
        return;
    }
    cout<<"\n ნომრები: "<<num;
}
int main()
{
    int num;
    cout<<"შეიყვანეთ ნომერი: ";
    cin>>num;
    
    display(num);
    return 0;
}