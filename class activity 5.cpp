#include<iostream>
#include<limits> //for numeric limits

int main(){
    // size of short and double
    std::cout<<"Size of shorts:"<<sizeof(short)<<"bytes"<<std::endl;
    std::cout<<"Size of double:"<<sizeof(double)<<"bytes"<<std::endl;

    std::cout<<"Minimum value of short:"<<std::numeric_limits<short>::min() <<std::endl;
    std::cout<<"Maximum value of short:"<<std::numeric_limits<short>::max() <<std::endl;

    std::cout<<"Minimum value of double:"<<std::numeric_limits<double>::min()<<std::endl;
    std::cout<<"Maximum value of double:"<<std::numeric_limits<double>::max()<<std::endl;

    return 0;
}