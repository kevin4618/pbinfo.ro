#include <iostream>
using namespace std;

int main(){
int n, ucp=-1;
cin >> n;
do
{
if(n%2==0)
ucp = n%10, n=0;
n /=10;
}
while(n);
cout << ucp;
return 0;
}
