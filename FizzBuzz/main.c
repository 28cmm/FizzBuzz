//
//  main.c
//  FizzBuzz
//
//  Created by Joshua Fang on 2018-12-22.
//  Copyright © 2018 Yilei Huang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int array[100];
    int k = 1;
    for(int i =0; i <100;i++){
        array[i] = k;
        k++;
    }
    
    
    for(int i =0; i < 100;i++){
        if(array[i]%3 ==0 && array[i]%5==0){
            printf("FizzBuzz\n");
        }else if(array[i]%3 ==0){
            printf("Fizz\n");
        }else if(array[i]%5 ==0){
            printf("Buzz\n");
        }else {
            printf("%d\n",array[i]);
        }
    }
    
}

