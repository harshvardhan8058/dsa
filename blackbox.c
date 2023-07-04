#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;
struct node *create_node(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
void insert(int data)
{
    struct node *newNode = create_node(data);
    if (root == NULL)
    {
        root = newNode;
        return;
    }
    struct node *temp = root;
    while (1)
    {
        if (data < temp->data)
        {
            if (temp->left == NULL)
            {
                temp->left = newNode;
                return;
            }
            temp = temp->left;
        }
        else
        {
            if (temp->right == NULL)
            {
                temp->right = newNode;
                return;
            }
            temp = temp->right;
        }
    }
}
void inorder(struct node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
int count_leaf_nodes(struct node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    return count_leaf_nodes(root->left) + count_leaf_nodes(root->right);
}
void delete_leaf_nodes(struct node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        return;
    }
    delete_leaf_nodes(root->left);
    delete_leaf_nodes(root->right);
}
int sum_leaf_nodes(struct node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return root->data;
    return sum_leaf_nodes(root->left) + sum_leaf_nodes(root->right);
}
int main()
{
    int n, data;
    printf("how much nodes you want ");
    scanf("%d", &n);
    printf("enbter elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data);
        insert(data);
    }
    printf("inorder traversal is ");
    inorder(root);
    int count = count_leaf_nodes(root);
    printf("number of leaf nodes hai  %d\n", count);
    if (count % 2 == 0)
    {
        delete_leaf_nodes(root);
        printf("inorder after deleting is ");
        inorder(root);
    }
    else
    {
        int sum = sum_leaf_nodes(root);
        printf("sum of leaf nodes is %d\n", sum);
    }
    return 0;
}