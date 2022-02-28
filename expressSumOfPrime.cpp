#include <iostream>
using namespace std;

int checkPrime(int n )
{
    int i , prime=1;
    if (n == 0 || n==1)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i < n/2; ++i)
        {
            if (n%i ==0)
            {
                prime = 0;
                break;
            }
            
        }
        
    }
    return prime;
    
}
int main()
{
int n , i , temp = 0;
cout<<"Enter a positive number"<<endl;
cin>>n;
for ( i = 2; i <= n/2; ++i)
{
    if (checkPrime(i) == 1)
    {
        if (checkPrime(n - i) == 1)
        {
            cout<< n <<" = "<< i <<" + "<<(n-i)<<endl;
            temp=1;
        }
        
    }
    
}

if (temp == 0)
{
cout<<"The number " << n  <<" can't be ecpressed as sum of two prime numbers"<<endl;
}

return 0;
}