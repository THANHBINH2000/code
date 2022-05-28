//
// Created by ubuntu on 28/05/2022.
//

#ifndef CODE0_PHANSO_H
#define CODE0_PHANSO_H
#include <iostream>
using namespace std;

class PhanSo {
public:
    PhanSo(int tu, int mau);
    ~PhanSo();
    void print_value();

private:
    int m_tu;
    int m_mau;
};


#endif //CODE0_PHANSO_H
