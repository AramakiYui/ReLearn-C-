#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Polynomial
{
public:
    int n;//多项式项数
    double x;//f(x)
    vector <double> a;//存放常数
    vector <double>::iterator p;
public:
    Polynomial();
    Polynomial(double xx);
    Polynomial(const Polynomial &obj);//复制构造函数
    ~Polynomial();
    void clearvector();//清空容器
    string judge(double a);//判断正负
    string display();//输出多项式
    string answer();//输出结果
    string double_string(double a);

    Polynomial& operator =(const Polynomial& obj1);
    Polynomial operator +(const Polynomial& obj1);
    Polynomial operator -(const Polynomial& obj1);
    Polynomial operator *(const Polynomial& obj1);
};

#endif // POLYNOMIAL_H
