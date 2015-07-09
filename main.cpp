#include "quickfind.h"
#include "weightedquickunion.h"
#include <iostream>

int main(int argc, char *argv[])
{
#if 0
  std::cout << "=====quick find=====" << std::endl;

  QuickFind a = QuickFind(10);
  a.union1(2, 9);
  a.union1(7, 2);
  a.union1(0, 5);
  a.union1(0, 3);
  a.union1(4, 2);
  a.union1(8, 3);
  a.printData();

  std::cout << "=====weighted quick find=====" << std::endl;

  WeightedQuickUnion b = WeightedQuickUnion(10);
  b.union1(2, 4);
  b.union1(3, 7);
  b.union1(7, 2);
  b.union1(0, 6);
  b.union1(6, 8);
  b.union1(8, 9);
  b.union1(5, 8);
  b.union1(4, 8);
  b.union1(0, 1);
  b.printData();
#endif

  WeightedQuickUnion c = WeightedQuickUnion(10);
  c.union1(2, 1);
  c.union1(4, 5);
  c.union1(4, 9);
  c.printData();

  WeightedQuickUnion d = WeightedQuickUnion(10);
  d.union1(2, 7);
  d.union1(1, 6);
  d.union1(2, 6);
  d.union1(3, 5);
  d.union1(4, 0);
  d.union1(4, 8);
  d.union1(4, 9);
  d.union1(4, 3);
  d.union1(4, 2);
  d.printData();

}
