#include <iostream>
#include <algorithm>

using namespace std;
/*for this kind of pattern we use this code 
    *    
   ***
  *****
 *******
*********      
*/
void pat1(int n){
    for (int i=0;i<n;i++){
        //space
    for (int j=0;j<n-i-1; j++)      /*if we start the looping from 1 then the condition will be simply j<n*/ 
    {
        cout <<" ";
    }
    for (int j=0;j<2*i+1;j++){    //stars
        cout << "*";
    }
    for (int j=0;j<n-i-1;j++){      //space
        cout << " ";
    }
cout <<endl;
}
}

/*for this kind of pattern we make use of pat2
*********     
 *******           the main formula here is for star we use   2*n - (2*i+1)   
  *****          
   ***             the observed thing is for the d  ecreasing value of stars we use the above one 
    *               for increasing number of star we use 2 * i + 1    */

void pat2(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        for (int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for (int j=0;j<i;j++){
            cout<<" ";
        }
         cout << endl;
    }
   
}


/*            for this pattern we have to just add both the inverted pyramid and the upright pyramid but we have to loop it in separate loop
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****
   ***
    *      */
void pat3(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for (int j=0 ; j< 2*i+1;j++){
            cout<< "*";
        }
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
          cout <<endl;
        
    }
    for (int i=0;i<n;i++){
        for (int j=0; j<i;j++){
            cout << " ";
        }
        for (int j=0; j<2*n-(2*i+1);j++){
            cout <<"*";
        }
        for (int j=0 ; j< i ;j++){
            cout<< " ";

        }
        cout <<endl;
    }
}

/*
*
**
***       for this we have to add both decreasing and increasing pattern of right angle triangle 
****     
*****      
****       here one important thing if we start the triangle from 0 then the condition for the dcreasing j loop is j <= 2-i-1 
***         if we start with 1 then the loop condition is loop is j <= 2-i+1
**
*   */
void pat4(int n){
    for(int i=0; i< n; i++){
        for (int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<=n; i++){    
        for (int j=0; j<=n-i-2; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

/*
1           here one thing is to start the even number with 1 so use one start variable and then assign the value to 1 and then in the inner loop 
01          we have print start and after that we have reverse the number to 0 so we can use start = 1 - start or if else condition which i have shown 
101
0101
10101   */
void pat5(int n){
    int start =1;
    for (int i=0;i<n; i++){
        if (i%2 == 0)
        start = 1;
        else
        start = 0;

        for (int j=0; j<=i; j++){
            cout<<start ;               /* if (start == 1) start = 0;
                                           else start = 1;*/
           start = 1 - start;
        }
        cout<< endl;
    }
}

/*
1      1         here we have to remember that we have to reverse the second number loop and for space we have to initialize space = 2 * (n-1) and then at last we have to reduce 2 
12    21
123  321
12344321  */

void pat6(int n){
    int space = 2 * (n-2);    //because the space here is multiple of 2 if you observe so the formula can be 2 * (n-1) for ex 2*(5-1) = 8 then the space starts with 8
    for (int i=1 ; i < n; i++){
        //for number
       for (int j=1; j<=i; j++){
           cout<<j;              //we looped from 0 so j + 1 otherwise its just j
       }
       //for space 
       for (int j=1; j<=space;j++)      
       {
        cout<< " ";
       }
       //for number 
       for (int j=i; j>=1; j--){            //if we observe the pattern for the second numbers its just the reverse so just reverse the first loop      
        cout << j;
       }
       cout<< endl;
       space -= 2;
    }
}

/*
1                for this pattern just create the right angled triangle and then increase the num by 1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void pat7(int n){
    int num=1;
    for (int i=0; i< n; i++){
        for (int j=0; j<=i;j++){
            cout << num<<" ";
            num+=1;
        }
        cout <<endl;
    }
}

/*
A             for this kind of pattern we use the condition 'A' + i and an char defining the first A as the ch
A B 
A B C 
A B C D 
A B C D E
*/
void pat8(int n){
    for (int i=0; i<n;i++){
        for (char ch='A'; ch<='A'+i;ch++ ){
            cout << ch<< " ";
        }
        cout << endl ;
    }
}

/*
A B C D E 
A B C D
A B C           for this type of pattern we make use of the below code 
A B
A
*/
void pat9(int n){
    for(int i=0; i<n;i++){
        for (char ch='A';ch<='A'+(n-i-1);ch++)
        {
            cout<< ch <<" ";
        }
        cout <<endl;
    }
}


/*
A                               for this kind of pattern we could use this kind of program
BB
CCC
DDDD
EEEEE
*/
void pat10(int n){
    char ch='A';
    for(int i=0 ; i< n; i++){
        for ( int j=0;j< i;j++){
            cout << ch;
        }
        ch +=1;
        cout <<endl;
    }

}

/*        this is bit confusing so see it thoroughly 
    A    
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/

void pat11(int n){
    for (int i=0; i< n; i++)
    {
        
        for (int j=0;j<n-i-1; j++)
        {
            cout<<" ";
        }

        char ch = 'A';
        int breakpoint =(2*i+1)/ 2;

        for(int j=0; j<2*i+1;j++){
            cout<<ch;
            if (j < breakpoint) ch++;
            else ch--;
        }

         for (int j=0;j<n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

/*
E 
D E                       this is bit different so please look through this first and 
C D E
B C D E
A B C D E
*/

void pat12(int n){
    
    for (int i=0;i<n;i++){
        for (char ch='E'-i; ch<='E';ch++){
           
            cout << ch <<" ";
           
        }
        cout<<endl;
    }
}


/*
**********
****  ****
***    ***        this is somewhat different so please look through it 
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
void pat13(int n){
   int space = 0 ;
   for (int i =0; i< n;i++){
    for (int j=0;j<=n-i-1;j++){
        cout<< "*";
    }
    for (int j=0; j<space;j++){
        cout<<" ";
    }
    for (int j=0;j<=n-i-1;j++){
        cout<<"*";
    }
    space+=2;
    cout<<endl;
   }
   
   space = (n-1)*2 ;
   for (int i =0; i< n;i++){
    for (int j=0;j<=i;j++){
        cout<< "*";
    }
    for (int j=0; j<space;j++){
        cout<<" ";
    }
    for (int j=0;j<=i;j++){
        cout<<"*";
    }
    space-=2;
    cout<<endl;
   }   
}

/*
*        *
**      **     for this pattern we use this code below
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
*/
void pat14(int n){
    int space = (n-1)*2;
    for (int i=0;i<n; i++){
        for (int j=0;j<=i; j++){
            cout<<"*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for (int j=0;j<=i; j++){
            cout<<"*";
        }
        space-=2;
        cout<<endl;
    }
    space=2;
  for (int i=0;i<n; i++){
        for (int j=0;j<n-i-1; j++){
            cout<<"*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for (int j=0;j<n-i-1; j++){
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
}

/*
*****
*   *       for this kind of pattern we make use of this kind of program approach 
*   *
*   *
*****
*/
void pat15(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            if (i==0 || j==0|| i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<< " ";
            }
        }
        cout << endl;
    }
}

/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4    this is bit complecated so please look on to the video or ask claude 
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

void pat16(){

    int n=7;
    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++){
            int val= n/2 - min({i , j , n-1-i , n-1-j}) +1 ;
            cout<<val<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n = 5;
    pat16();
    return 0;
}
