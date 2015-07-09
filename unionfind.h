#pragma once
class UnionFind
{
  public:
    virtual ~UnionFind() {};

    virtual void union1(int p, int q) = 0;
    virtual int find(int p) = 0;
    virtual bool connected(int p, int q) = 0;
    virtual int count() = 0;
};
