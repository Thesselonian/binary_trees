#ifndef BTREE_H
#define BTREE_H

template<class Type>
struct Node{
    Type item;
    Node<Type* left;
    Node<Type>* right;
};

template <class Type>
class BTree{
    public:
        BTree();
        BTree(const BTree<Type>&);
        BTree<Type> operator=(const BTree<Type>&);
        ~BTree();
        void insert(Type data);
        void preOrder();
        void inOrder();
        void postOrder():
        int nodeCount();

    protected:
        Node<Type>* root;

    private:
        void copyTree(<Node<Type>*curr);
        void destroy(Node<Type>* curr);
        void insert(Type item, Node<Type>* curr);
        void preOrder(Node<Type>* curr);
        void inOrder(Node<Type>* curr);
        void postOrder(Node<Type>* curr);
        int nodeCount(Node<Type>* curr);
};

template <class Type>
BTree<Type>::BTree(const BTree<Type>& b){
    copyTree(b.root;)
}

template <class Type>
BTree<Type> BTree<Type>::operator=(const BTree<Type>&b){
    copyTree(b.root);
    return *this;
}

template <class Type>
void BTree<Type>::copyTree(Node<Type>* curr){
    if(curr){
        insert(curr->item);
        copyTree(curr->left);
        copyTree(curr->right);
    }
}

template <class Type>
BTree<Type>::Btree(){
    root = nullptr;
}

template <class Type>
BTree<Type>::~Btree(){
    
}

template <class Type>
void BTree<Type>::destroy(Node<Type>* curr){
    if(curr != nullptr){
        destroy(curr->left);
        destroy(curr->right);
        delete curr;
    }
}

#endif