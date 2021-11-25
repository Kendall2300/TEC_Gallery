/**
 * @file HuffEncoder.h
 * @author Daniel Urena
 * @brief Este codigo contiene la definicion de las clases con sus atributos y metodos para manejar el codigo de Huffman
 *
 * @version 1.0
 *
 */
#pragma once

#include <string>
#include <queue>
#include <unordered_map>

class HuffEncoder {
    public:
//    std::string g = "1";
    struct Node {
        char ch;
        int freq;
        Node *left, *right;
    };
    Node* getNode(char ch, int freq, Node* left, Node* right){
    Node* node = new Node();

    node->ch = ch;
    node->freq = freq;
    node->left = left;
    node->right = right;

    return node;
    }
    Node* root;
    Node* getRoot(){
        return root;
    };



    struct comp{
        bool operator()(Node* l, Node* r)
        {
            // highest priority item has lowest frequency
            return l->freq > r->freq;
        }
    };

    void encode (Node* root, std::string str, std::unordered_map<char, std::string> &huffmanCode);
    void decode(Node* root, int &index, std::string str);
    std::string getG();
    std::string buildHuffmanTree(std::string text);

};


