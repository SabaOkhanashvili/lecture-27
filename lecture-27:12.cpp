#include <iostream>

using namespace std;

int check(int num1,int index){
    if(num1<2){
        return 0;
    }
    if(num1==2 || num1==3){
        return 1;
    }
    if(num1 % index == 0){
        return 0;
    }
    if(index <= num1 / 2){
        return 1;
    }
    int result =check(num1,index+1);

    return(result);
}
int main()
{
    int num;
    cout<<"მიუთითეთ რიცხვი: ";
    cin >> num;
    if(check(num,2)==1){
              cout <<num<<" არის ძირითადი რიცხვი !";
   }
   else{
      cout <<num<<" არ არის ძირითადი !";
   }
    return 0;
}