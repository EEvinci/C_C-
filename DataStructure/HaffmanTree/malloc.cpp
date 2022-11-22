#include<stdio.h>
#include<malloc.h>
#define MAX 1000

typedef struct{
    int weight;
    int lchild;
    int rchild;
    int parent;
}HTNode,*HuffmanTree;

int main(){
    HuffmanTree ht;
    HuffmanTree hc;
    
    int n;
    scanf("%d",&n);

    int *w = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i){
        
    }
}