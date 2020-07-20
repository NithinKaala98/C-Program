#include<stdio.h>

void main(){
	int n,j,i,temp;
	int values[10];
	printf("Enter the No. of Values\n");
	scanf("%d",&n);
	printf("Enter the n of Values\n");
	for(i=0;i<n;i++){
	scanf("%d",&values[i]);
	}

	printf("Sorted Elements is \n");
	for(i=0;i<n-1;i++){
	for(j=0;j<n-i-1;j++){
		if(values[j]>values[j+1]){
			swap(&values[j], &values[j+1]);
		}
	}
	}
	for(i=0;i<n;i++){
		printf("%d",values[i]);
		printf("\n");
	}
}
void swap(int *xp, int *yp)
{
	int temp= *xp;
	*xp= *yp;
	*yp=temp;
}
# C-Program
