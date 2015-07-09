#pragma once
#include "unionfind.h"
#include <vector>

class WeightedQuickUnion : public UnionFind
{
  public:
    WeightedQuickUnion(int size);
    virtual ~WeightedQuickUnion();

    virtual void union1(int p, int q);
    virtual int find(int p);
    virtual bool connected(int p, int q);
    virtual int count();

    void printData();

  private:
    std::vector<int> _parent;
    std::vector<int> _size;
    int _count;
};
