#include <iostream>
#include <vector>
#include <utility>

using namespace std;

// Simple solution Time Complexity: O(n^2) //
// pair<long long, string> maxPairwiseMultiply(const vector<long long> &numList){
//     long long ans = 0;
//     string digits = "";

//     for(int i = 0; i < numList.size(); i++){
//         for(int j = i+1; j < numList.size(); j++){
//             long long num = 0;
//             num = numList[i]*numList[j];

//             if(num > ans){
//                 ans = num;
//                 digits = "first digit: " + to_string(numList[i]) + ", " + "last digit: " + to_string(numList[j]);
//             }
//         }
//     }
//     digits = "first digit: " + to_string(num1) + ", " + "second digit: " + to_string(num2);

//     return make_pair(ans, digits);
// }

// More efficient solution Time Complexity: O(n) //
pair<long long, string> maxPairwiseMultiply(const vector<long long> &numList){
    long long num1 = 0;
        long long num2 = 0;
        string digits = "";


        for(int i = 0; i < numList.size(); i++){
                if(numList[i] > num1){
                    num2 = num1;
                    num1 = numList[i];
                }
                else if(numList[i] > num2){
                    num2 = numList[i];
                }
            // }
        }
        digits = "first digit: " + to_string(num1) + ", " + "second digit: " + to_string(num2);

        return make_pair(num1*num2, digits);
    }

int main(){

    vector<long long> num = {5, 6, 8, 3, 4, 9, 100000000, 900000};

    pair<long long, string> result = maxPairwiseMultiply(num);

    cout << "Max Multiply Number is: " << result.first << " " << result.second << endl; 

    return 0;
}