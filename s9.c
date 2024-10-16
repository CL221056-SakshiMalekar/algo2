#include <stdio.h>

int maxProfit(int prices[], int n) {
    int max_profit = 0;
    int min_price = prices[0];

    for (int i = 1; i < n; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        } else {
            int profit = prices[i] - min_price;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
    }

    return max_profit;
}

int main() {
    int prices[] = {7, 1, 5, 3,
