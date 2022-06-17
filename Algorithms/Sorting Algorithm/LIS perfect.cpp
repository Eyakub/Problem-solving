// Returns the length of the longest increasing subsequence.
// Note that this is looking for the longest strictly increasing subsequence.
//    This can be easily modified for other situations.
#include <limits.h>
#include<iostream>
#include<cstdio>
#include <stdlib.h>
using namespace std;
int lis( int* a, int N ) {
   int *best, i, j, max = INT_MIN;
   best = malloc ( sizeof *best * N );  /* note: does not check for malloc failure */

   for ( i = 0; i < N; i++ ) best[i] = 1;

   for ( i = 1; i < N; i++ )
      for ( j = 0; j < i; j++ )
         if ( a[i] > a[j] && best[i] < best[j] + 1 ){
		    best[i] = best[j] + 1;
			if(max < best[i])
				max = best[i];
		 }

   free( best );
   return max;
}
// Sample usage.
int main(void){
  int b[] = { 1, 3, 2, 4, 3, 5, 4, 6 };
  // the longest increasing subsequence = 13456?
  // the length would be 5, as well lcs(b,8) will return.
  printf("%d\n", lis( b, 8 ) );
  return 0;
}
