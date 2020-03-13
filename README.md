# Big_Intenger calculator
进阶班作业

![image](https://github.com/Vergissmichnicht/Big_Intenger/blob/master/bug.jpg)
## 介绍：
**~~解决了大于1e9的整数的加减乘除运算问题~~**

**核心思想是用字符串读入数字，用vector容器进行运算**
**可以计算1e9以上的两个整数加减**
**可以计算一个1e9以上整数和一个int的乘法**
**可以计算一个1e9以上整数除以一个int的除法**



## **构建：**
## 0、读入
```
for (int i = obj.a.size() - 1; i >= 0; i--)
			{
				obj.A.push_back(obj.a[i] - '0');
			}
```
读入字符串转化为int容器


## 1、加法

```
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


```
与笔算竖式的运算法则相同

## 2、减法
同上
去除前导0的优化
```
  while (C.size() > 1 && C.back() == 0) C.pop_back();
```

## 3、乘法
**只能计算一个大整数和一个小整数**

利用了加法的思想有，以小整数为“进位单位”，进行相同的竖式运算
```
 for (int i = 0; i < a.size() || t; i++)
    {
        if (i < a.size())
            t += a[i] * b;
        c.push_back(t % 10);
        t /= 10;
    }
```

## 4、除法
**因为我们笔算除法是是从最高位到最低位，所以反向读入：**
```
for (int i = c.size() - 1; i >= 0; i--)
				cout << c[i];
```
**倒置后输出+去除前导0**
```
    reverse(c.begin(), c.end());
    while (c.size() > 1 && c.back() == 0)
        c.pop_back();
```

## 5、输出
函数返回vector<int>，直接打印
  
## ~~用到了类和容器的操作~~




## Developeers
我


