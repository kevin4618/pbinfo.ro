#include <iostream>
using namespace std;

int main(){
int n , x;

cin >> n;

//Vom numara numerele care respecta regula. initializam contorul cu zero
int rez = 0;

//citim cele n numere
for(int i = 1 ; i <= n; i++){
cin >> x;

//verificam daca x este prim
int prim = 1;
if(x<2)
prim = 0;
if(x % 2 == 0 && x > 2)
prim = 0;
for(int d = 3; d * d <= x && prim == 1 ; d ++)
if(x % d == 0)
prim = 0;

//daca numarul este prim, ii calculam suma cifrelor
if(prim == 1){
int y = x;
int s = 0;
while(x)
s += x % 10 , x /= 10;
//verificam daca s  este prim
if(s<2)
prim = 0;
if(s % 2 == 0 && s > 2)
prim = 0;
for(int d = 3; d * d <= s && prim == 1 ; d ++)
if(s % d == 0)
prim = 0;
if(prim)
rez ++;

}
}

//afisam rezultatul
cout << rez;
return 0;
}
