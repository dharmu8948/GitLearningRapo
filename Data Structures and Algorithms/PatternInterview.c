//    1.
/*
       5
       *
       * *
       * * *
       * * * *
       * * * * *
       */
  /*     
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=i)
			printf("* ");
			else
			printf(" ");
		}
		printf("\n");
	}
}

*/

//    2.

//    5
//    * * * * *
//    * * * *
//    * * *
//    * *
//    *
/*
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=n+1-i)
			printf("* ");
			else
			printf(" ");
		}
		printf("\n");
	}
}

*/

//  3.

//           5
//           *
//          **
//         ***
//        ****
//       *****
/*
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>=n+1-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}

*/
//  4.
/*

5
*****
 ****
  ***
   **
    *
*/
/*
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j>=i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
*/

// 5.
/*
12
           *
          ***
         *****
        *******
       *********
      ***********
     *************
    ***************
   *****************
  *******************
 *********************
***********************
*/

/*
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n-1;j++){
			if((j>=n+1-i)&& (j<=n-1+i))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}

*/

/*

7
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *

*/
/*
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int k=1;
		for(j=1;j<=2*n-1;j++){
			if((j>=n+1-i)&& (j<=n-1+i)&&k){
				printf("*");
				k=0;
			}
			else{
				printf(" ");
				k=1;
			}
		}
		printf("\n");
	}
}
*/
/*

5
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
/*

#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=i)
				printf("* ");
			else
				printf(" ");
			}
		printf("\n");
		}
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(j<=n-i)
				printf("* ");
			else
				printf(" ");
			}
		printf("\n");
		}
}
*/


/*

5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
/*

#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=i)
				printf("%d ",j);
			else
				printf(" ");
			}
		printf("\n");
		}
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(j<=n-i)
				printf("%d ",j);
			else
				printf(" ");
			}
		printf("\n");
		}
}

*/

/*

5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

*/

/*
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=i)
				printf("%d ",j);
			else
				printf(" ");
			}
		printf("\n");
		}
	for(i=1;i<n;i++){
		int k=i+1;
		for(j=1;j<n;j++){
			if(j<=n-i)
				printf("%d ",k++);
			else
				printf(" ");
			}
		printf("\n");
		}
}

*/

/*
6
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26
27 28 29 30
31 32 33
34 35
36

*/

/*
#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int k=1;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(j<=i)
				printf("%d ",k++);
			else
				printf(" ");
			}
		printf("\n");
		}
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			if(j<=n-i)
				printf("%d ",k++);
			else
				printf(" ");
			}
		printf("\n");
		}
}

*/

#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int k=1;
		for(j=1;j<2*n;j++){
			if(j>=(n-i+1) && j<=(n+i-1)){
				printf("%d",k);
				k<(n-i+1)?k++:k--;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
