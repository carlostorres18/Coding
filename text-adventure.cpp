/*story must have a beginning, at least 3 possible endings

  Program should contain at least 3 branch points where the user must make
  a choice about what to do next. At each branch the program should:   
      - Give the user at least 2 choices
      - Accept user input
      
      Each decision will add points to either ending, and based on the
      ending that had the most points, that will be the ending
      */

#include <iostream>
#include <iomanip>

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
    std::getline(std::cin, name);
    std::cout<<"So your name is "<<name<<", believe it or not my cousin was named the same.\n";

    std::cout<<"Anyways lets get started, you will play a role in a story.\n";
    std::cout<<"Based on your decisions i'll decide whether you live or you die, so better be prepared for these challenges.\n";
    std::cout<<"You may have 2 options or even 3 options, and based on which options you choose, it will affect you later on.\n";
    std::cout<<"So good luck, and lets get this started.\n";

    int num;
    double sum = 0;

    // Set of questions.

    std::cout<<"You are stuck in a maze, and are given the option to stay or get up. What will you do?\n";
    std::cout<<"    1) Stay\n";
    std::cout<<"    2) Get up and move forward\n";
    std::cout<<"Enter your choice: 1 or 2\n";
    std::cin>>input;
    while(true){
        if(input == 1){
            std::cout<<"You decide to stay some more, don't know why since there is nothing to do for you to stay.\n\n";
            std::cout<<"You are still stuck at the beginning of the maze. What will you do?\n";
            std::cout<<"    1) Stay some more\n";
            std::cout<<"    2) Get up and move forward\n";
            std::cout<<"Enter your choice: 1 or 2\n";
            std::cin>>input;
        }
        else if(input == 2){
            std::cout<<"You get up and go forward\n";
            break;
        }
        else{
            std::cout<<"You did not input a correct input, you can only input 1 or 2.\n";
            std::cout<<"Re-start your adventure, don't let it happen again.\n";
            break;
        }
    }

    std::cout<<"In front of you there lies 2 paths.\n";
    std::cout<<"One of them is dark, and gloomy, the other one is full of light and and life.\n";
    std::cout<<"Which path will you choose?\n";
    std::cout<<"    1) Dark and gloomy\n";
    std::cout<<"    2) Light full of life\n";
    std::cin>>input;

    while(true){
        if(input == 1){
            std::cout<<"Its dark up a head, take this lamp with you.\n";
            std::cout<<"    You received a lamp.\n";
            good++;
            bad++;
            break;
        }
        else if(input == 2){
            std::cout<<"Its really bright up ahead, take this sunglasses.\n";
            std::cout<<"    You received cool pair of sunglasses\n";
            break;
            good++;
            bad++;
        }
        else{
            std::cout<<"You did not input a correct input, you can only input 1 or 2.\n";
            std::cout<<"Re-start your adventure, don't let it happen again.\n";
            break;
        }
    }

    std::cout<<"There is a road up ahead, and there is a written question on a table.\n";
    std::cout<<"Write 4 numbers that will give you the equivalent of 2.5 in average.\n\n";

    for (int i = 0; i < 4; i++){
        std::cout<<"Enter number: ";
        std::cin>>num;

        sum += num;
    }

    double average;
    average = sum / 4;
    if(average == 2.50){
        std::cout<<"Congrats you got "<<std::setprecision(2)<<std::fixed<<"exactly "<<average<<std::endl;
        good++;
    }
    else{
        std::cout<<"ERROR\n";
        bad++;
    }

    /*Decide the ending based on how many points each "ending" received.*/

    int max = 0;
    std::string ending;

    if(good == bad){
        ending = "You are stuck in the maze, and probably will be for eternity.\n";
    }

    if(good > max){
        max = good;
        ending = "You make it to the end, safe and sounds, with all your bones intact.\n";
    }
    if(bad > max){
        max = bad;
        ending = "You lie down, as you feel dizzy, and finally give your last breath as you slowly die.\n";
    }

    std::cout<<ending<<"\n";


    return 0;

}