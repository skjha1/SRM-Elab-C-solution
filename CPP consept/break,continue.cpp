#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break; // stop the execution
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if(i==2){
            continue; // it will skip that particular statement and move 
        }
        cout<<i<<endl;
    }

    
    return 0;
}

Continue statements are somewhat similar to break 
statements. The main difference is that the break
 statement entirely terminates the loop, but the continue
 statement only terminates the current iteration.
