//  Another freestyle coding exploration to get better....
//  Edited .sln and .vcxproj files to put this .cpp into a project - Open Project, then Open the .cpp.  There has to be a faster way...

#include <iostream>

int main()
{
    std::cout << "This program is a running update of coding that I wish to understand fully.\n\n\n";
    std::cout << "This is my cementing of basic \"while\" loops in C++!\n";
    int i;
    i = 0;
    while (i < 10) {
        std::cout << i << ", ";
        i = i + 1;
    }//END OF while LOOP          END OF while LOOP
    std::cout << "10\n\n";      //END OF while LOOP practice +10           END OF while LOOP practice + 10
    std::cout << "This is my review and cementing of basic \"for\" loops in C++! \n";
    i = 0;
    for (i; i < 10; i++) {
        std::cout << i << ", ";
    }                     //END OF FOR loop           END OF FOR loop           END OF FOR loop
    std::cout << "10\n\n";  //END OF for LOOP PRACTICE + 10  END OF for LOOP PRACTICE + 10  END OF for LOOP PRACTICE + 10

    std::cout << "Now for a \"for\" with some different consideration of the domain of n.";
    std::cout << std::endl;  //LET'S NOT FORGET THIS WAY
    i = 0;
    for (i; i <= 9 && i >= 0; i++) {
        std::cout << i << ", ";
    }
    std::cout << "10\n\n";

    std::cout << "Here is an example of a \"for each\" loop.\n";
        int myNumbers[] = {0,1,2,3,4,5,6,7,8,9};
    for (int i : myNumbers) {//for DEV C++, I had to add "-std=c++11" 
    //						   as a command when calling the compiler to get the for loop to work 
        std::cout << i << ", ";
        }//END for each LOOP                END for each LOOP                END for each LOOP                END for each LOOP                END for each LOOP                
    std::cout << "10\n\n";

      

}//END main()                //END main()                      //END main()             //END main()


