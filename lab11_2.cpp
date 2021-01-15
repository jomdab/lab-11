#include<iostream>
using namespace std;
int gcd(int,int);
int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}
int gcd(int x,int y){
    int a,b;
    if (x>y)
    {
        a=x;b=y;
    }
    else{
        b=x;a=y;
    }
    if (a%b==0)
    {
       return b;
    }
    else{
      return gcd(b, a%b);
        
    }
}
