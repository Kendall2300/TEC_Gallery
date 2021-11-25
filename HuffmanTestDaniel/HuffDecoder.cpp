//
// Created by dlurena24 on 23/11/21.
//

#include "HuffDecoder.h"
#include <iostream>

using namespace std;

void HuffDecoder::decode(Node* root, int &index, string str)
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
