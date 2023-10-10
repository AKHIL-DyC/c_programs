#include <stdio.h>
#include<math.h>
struct poly{
	int coeff;
	int power;
};
void main()
	{	int n,x,k,t;
		int sum=0;
		printf("enter the number of element:\n");
		scanf("%d",&n);
		struct poly a[n];
			for(int i=0;i<n;i++){
				printf("enter coeff followed by power of x");
				scanf("%d %d",&a[i].coeff,&a[i].power);
			}
				for(int i=0;i<n;i++){
					printf("%d x^%d\t",a[i].coeff,a[i].power);
				}
				
					
					printf("enter the value of x:\n");
					scanf("%d",&x);
					
					for(int i=0;i<n;i++){
						k=a[i].coeff*pow(x,a[i].power);
						sum=sum+k;
					};
					
					
					printf("sum is %d",sum);
	}
