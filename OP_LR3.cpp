﻿#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int c1, c2, c3, t1, t2, t3;
    double s1, s2, s3, all;
    cout << "Введіть вартість першої розмови\n";
    cin >> c1;
    cout << "Введіть вартість другої розмови\n";
    cin >> c2;
    cout << "Введіть вартість третьої розмови\n";
    cin >> c3;
    cout << "Введіть тривалість першої розмови\n";
    cin >> t1;
    cout << "Введіть тривалість другої розмови\n";
    cin >> t2;
    cout << "Введіть тривалість третьої розмови\n";
    cin >> t3;
    s1 = (c1 * t1);
    s2 = (c2 * t2);
    s3 = (c3 * t3);
    all = s1 + s2 + s3;
    cout << "Ціна за першу розмову: " << s1 << " коп." << endl;
    cout << "Ціна за другу розмову: " << s2 << " коп." << endl;
    cout << "Ціна за третю розмову: " << s3 << " коп." << endl;
    cout << "Ціна за всі розмови: " << all << " коп." << endl;
} //testing comment