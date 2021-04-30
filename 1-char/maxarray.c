#include <stdio.h>

typedef union {
    long i;
    int k[6];
    char c;
} DATE;
struct data {
    int cat;
    DATE cow;
    double dog;
} too;
DATE max;

int find_max(int (*a)[5], int m, int n,int *index1,int *index2)
{
	int max =0;
	int sum = 0;
	for(int i =0; i < m-1; i++)
	{
		for(int j=0; j<n-1;j++){
			sum = a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
			if(sum >max)
			{
				*index1=i;
				*index2=j;

				max=sum;
			}
		}
	}
	return max;
}

int main(){
	int a[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {1, 2, 3, 4, 5}};
	int sum =0;
	int index1=0,index2=0;

	printf("%d\n",find_max(a,3,5,&index1,&index2));
	printf("%d\n",index1);
	printf("%d\n",index2);
}
