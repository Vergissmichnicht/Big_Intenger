#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

class BI {
public:
    string a, b;
    vector<int>  A,B;
    vector<int>  add(vector<int>& A, vector<int>& B);
    vector<int> sub(vector<int>& A, vector<int>& B);
    vector<int> mul(vector<int>& a, int b); 
    vector<int> div(vector<int>& A, int b, int& r);
    bool cmp(vector<int>& A, vector<int>& B);
    BI(){}
    ~BI(){}
};

vector<int>  add(vector<int>& A, vector<int>& B)
{
    vector<int> C;

    int t = 0;
    for (int i = 0; i < A.size() || i < B.size(); i++)
    {
        if (i < A.size()) t += A[i];
        if (i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }

    if (t) C.push_back(1);
    return C;

}

vector<int> sub(vector<int>& A, vector<int>& B)
{
    vector<int> C;

    for (int i = 0, t = 0; i < A.size(); i++)
    {
        t = A[i] - t;
        if (i < B.size()) t -= B[i];
        C.push_back((t + 10) % 10);
        if (t < 0) t = 1;
        else t = 0;
    }

    while (C.size() > 1 && C.back() == 0) C.pop_back();


    return C;
}

bool cmp(vector<int>& A, vector<int>& B)
{
    if (A.size() != B.size()) return A.size() > B.size();

    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] != B[i]) return A[i] > B[i];
    }
    return true;
}
vector<int> mul(vector<int>& a, int b)
{
    int t = 0;
    vector<int> c;

    for (int i = 0; i < a.size() || t; i++)
    {
        if (i < a.size())
            t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}

vector<int> div(vector<int>& A, int b, int& r)
{
    vector<int> c;
    for (int i = A.size() - 1; i >= 0; i--)
    {
        r = r * 10 + A[i];
        c.push_back(r / b);
        r %= b;
    }
    reverse(c.begin(), c.end());
    while (c.size() > 1 && c.back() == 0)
        c.pop_back();

    return c;
}