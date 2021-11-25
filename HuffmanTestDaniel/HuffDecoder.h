//
// Created by dlurena24 on 23/11/21.
//

#pragma once

#include <string>
#include <queue>
#include <unordered_map>


class HuffDecoder {

    struct Node {
        char ch;
        int freq;
        Node *left, *right;
    };
    Node* getNode(char ch, int freq, Node* left, Node* right)
    {
        Node* node = new Node();

        node->ch = ch;
        node->freq = freq;
        node->left = left;
        node->right = right;

        return node;
    }

    void decode(Node* root, int &index, std::string str);
};


