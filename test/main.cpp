//
//  main.cpp
//  test
//
//  Created by Panshul Bharadwaj on 04/08/20.
//  Copyright © 2020 Panshul Bharadwaj. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
 //sum of all digits in a number //
    int n;
    cin>> n;
    int add=0;
    while(n>0)
    {
        int r=0;
        r=n%10;
        add = r+add;
        n=n/10;
    }
    cout<<add;
    return 0;
}
