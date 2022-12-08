#include <iostream>

using namespace std;

void reverse(char * str){
    if(*str == '\0'){
        return;
    }else{
        reverse(str + 1);
        cout<<*str;
    }
}


int main()
{
    char str[] = "Hello World";
    cout<<"ორიგინალი სიტყვა: "<<str<<endl; 
    cout<<"შებრუნებული სიტყვა: "; 
    reverse(str); 
   return 0; 

    return 0;
}