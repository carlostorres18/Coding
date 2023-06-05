/*story must have a beginning, at least 3 possible endings

  Program should contain at least 3 branch points where the user must make
  a choice about what to do next. At each branch the program should:   
      - Give the user at least 2 choices
      - Accept user input
      
      Each decision will add points to either ending, and based on the
      ending that had the most points, that will be the ending
      */

#include <iostream>

int main(){
    int good = 0;
    int bad = 0;
    int meh = 0;
    int input;
    std::string name;

    // Introduction and explaining to the user what will happen in this story.
    std::cout<<"Hello and welcome, my name is edoc.\n";
    std::cout<<"I'll be your guide throughout this adventure.\n";
    std::cout<<"Lets first start with your name:\n";
    std::cin>>name;
    std::cout<<"So your name is "<<name<<", believe it or not my cousin was named the same.\n";

    std::cout<<"Anyways lets get started, you will play a role in a story.\n";
    std::cout<<"Based on your decisions i'll decide whether you live or you die, so better be prepared for these challenges.\n";
    std::cout<<"You may have 2 options or even 3 options, and based on which options you choose, it will affect you later on.\n";
    std::cout<<"So good luck, and lets get this started.\n";

    




}