/**
 * @file HuffEncoder.cpp
 * @authors Daniel Ureña Lopez
 * @brief Esta clase se encarga de realizar la mayoria de operaciones relacionadas a la compresion Huffman
 *
 * @version 1.0
 *
 */

#include "HuffEncoder.h"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**
 * @brief Se encarga de crear el diccionario en base al Huffman tree creado de manera previa
 *
 * @param Node* root
 * @param string str
 * @param unordered_map<char, string> &huffmanCode
 *
 */
void HuffEncoder::encode(Node* root, string str, unordered_map<char, string> &huffmanCode){
    if (root == nullptr)
        return;

    if (!root->left && !root->right) {
        huffmanCode[root->ch] = str;
    }

    encode(root->left, str + "0", huffmanCode);
    encode(root->right, str + "1", huffmanCode);
}

string g;
/**
 * @brief Se encarga de decodificar el string que recibe(el cual es un codigo binario) y lo traduce a letras, cada
 * letra que recibe se almacena en una string global llamada g
 *
 * @param Node* root
 * @param int &index
 * @param string str
 *
 */
void  HuffEncoder::decode(Node* root, int &index, string str){

    if (root == nullptr) {
         return;
    }

    if (!root->left && !root->right)
    {
        char f = root->ch;
        g.push_back(f);
        return;
    }

    index++;

    if (str[index] =='0')
        decode(root->left, index, str);
    else
        decode(root->right, index, str);
}

/**
 * @brief Se encarga de devolver el string g, el cual contiene el codigo traducido por la clase decode
 *
 * @return string
 *
 */
string HuffEncoder::getG(){
    return g;
}

/**
 * @brief Se encarga de contar la frecuencia de cada caracter que recibe en el string que recibe, y crea un
 * Huffman tree en base a la frecuencia de los caracteres del string, además se encarga de llamar a la clase encode
 * para crear el diccionario, y en base a el crea el codigo binario comprimido, y lo devuelve en forma de string.
 *
 * @param string text
 *
 * @return string
 *
 */
string HuffEncoder::buildHuffmanTree(string text){

    unordered_map<char, int> freq;
    for (char ch: text) {
        freq[ch]++;
    }

    priority_queue<Node*, vector<Node*>, comp> pq;

    for (auto pair: freq) {
        pq.push(getNode(pair.first, pair.second, nullptr, nullptr));
    }

    while (pq.size() != 1){
        Node *left = pq.top();
        pq.pop();
        Node *right = pq.top();
        pq.pop();

        int sum = left->freq + right->freq;
        pq.push(getNode('\0', sum, left, right));
    }

    root = pq.top();

    unordered_map<char, string> huffmanCode;
    encode(root, "", huffmanCode);

    string binCode;
    for (char ch: text) {
        binCode += huffmanCode[ch];
    }

    return binCode;
}




