#include <iostream>
#include <fstream>
using namespace std;
ifstream f("bomboane1.in");
ofstream g("bomboane1.out");
int main()
{
int d1, x, y, d=-1, b ,a, n;
int k = 0;
f >> x >> y;
if(x%2==1)
x++;
for(int i=x;i<=y;i+=2)
    {
k = 0;
int d2 = 0;
int m = i;
while(m%2 == 0)
{
    m /= 2;
    d2++;
}
for(d1=1; d1*d1<m; d1+=2)
if(m % d1 == 0)
k +=2;
if(d1 * d1 == m)
k ++;
k *= d2;

if(k>d)
        {
            d = k;
            a = b = i;
            n = 1;
        }
else
if(k == d)
            {
                b = i;
                n++;
            }

}
g << a << ' ' << b << ' ' << n << ' ' << d;


return 0;
}
