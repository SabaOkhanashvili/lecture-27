#include <iostream>

using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }else{
        return(n*fact(n-1));
    }
}

int main()
{
    int n;
    cout<<"შეიყვანეთ რიცხვი: ";
    cin>>n;
    int fac_n = fact(n);
    cout <<"ფაქტორული n= "<<fac_n<<endl;

    return 0;
}