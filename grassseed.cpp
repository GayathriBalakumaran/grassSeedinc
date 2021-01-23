#include<iostream>
# include<stdio.h>
using namespace std;

int main(){
    double c,area;
    cin>>c;
    if(0<c&&c<=100){
        int l;
        cin>>l;
        if(0<l&&c<=100){
            area=0;
            for(int i=1;i<=l;i++){
                double w,l;
                cin>>w>>l;
                area=area+l*w;
            }
            printf("%0.7f",area*c);
        }
    }return 0;
}