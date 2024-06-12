#pragma once
/**
* Reprezentacia uzlu binarneho stromu.
*/
class Node {
public:
    Node* left;///< Ukazatel na laveho potomka uzlu.
    Node* right;///< Ukazatel na praveho potomka uzlu.
    int key;///< Hodnota kteru ma uzol.
    /**
     * Konstruktor triedy Node.
     *
     * Inicializuje uzol s danou hodnotou a s nulovými ukazatelmi na laveho a praveho potomka.
     *
     * @param data Hodnota nastavenia uzlu.
     */
    Node(int data);
};

