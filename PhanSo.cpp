//
// Created by ubuntu on 28/05/2022.
//

#include "PhanSo.h"

PhanSo::PhanSo(int tu, int mau) {
        this->m_tu = tu;
        this->m_mau =mau;
}

PhanSo::~PhanSo() {

}

void PhanSo::print_value() {
    cout<<"Phan so:"<<endl;
    cout<<m_tu<<"/"<<m_mau;
}