#include <iostream>
#include <vector>
using namespace std;

int countprime(int n) {

    vector<bool> isprime(n+1,true);
    int count = 0;

    for(int i = 2; i<n; i++) {

        if(isprime[i]) {
            count++;

            for(int j = i*2; j<n; j += i) {
                isprime[j] = false;
            }
        }
    }

    return count;
}

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;

    int res = countprime(n);
    cout <<"number of prime is : "<< res <<endl;

    return 0;
}