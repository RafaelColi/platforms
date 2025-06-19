#include <bits/stdc++.h>

using namespace std;

int possible_pairs = 0;

typedef struct no {
    int value;
    no* left;
    no* right;
    //int left_child_size;
} no;

no* create_node(int value) {
    no* novo = (no*) calloc(1, sizeof(no));

    if(novo == NULL) {
        return NULL;
    }

    novo->left = NULL;
    novo->right = NULL;
    //novo->left_child_size = 0;
    novo->value = value;

    return novo;
}

void add_node(no* root, no* e) {
    while(true) {
        if(e->value < root->value) {
            possible_pairs++;

            if(root->left == NULL) {
                root->left = e;
                return;
            } else {
                root = root->left;
            }
        } else {
            if(root->right == NULL) {
                root->right = e;
                return;
            } else {
                root = root->right;
            }
        }
    }

    /*if(e->value < root->value) {
            if(root->left == NULL) {
                root->left = e;
                //root->left_child_size++;
            } else {
                add_node(root->left, e);
            }
            possible_pairs++;
        } else {
            if(root->right == NULL) {
                root->right = e;
            } else {
                add_node(root->right, e);
            }
        }*/
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    no* raiz;
    int r; cin >> r;

    raiz = create_node(r);

    for(int i = 0; i < n - 1; i++) {
        cin >> r;
        add_node(raiz, create_node(r));
    }

    cout << possible_pairs << '\n';

    return 0;
}