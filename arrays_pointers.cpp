#include <iostream>
using namespace std;
int main() {
   int a;
   cout<<"Enter total numbers to be entered"<<endl;
   cin>>a;
   int arr[a] = {};
   for (int i = 0; i < a; i++)
   {
       cout<<"Enter "<<i+1<<" number"<<endl;
       cin>>arr[i];
   }
   int *ptr = &arr[0];
   cout<<"The values in the array are: "<<endl;
   for(int i = 0; i < a; i++) {
      cout<< *ptr << endl;
      ptr++;
   }
   return 0;
}