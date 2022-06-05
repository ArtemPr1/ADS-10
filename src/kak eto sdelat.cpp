// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  std::string optsTree = tree[n - 1];
  std::vector<char> numbs;
  for (int x = 0; x < optsTree.length(); x++) {
    numbs.push_back(optsTree[x]);
  }
  return numbs;
}
