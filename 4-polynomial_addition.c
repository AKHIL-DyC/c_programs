#include<stdio.h>

struct coeffs{
	int coeff;
};
void main()
	{
		int pa,pb,k;
		printf("enter the highest exponent of polynomial a \n");
		scanf("%d",&pa);
		printf("enter the highest exponent of polynomial a \n");
		scanf("%d",&pb);
		
		if(pa<pb)
		{
			
			k=pb+1;

					
		}
		else
		{
			
			
			 k=pa+1;

		}					
		
		struct coeffs a[k],b[k],c[k];


			for(int i=0;i<pa+1;i++){
				printf("enter the coeff of x^%d\t",i);
				scanf("%d",&a[i].coeff);
			}
			
			for(int i=0;i<pb+1;i++){
					printf("enter the coeff of x^%d\t",i);
					scanf("%d",&b[i].coeff);
				}
						
			printf("\n");
			
					for(int i=pa;i>=0;i--){
						printf("%dx^%d\t",a[i].coeff,i);
					}
					printf("\n");
					printf("+\n");
					
					
					for(int i=pb;i>=0;i--){
						printf("%d x^%d\t",b[i].coeff,i);
					}
					printf("\n");
					printf("=\n");
					printf("\n");
				if(pa<=pb)
				{
					for(int i=0;i<pb+1;i++){
						c[i].coeff=a[i].coeff+b[i].coeff;
					}
					
					for(int i=pb;i>=0;i--){
						printf("%d x^%d\t",c[i].coeff,i);
					}
							
				}
				else
				{
					for(int i=0;i<pa+1;i++){
						c[i].coeff=a[i].coeff+b[i].coeff;
					}
					
					for(int i=pa;i>=0;i--){
						printf("%dx^%d\t",c[i].coeff,i);
					}
				}
			
									
					
	}	
