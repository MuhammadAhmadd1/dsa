#include<iostream>
int main(){
    int i,n;
    float arr[100];
    std::cout<<"Enter Total  number of elements:"<<std::endl;
    std::cin>>n;

    for(i=0; i<n; i++){
        std::cout<<"Enter a number"<<i + 1<<std::endl;
        std::cin>>arr[i];
    }
    int largest = arr[0];
    if (i = 1; i< n){
        if(largest<arr[i])
        largest=arr[i];
    }
    std::cout<<std::endl<<"largest num ="<<largest;
    return 0;
}