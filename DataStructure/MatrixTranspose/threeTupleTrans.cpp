#include <stdio.h>
#include <stdlib.h>
#define M 100

struct tripletable *trans(struct tripletable *t1);

// describe the node attributes of the original matrix and transpose matrix
struct node
{
    int i, j, v;
};


// the tripletable to store the non-zero elements
struct tripletable
{
    struct node S[M];
    int m, n, t; // m,n is the row,column of the matrix, t is the number of non-zero element
};


/*
craete a new matrix represented by tripletable 
*/
struct tripletable *create()
{
    int i;

    // need to open up space tp create a struct variable
    struct tripletable *head = (struct tripletable *)malloc(sizeof(struct tripletable));   

    scanf("%d%d%d", &(head->m), &(head->n), &(head->t));

    for (i = 0; i < head->t; i++)
        scanf("%d%d%d", &(head->S[i].i), &(head->S[i].j), &(head->S[i].v));
    return head;
}


void print(struct tripletable *head)
{
    int i;
    for (i = 0; i < head->t; i++)
        printf("%d %d %d\n", (head->S[i].i), (head->S[i].j), (head->S[i].v));
    system("pasue");
}


int main()
{
    struct tripletable *head, *t2;  // variable:head is the name of the original matrix represented by tripletable

    head = create();

    t2 = trans(head);
    
    print(t2);

    system("pasue");
    return 0;
}


/*
 matrix transpose
 the first thing is initial the transpose matrix, open up space for it
 the second thing is to fill in the elements
*/
struct tripletable *trans(struct tripletable *t1) // t1 is original matrix
{
    struct tripletable *t2 = (struct tripletable *)malloc(sizeof(struct tripletable)); // define t2 is tanspose matrix for t1

    // initial the tranpose matrix
    t2->m = t1->n;
    t2->n = t1->m;
    t2->t = t1->t;

    int c = 0; // the row number of the tranpose matrix
    int p = 0; // the element count of the triple for original matrix
    int q = 0; // the element count of the triple for tranpose matrix

    for (c = 0; c < t1->n; c++)
    { // traverse the column
        for (p = 0; p < t1->t; p++)
        { // traverse the triple
            if (t1->S[p].j == c)
            {
                t2->S[q].i = t1->S[p].j;
                t2->S[q].j = t1->S[p].i;
                t2->S[q].v = t1->S[p].v;
                q++;
            }
        }
    }

    return t2;
}