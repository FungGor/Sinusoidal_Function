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

//Compute factorial
int factorial_calculation(int sum)
{
    int result = 0;
    //For example
    if (sum == 1)
        result = 1;
    else
    {
        result = sum;
        //example result = 3;   --> result = 5
        while (sum > 0)
        {
            //1st iteration : sum = 2
            //2nd iteration : sum = 1
            //if the result = 5, then
            //1st iteration : sum = 4
            //2nd iteration : sum = 3
            //3rd iteration : sum = 2
            //4th iteration : sum = 1
            sum -- ;
            if(sum == 0)
                break;
            //1st iteration : result = 3 * 2 = 6
            //2nd iteration : result = 6 * 1 = 6
            //if the result = 5 :
            //1st iteration : result = 5 * 4 = 20
            //2nd iteration : result = 20 * 3 = 60
            //3rd iteration : result = 60 * 2 = 120
            //4th iteration : result = 120 * 1 = 120
            result = result * sum;
        }
    }
    return result;
}

//Compute the sinusoidal function in taylor series approach
int main() {

    // insert code here...
    cout << "Hello, World!\n";
    cout << "Please input the number:"<<endl;
    cin >> number;
    cout << endl;
    
    //Get starting timepoint
    auto start = high_resolution_clock::now();
    for (int i = 0; i<=number; i++)
    {
        sum = (2*i)+1;
        cout << "The first group is: "<<sum <<"   "<<"Factorial :"<<factorial_calculation(sum)<<endl;
    }
    
    //Get enging timepoint
    auto stop = high_resolution_clock::now();
    
    // Get duration. Substart timepoints to
    // get duration. To cast it to proper unit
    // use duration cast method
    auto duration = duration_cast<microseconds>(stop-start);
    
    cout<<"Time taken by for loop "<<duration.count()<<" microseconds"<<endl;
    
    cout<<"the end"<<endl;
    return 0;
}
