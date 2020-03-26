#include <iostream>

struct lnode
{ 
    int key;
    lnode *next;
    //Koniec listy poznajemy po tym, ze next ma wartosc nullptr lub 0
};

//Poczatkiem jest pojedynczy wskaznik root (korzen)
//jest to lnode *root


int nty (int n, lnode *root) {
    if (root == nullptr) return 0;
 
    for (int i = 1; root != nullptr; root = root->next) {
        if (i == n) {
            return root->key;
        }
        i++;
    }
    return 0; // nie ma takiego elementu
}

int suma(lnode *L) {
    if (L->next == nullptr) {
        return L->key;
    } 
    int suma = 0;
    while(L->next != nullptr) {
       suma += L->key;
       L = L->next;
    }
    suma += L->key;
    return suma;
}

//Podpunkt C, zeby zwrocic liste trzeba zwrocic wskaznik na root
//P to wskaznik, sprawdzic czy nie jest nullptr

int main()
{
    lnode* l4 = new lnode{40, nullptr};
    lnode* l3 = new lnode{30, l4};
    lnode* l2 = new lnode{20, l3};
    lnode* root = new lnode{10, l2};
 
    std::cout << nty(2, root) << std::endl;  
    std::cout << suma(root) << std::endl;
    return 0;
}