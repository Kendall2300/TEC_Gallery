//
// Created by dlurena24 on 24/11/21.
//

#include "Huffman.h"
#include "HuffEncoder.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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

struct comp
{
    bool operator()(Node* l, Node* r)
    {
        // highest priority item has lowest frequency
        return l->freq > r->freq;
    }
};

priority_queue<Node*, vector<Node*>, comp> in;
map<int, priority_queue<Node*, vector<Node*>, comp>> dic;

void imgDics(){

}

//string toMakeTree(string imgStr){
//    HuffEncoder huff;
//
//    string binEncoded = huff.buildHuffmanTree(imgStr);
//}

string Huffman::buildHuffmanTree(string text)
{
    // count frequency of appearance of each character
    // and store it in a map
    unordered_map<char, int> freq;
    for (char ch: text) {
        freq[ch]++;
    }

    // Create a priority queue to store live nodes of
    // Huffman tree;
    priority_queue<Node*, vector<Node*>, comp> pq;

    // Create a leaf node for each character and add it
    // to the priority queue.
    for (auto pair: freq) {
        pq.push(getNode(pair.first, pair.second, nullptr, nullptr));
    }

    // do till there is more than one node in the queue
    while (pq.size() != 1)
    {
        // Remove the two nodes of highest priority
        // (lowest frequency) from the queue
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();

        // Create a new internal node with these two nodes
        // as children and with frequency equal to the sum
        // of the two nodes' frequencies. Add the new node
        // to the priority queue.
        int sum = left->freq + right->freq;
        pq.push(getNode('\0', sum, left, right));
    }



    // root stores pointer to root of Huffman Tree
    map<int, priority_queue<Node*, vector<Node*>, comp>> m;
    m.insert(make_pair(1, pq));
    priority_queue<Node*, vector<Node*>, comp> ffs = m[1];


//    Node* root = ffs.top();
//
//    // traverse the Huffman Tree and store Huffman Codes
//    // in a map. Also prints them
//    unordered_map<char, string> huffmanCode;
//    encode(root, "", huffmanCode);
//
//
////    cout << "Huffman Codes are :\n" << '\n';
////    for (auto pair: huffmanCode) {
////        cout << pair.first << " " << pair.second << '\n';
////    }
//
////    cout << "\nOriginal string was :\n" << text << '\n';
//
//    // print encoded string
//    string binCode;
//    for (char ch: text) {
//        binCode += huffmanCode[ch];
//    }
//
//    cout << "\nEncoded string is :\n" << binCode << '\n';
//
//
//
//    // traverse the Huffman Tree again and this time
//    // decode the encoded string
//    int index = -1;
//    cout << "\nDecoded string is: \n";
//    while (index < (int)binCode.size() - 2) {
//        decode(root, index, binCode);
//    }
////    return binCode;
}
