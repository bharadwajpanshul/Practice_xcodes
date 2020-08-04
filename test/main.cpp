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
    int n;int r=0;
    cin>> n;
    while(n>0)
    {
        r=(r*10)+n%10;
        n=n/10;
    }
    cout<<r;
    return 0;
}
