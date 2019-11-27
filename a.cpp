#include <fstream>

using namespace std;
ifstream f("cautanrinmatrice.in");
ofstream g("cautanrinmatrice.out");
int i , j  , x , a[1000008] , m , n , p , li , co , d , poz , mij ;

int caut( int st , int dr )
{
    if ( st > dr ) return 0 ;
    else {
           mij = ( st + dr ) / 2 ;
           if ( a [ mij ] == x ) return mij ;
           else if ( a [ mij ] < x ) return caut ( mij + 1 , dr ) ;
                                else return caut ( st , mij - 1 ) ;

         }
}

int main()
{
    f >> n >> m ;
    d = n * m ;
    for ( i = 1 ; i <= n ; i++ )
       if ( i % 2 == 1 ) for ( j = 1 ; j <= m ; j++ ) f >> a [ ( i - 1 ) * m + j ] ;
                    else for ( j = 1 ; j <= m ; j++ ) f >> a [ i * m - j + 1 ] ;
    f >> p ;
    for ( i = 1 ; i <= p ; i++ )
    {
        f >> x;
        poz = caut(1,d) ;
        if ( poz==0 ) g << 0 << "\n" ;
              else
              {
                  if( poz%m==0 ){ li = poz / m ; co = m ; }
                           else { li = poz /m + 1 ; co = poz % m ; }
                  if( li%2==1 ) g << li << " " << co << "\n" ;
                           else g << li << " " << m - co + 1 << "\n" ;
              }
    }

    return 0 ;
}
