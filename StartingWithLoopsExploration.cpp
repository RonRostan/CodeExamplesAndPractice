//  Another freestyle coding exploration to get better....

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
    std::cout<<std::endl;  //LET'S NOT FORGET THIS WAY
	i = 0;
    for (i; i <= 9 && i>=0; i++) {
        std::cout << i << ", "; }
    std::cout << "10\n\n";

}//END main()                //END main()                      //END main()             //END main()

