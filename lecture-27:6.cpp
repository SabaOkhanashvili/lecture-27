#include <iostream>

using namespace std;

int digit_sum(int n){
    
    if(n == 0){
        return 0;
    }return(n%10+digit_sum(n/10));
}

int main()
{
    int num = 3456712;
    int sum = digit_sum(num);
    cout << "ჯამი: "<<num<<" არის: "<<sum<<endl;

    return 0;
}