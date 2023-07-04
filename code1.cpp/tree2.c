#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 500;
void create(int a);
void print(int i);
int tree_binary[500];
int main()
{
    int h, i, j;
    printf("enter your tree height \n");
    scanf("%d", &h);
    j = pow(2, h);
    i = j - 1;
    printf("number of leaf node is  -> %d\n", j);
    printf("number of internal nodes is  -> %d\n", i);
    create(i);
    print(i);
    return 0;
}
void create(int a)
{
    int x, y;
    printf("enter root of your tree \n");
    scanf("%d", &x);
    tree_binary[0] = x;
    for (y = 0; y < a; ++y)
    {
        printf("enter element for left child %d\n", tree_binary[y]);
        scanf("%d", &x);
        tree_binary[2 * y + 1] = x;
        printf("enter element for right child %d\n", tree_binary[y]);
        scanf("%d", &x);
        tree_binary[2 * y + 2] = x;
    }
}
void print(int z)
{
    for (int y = 0; y < z; y++)
    {
        if (z == 0)
        {
            printf("the root of  element is %d\n", tree_binary[y]);
        }
        printf("left child hai  %d -> %d \n", tree_binary[y], tree_binary[2 * y + 1]);
        printf("right child hai %d -> %d \n", tree_binary[y], tree_binary[2 * y + 2]);
    }
}