struct node
{
    int data;
    struct node* left;
    struct node* right;
    
};

struct node* createnode(value){
    struct node* newnode = malloc(sizeof(struct node));
    newnode ->data=value;
    newnode ->left =NULL;
    newnode ->right =NULL;

    return newnode;
}

struct node8 insert (struct node* root, int data) 
{
    if(root == NULL){
            return createnode(data);
    }
 if (data< root -> data)
 {
    root -> left = insert(root-> left, data);        
 }
 else if (data > root ->data)
 {
   root -> right = insert(root->right,data);
 }
 return root;
 
}

void inorder(struct node* root){
    if(root ==NULL){
        return;
    }

    inorder(root->left);
    printf("%d ->", root->data);
    inorder(root->right);

}

