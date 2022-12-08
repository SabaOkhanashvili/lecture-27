#include <iostream>
using namespace std;


int digit(long long n){
    
    if(n/10==0){
        return 1;
    }
    return 1+ digit(n/10);
}
int main(void)
{
    long long n = 23451;
    cout << "ციფრების რაოდენობა: "<<digit(n)<<endl;
    
    return 0;
}