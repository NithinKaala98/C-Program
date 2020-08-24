#include<stdio.h>
void main(){
	int  fact=1;
	int n,i;
	printf("Enter the Number\n");
	scanf("%d", &n);

	if(fact==0){
		printf("Invaild");
		}
	else{
		for(i=1;i<=n;i++){
		fact=fact*i;
		}

	printf("%d",fact);
	}
}
