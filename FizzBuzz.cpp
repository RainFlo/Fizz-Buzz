//  Created by Adrienne Flojo on 1/29/20.
//  Copyright © 2020 Adrienne Flojo. All rights reserved.

#include <iostream>
using namespace std;

string fizzBuzz(int n) {
    string answer;
    
    if(n == 0) {
        return "0\n";
    }
    
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0) {
            if(i % 5 == 0) {
                answer += "FizzBuzz\n";
                break;
            }
            answer += "Fizz\n";
        }
        else {
            if(i % 5 == 0)
                answer += "Buzz\n";
            
            else
                answer += to_string(i) + "\n";
        }
    }
    return answer;
}

int main(int argc, const char * argv[]) {
    
    int number;
    
    cout << "Give me a number: ";
    cin >> number;
    cout << "\n" + fizzBuzz(number) + "\n";

    return 0;
}
