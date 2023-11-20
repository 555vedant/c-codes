#include<stdio.h>
#include<math.h>
int fact(int n);
int main(){
    printf("%d" ,fact(5));
    return 0;

}
int facto(int n){

    if( int n == 0){
        return 1
    }



    int factn1=fact(n-1);
    int factn= n *factn1;
    return factn;
    
}