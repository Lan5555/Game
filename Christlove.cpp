#include <iostream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include <vector>
#include <algorithm>
using namespace std;

void loader(){
for(int i = 0; i <= 3;  i++){
cout << ".";
sleep(1);
cout.flush();
}
cout << endl;
}

void clear(){
cout << "\x1B[2J\x1B[H";
}

void question(){
string choice;
cout << "Pick\n";
cout <<"Truth or Dare" << endl;
cin >> choice;
if(choice == "Truth" || choice == "truth"){
loader();
vector<string>lan = {
    "What is the most embarrassing thing you've ever done?",
    "Have you ever cheated on a test?",
    "What is your biggest fear?",
    "Have you ever lied to your best friend?",
    "What is your most embarrassing nickname?",
    "What is the most childish thing you still do?",
    "Have you ever stolen something?",
    "What is your weirdest habit?",
    "Have you ever had a crush on a teacher?",
    "What is the most embarrassing thing your parents have caught you doing?"
};
srand(static_cast<unsigned int>(time(nullptr)));
int random = rand() % lan.size();
clear();
cout << lan[random] << endl;
loader();
//clear();
}else if(choice == "Dare" || choice == "dare"){
vector<string>limit = {

    "Sing a song in a public place.",
    "Do 10 push-ups right now.",
    "Dance like nobody's watching for 30 seconds.",
    "Text your crush and tell them you like them.",
    "Go outside and shout 'I love Snapchat!' as loud as you can.",
    "Eat a spoonful of a condiment you dislike.",
    "Do a handstand for as long as you can.",
    "Let someone give you a makeover using only items they find in the kitchen.",
    "Call a random number and have a 1-minute conversation with them.",
    "Do your best impression of a famous celebrity."
};
srand(static_cast<unsigned int>(time(nullptr)));
int random2 = rand() % limit.size();
clear();
cout << limit[random2] << endl;
loader();

}

}

int main(){
while(true){
question();
}

}