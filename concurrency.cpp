#include<bits/stdc++.h>
#include <execution>
#include <iostream>

int main(){
    std::vector<int> v = {1, 2, 3};
    std::int64_t sum = std::reduce(std::execution::par, v.begin(), v.end(), 0LL, std::plus<>{});

    std::cout << sum << std::endl;
    return 0;
}