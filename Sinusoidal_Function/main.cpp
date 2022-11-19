//
//  main.cpp
//  Sinusoidal_Function
//
//  Created by Leung Ki Fung on 9/11/2022.
//

#include <iostream>
#include <chrono>
#include <vector>
#include <cmath>

using namespace std;
using namespace std::chrono;

unsigned int number;
unsigned int temp;
double result = 0;
unsigned int sum = 0;
unsigned int multiple = 0;

int main() {

    // insert code here...
    cout << "Hello, World!\n";
    cout << "Please input the number:"<<endl;
    cin >> number;
    
    //Get starting timepoint
    auto start = high_resolution_clock::now();
    for (int i = 0; i<=number; i++)
    {
        sum = (2*i)+1;
        if (multiple == 0)
            multiple = 1;
        multiple = sum * multiple;
        multiple ++;
        
    }
    
    //Get enging timepoint
    auto stop = high_resolution_clock::now();
    
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop-start);
    
    cout<<"Time taken by for loop "<<duration.count()<<" microseconds"<<endl;
    
    return 0;
}
