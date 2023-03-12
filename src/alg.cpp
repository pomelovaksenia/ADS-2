// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1;
        while (n >= 1) {
            res *= value;
            n--;
        }
        return res;
}

uint64_t fact(uint64_t n) {
  if (n == 0) {
            return 1;
        }
        uint64_t int res = 1;
        while (n >= 1) {
            res *= n;
            n--;
        }
        return res;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / (fact(n)));
}

double expn(double x, uint16_t count) {
  double res = 1;
        while (count >= 1) {
            res += calcItem(x, count);
            count--;
        }
        return res;
}

double sinn(double x, uint16_t count) {
  double res = x;
        while (count > 1) {
            res += calcItem(x, (2 * count - 1)) * pown(-1, (count - 1));
          count--;
        }
        return res;
}

double cosn(double x, uint16_t count) {
  double res = 1;
        while (count > 1) {
            res += calcItem(x, (2 * count - 2)) * pown(-1, (count - 1));
          count--;
        }
        return res;
}
