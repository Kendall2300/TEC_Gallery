//
// Created by dlurena24 on 21/11/21.
//

#pragma once

#include <string>
#include <queue>
#include <unordered_map>

class HuffEncoder {
    public:
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
    std::string decode(Node* root, int &index, std::string str);
    std::string buildHuffmanTree(std::string text);


};


