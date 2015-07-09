#include "quickfind.h"
#include <iostream>
#include <set>
#include <cassert>

QuickFind::QuickFind(int size)
{
  _data = std::vector<int>(size, 0);
  for (int i = 0; i < size; i++)
  {
    _data[i] = i;
  }
}

QuickFind::~QuickFind()
{
  _data.clear();
}

void QuickFind::union1(int p, int q)
{
  assert(p < _data.size() && q < _data.size());
  int cp = _data[p];
  int cq = _data[q];

  if (connected(p, q))
  {
    return;
  }

  for (int i = 0; i < _data.size(); i++)
  {
    if (_data[i] == cp)
    {
      _data[i] = cq;
    }
  }
}

int QuickFind::find(int p)
{
  assert(p < _data.size());
  return _data[p];
}

bool QuickFind::connected(int p, int q)
{
  assert(p < _data.size() && q < _data.size());
  return _data[p] == _data[q];
}

int QuickFind::count()
{
  std::set<int> components;
  for (int i = 0; i < _data.size(); i++)
  {
    if (components.find(_data[i]) == components.end())
    {
      components.insert(_data[i]);
    }
  }
  return components.size();
}

void QuickFind::printData()
{
  for (int i = 0; i < _data.size(); i++)
  {
    std::cout << _data[i] << " ";
  }
  std::cout << std::endl;
}
