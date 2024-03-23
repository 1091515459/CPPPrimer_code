
#include <iostream>
#include <__msvc_filebuf.hpp>
#include "1/Sales_item.h"

int main(int argc, char* argv[])
{
    ////1.2
    // std::cout<<"Enter two numbers:"<< '\n';
    // int v1 = 0,v2 = 0;
    // std::cin>>v1>>v2;
    // std::cout<<"the sum of "<<v1<<" and "<<v2<<" is "<<v1+v2<< '\n';
    // return 0;
    
    // //1.4.1
    // int sum = 0,val = 50;
    // while (val<=100)
    // {
    //     sum+=val;
    //     val++;
    // }
    // std::cout<<"sum of 50 to 100 is "<<sum<<'\n';
    // return 0;

    // //1.4.2
    // int sum = 0;
    // for (int val = 1;val<=10000;val++)
    // {
    //     sum+=val;
    // }
    // std::cout<<"sum of 1 to 10000 is "<<sum<<'\n';
    // return 0;

    // //1.4.3
    // int sum = 0,value = 0;
    // //如果是控制台程序得这么写
    // while (std::cin>>value&&value!=0)
    // {
    //     sum+=value;
    // }
    // std::cout<<"sum of numbers is "<<sum<<'\n';
    // return 0;

    // //1.4.4
    // int currVal = 0,val = 0;
    // if(std::cin>>currVal)
    // {
    //     int cnt = 1;
    //     while(std::cin>>val&&val!=0)
    //     {
    //         if(val==currVal)
    //         {
    //             cnt++;
    //         }else
    //         {
    //             std::cout<<currVal<<" occurs "<<cnt<<" times"<<'\n';
    //             currVal = val;
    //             cnt = 1;
    //         }
    //     }
    //     std::cout<<currVal<<" occurs "<<cnt<<" times"<<'\n';
    // }
    // return 0;

    //1.5.1
    Sales_item book;
    std::cin >> book;
    std::cout << book << std::endl;
    return 0;
}
