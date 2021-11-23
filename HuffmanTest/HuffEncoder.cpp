//
// Created by dlurena24 on 21/11/21.
//

#include "HuffEncoder.h"
#include <iostream>
using namespace std;


void HuffEncoder::encode(Node* root, string str, unordered_map<char, string> &huffmanCode)
{
    if (root == nullptr)
        return;

    // found a leaf node
    if (!root->left && !root->right) {
        huffmanCode[root->ch] = str;
    }

    encode(root->left, str + "0", huffmanCode);
    encode(root->right, str + "1", huffmanCode);
}

void HuffEncoder::decode(Node* root, int &index, string str)
{
    if (root == nullptr) {
        return;
    }

    // found a leaf node
    if (!root->left && !root->right)
    {
        cout << root->ch;
        return;
    }

    index++;

    if (str[index] =='0')
        decode(root->left, index, str);
    else
        decode(root->right, index, str);
}

void HuffEncoder::buildHuffmanTree(string text)
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
        Node *left = pq.top(); pq.pop();
        Node *right = pq.top();	pq.pop();

        // Create a new internal node with these two nodes
        // as children and with frequency equal to the sum
        // of the two nodes' frequencies. Add the new node
        // to the priority queue.
        int sum = left->freq + right->freq;
        pq.push(getNode('\0', sum, left, right));
    }

    // root stores pointer to root of Huffman Tree
    Node* root = pq.top();

    // traverse the Huffman Tree and store Huffman Codes
    // in a map. Also prints them
    unordered_map<char, string> huffmanCode;
    encode(root, "", huffmanCode);

    cout << "Huffman Codes are :\n" << '\n';
    for (auto pair: huffmanCode) {
        cout << pair.first << " " << pair.second << '\n';
    }

    cout << "\nOriginal string was :\n" << text << '\n';

    // print encoded string
    string str = "";
    for (char ch: text) {
        str += huffmanCode[ch];
    }

    cout << "\nEncoded string is :\n" << str << '\n';

    // traverse the Huffman Tree again and this time
    // decode the encoded string
    int index = -1;
    cout << "\nDecoded string is: \n";
    while (index < (int)str.size() - 2) {
        decode(root, index, str);
    }
}



