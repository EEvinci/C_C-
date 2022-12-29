#include<stdio.h>
#include<string.h>
#include<iostream>

int main()
{
	int i,j,l,k,m,num[30];
	char key[30],plantext[100],plantext2[100],cipher[100];

	printf("please input the key\n");
	scanf("%s",key);

	l=strlen(key);

	for(i=0;i<l;i++)
	{
		num[i]=0;
		for(j=0;j<l;j++)
		{
			
			if(key[j]<=key[i])
			{
 
				num[i]=num[i]+1;
			}
			if(key[j]==key[i]&&j>i)
				num[i]=num[i]-1;
		
		}
	}

	printf("please input the plantext\n");
	scanf("%s",plantext);
	
	k=strlen(plantext);
	
	i=0;											//末尾补x
	for(m=k%l;m<l;m++)
	{
	
		plantext[k+i]='x';	
		i++;
	}
 
	if(k%l==0)										//计算有多少行
		m=k/l;
	else 
		m=k/l+1;
	
 
	printf("解密:\n");								//解密密文
	for(i=0;i<m;i++)
	{
		for(j=0;j<l;j++)
		{
 
			plantext2[i*l+num[j]-1]=cipher[i*l+j];
		}
	}
	plantext2[(i-1)*l+j]='\0';
	printf("%s\n",plantext2);

    system("pause");
	return 0;
}