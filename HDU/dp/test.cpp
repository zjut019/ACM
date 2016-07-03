#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "math.h"
#include "algorithm"
#include "iostream"

using namespace std;
#define maxn 10005 
long long  dp[ maxn ][ maxn ];
 
int main()
{
	int i , j , n ;
	for( i = 1 ; i <= 35 ; i++ )
		dp[ 0 ][ i ] = 1 ;
	for( i = 1 ; i <= 35 ; i++ )
	{
		for( j = 1 ; j <= 35 ; j++ )
		{
			if( j == i ) 
				dp[ i ][ j ] = dp[ i - 1 ][ j ] ;
			else
				dp[ i ][ j ] = dp[ i - 1 ][ j ] + dp[ i ][ j - 1 ] ;
		}
		
	}
	int Case = 0 ;
	for(i=1;i<=10;i++)  {
		for(j=1;j<=10;j++) {
			printf("%lld ",dp[i][j]);
		}
		putchar('\n');
	}
	
	while( ~scanf( "%d" , &n ) )
	{
		if( n == -1 )
			break;
		printf( "%d %d %I64d\n" , ++Case , n , dp[ n ][ n ] * 2 ) ;
	} 
	return 0;
}
