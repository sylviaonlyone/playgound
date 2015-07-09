#pragma once
#include "unionfind.h"
#include <vector>

class QuickFind : public UnionFind
{
  public:
    QuickFind(int size);
    virtual ~QuickFind();

    virtual void union1(int p, int q);
    virtual int find(int p);
    virtual bool connected(int p, int q);
    virtual int count();

    void printData();

  private:
    std::vector<int> _data;
};
