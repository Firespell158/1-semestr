﻿#include <iostream>

int main()
{
    // 1
    int n, sum = 0, maxi = -10000, numb = 0, i = 1;
    std::cin >> n;
    while(n != 0) {
        
        if (n < 0 and n % 7 == 0) {
            sum = sum + n;
            if (maxi < n) {
                maxi = n;
                numb = i;
            }
        }
        i++;
        std::cin >> n;
    }
    std::cout << "sum = " << sum  << " " << "max = " << maxi << " " << "number is " << numb << std::endl;
    

    //2
    /*int n, tekn, pros = 1;
    std::cin >> n;
    while (n > 0) {
        tekn = n % 10;
        pros = pros * tekn;
        n = n / 10;
    }
    std::cout << pros << std::endl;
    */
}
