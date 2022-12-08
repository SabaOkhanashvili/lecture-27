#include <iostream>

using namespace std;


void even(int l,int r){
    if(r<l){
        return;
    }
    
    r% 2 == 0 ? even(l,r-2)
              : even(l,r-1);
    
    if(r%2==0){
        cout<<r<<" ";
    }          
}

void odd(int l,int r){
    if(r<l){
        return;
    }
    
    r%2==1 ? odd(l,r-2)
           : odd(l,r-1);
    
    if(r%2 ==1){
        cout<<r<<" ";
    }       
}
int main()
{
  int l = 10, r = 40;
    cout << "Ლუწი რიცხვები:";
 

    even(l, r);
    cout << endl;
 

    cout << "Დაამატე ციფრები:";
    odd(l, r);
}