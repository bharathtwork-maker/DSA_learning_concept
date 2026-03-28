#include <iostream>
using namespace std;

int main(){

    int age ;
    cout <<"enter the age:\n";
    cin >>age;
    if (age < 18)
    {
        cout <<"he is not eligible for the job ";
    }
    else if (age <=57){
        cout << "he is eligible for the job ";
        if (age >= 55){
            cout << "but retirement soon ";
        }
    }
    else 
    cout << "retirement time ";
    return 0;

}