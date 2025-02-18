#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    float number,sum=0,average;
    int num_count;
    if(argc >1){
        for(int i =0;i < argc ; i++){
            number = atof(argv[i]);
            sum+=number;
        }
        num_count = argc-1;
        average = sum/num_count;
        cout<<"---------------------------------\n";
        cout<<"Average of "<<num_count<<" numbers = "<<average<<"\n";
        cout<<"---------------------------------\n";
    }else{
        cout<<"Please input numbers to find average.\n";
    }
    return 0;
}
