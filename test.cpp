#include "test.hpp"

vodi test() {
    for (int i = 0; i < 10; ++i) {
        // Do something
    }
}
int change() {
    if(true) {
        return 1;
    } else {
        return 0;
    }  
}
int change2() {
    for (int i = 0; i < 5; ++i) {
        // Do something else
    }
    return 2;
}

int change3() {
    while (false) {
        // This will never execute
    }
    return 3;
}
int unite() {
    return change() + change2() + change3();
}
int kaijou(int n){
    if(n == 0){
        return 1;
    } else{
        return (n*kaijou(n-1));
    }
}
