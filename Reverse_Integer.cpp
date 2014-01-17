//============================================================================
// Name        : test.cpp
// Author      : Yao Wang
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <bitset>
using namespace std;

class Solution {
public:
    int reverse(int x) {

			bool isNegative=false;
			int result=0;
			if(x<0)
			{
				isNegative=true;
				x=-x;
			}
			
			while(x)
			{
				result=result*10+x%10;
				x/=10;
			}

			return result*(isNegative?-1:1);
			//return result;
			
        
    }
};

