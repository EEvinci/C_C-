#include<cstring>
#include<iostream>
using namespace std;

#define MAXSTRLEN 255 

void get_nextval(char T[], int next[]);
int Index_KMP(char S[], char T[], int pos, int next[]);

int main()
{
char S[MAXSTRLEN+1],T[MAXSTRLEN+1];
char S1[MAXSTRLEN],S2[MAXSTRLEN];
cin >> S1 >> S2;
strcpy(&S[1],S1);
strcpy(&T[1],S2);    
S[0]=strlen(S1);
T[0]=strlen(S2);
int *next = new int[T[0]+1];
get_nextval(T,next);
cout<<Index_KMP(S,T,1,next);

system("pause");
return 0; 
}

void get_nextval(char T[], int next[]) {
	int j=1,k=0;
	next[1]=0;
	while(j<T[0]) {
		if(k==0||T[j]==T[k]) {
			j++;
			k++;
			if(T[j]==T[k])
				next[j]=next[k];
			else 
				next[j]=k;
		}
		else 
			k=next[k];
	}
}
int Index_KMP(char S[], char T[], int pos, int next[])
{
	int i=pos,j=1;
	while(i<=S[0]&&j<=T[0])
	{
		if(j==0||S[i]==T[j])
		{
			i++;
			j++;
		}
		else 
			j=next[j];
	}
	if(j>T[0])
		return i-T[0];
	else 
		return 0;
}