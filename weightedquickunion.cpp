#include "weightedquickunion.h"
#include <iostream>
#include <cassert>

WeightedQuickUnion::WeightedQuickUnion(int size)
{
  _parent = std::vector<int>(size, 0);
  _size = std::vector<int>(size, 0);
  for (int i = 0; i < size; i++)
  {
    _parent[i] = i;
    _size[i] = 1;
  }
  _count = size;
}

WeightedQuickUnion::~WeightedQuickUnion()
{
  _parent.clear();
  _size.clear();
}

void WeightedQuickUnion::union1(int p, int q)
{
  assert(p < _parent.size() && q < _parent.size());

  int rp = find(p);
  int rq = find(q);

  if (connected(p, q))
  {
    // do nothing
    return;
  }

  if (_size[rp] < _size[rq])
  {
    _parent[rp] = rq;
    _size[rq] += _size[rp];
  }
  else
  {
    _parent[rq] = rp;
    _size[rp] += _size[rq];
  }

  _count--;
}

int WeightedQuickUnion::find(int p)
{
  assert(p < _parent.size());
  while(p != _parent[p])
  {
    p = _parent[p];
  }
  return p;
}

bool WeightedQuickUnion::connected(int p, int q)
{
  assert(p < _parent.size() && q < _parent.size());

  return find(p) == find(q);
}

int WeightedQuickUnion::count()
{
  return _count;
}

void WeightedQuickUnion::printData()
{
  for (int i = 0; i < _parent.size(); i++)
  {
    std::cout << _parent[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "count : " << _count;
  std::cout << std::endl;
}
