// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"
using std::vector;
vector<char> getPerm(const Tree& tree, int n) {
  vector<char> res;
    for (int x = 0; x < tree[n - 1].length(); x++) {
        res.push_back(tree[n - 1][x]);
    }
    return res;
}
