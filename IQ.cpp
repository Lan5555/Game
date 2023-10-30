#include<iostream>
#include <vector>
#include<ctime>
#include<cstdlib>
#include <thread>
#include <unistd.h>
#include <chrono>
#include <algorithm>
using namespace std;

class mode
{
public:
   // gameDifficulty difficulty;
    string mode;
    char p;
    string name;
    string start;
    string id;
    int Ai = 0;
    int namescore = 0;
    int question;
    string difficulty;
    //bool provideCorrectAnswer;
    
    int terminate(){
    return 0;
    }
    
    void resetGame(){
    Ai = 0;
    namescore = 0;
    }
    

    
        string gameMode(){
        cout << "New game(Y/N)\n";
        cin >> mode;
        if(mode == "Y" || mode == "y"){
        for(int i = 0; i <= 2; i++){
        cout << ".";
        sleep(1);
        cout.flush();
        }
        cout << endl;
        cout << "An ID will be given to you\n";
        cout << "use it to login\n";
        cout << "Input your name\n";
        cin >> name;
        }
        
        return name;
        }
    
   // string generator(){
    //vector<string>loop = {
    //"4HDK","3AA2","HYKW",
    //"QYUO","RRGY","RHFG",
   // "HKUU","QREW","REEG",
   // "KLNY","BHFF","UHIJ"
   // };
    //srand(static_cast<unsigned int>(time(nullptr)));
     //question = rand() % loop.size();
     // return loop[question];
    //}
    
    
            
               
        

    void scoreBoardf(){
    cout << "                    " << "Ai:" << Ai << endl;
    cout << "                    " << "You:" << namescore << endl;
    
    }
    
        
      
    
    

};


    

    

    
class AuthenticationSystem {
public:
    string randomID;

    string generateRandomID() {
        string randomID = "";
        const char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

        for (int i = 0; i < 4; i++) {
            randomID += chars[rand() % (sizeof(chars) - 1)];
        }

        return randomID;
    }

//public:
    AuthenticationSystem() {
        srand(static_cast<unsigned int>(time(nullptr)));
        randomID = generateRandomID();
    }

    bool authenticate(){//{
        
      string inputID;
    while(true) {
        cout << "Your ID is:" << randomID << endl; ;
         cout << "Login\n";
       // cout << lot;
        cout << "Enter ID: ";
            cin >> inputID;
            if (inputID == randomID) {
                cout << "Login successful\n";
                for (int i = 0; i < 3; i++) {
                    cout << ".";
                    this_thread::sleep_for(chrono::seconds(1));
                    cout.flush();
                }
                    
                cout << "\x1B[2J\x1B[H"; // Clear the screen
                return true;
            } else {
                cout << "Wrong ID. Please try again: ";
            }
        }     
        
    }

            
    
};

        


void clear(){
cout << "\x1B[2J\x1B[H";
}




 

void upper(string& lan){
for(char c : lan){
    c = toupper(c);
}
}
void time(int n){
    for(int i = 0; i <= n; i++){
    cout << ".";
    sleep(1);
    cout.flush();
    }
    cout << endl;
}


   void loader(const vector<string>& text) {
    for (const string& line : text) {
        for (char c : line) {
            cout << c;
            
            this_thread::sleep_for(chrono::milliseconds(100)); // Adjust the delay as needed
        }
    }
}

void countDownFrom20To0() {
      cout << ".                  Time limit" << endl;
    for (int number = 20; number >= 0; number--) {
        cout << " \rnumber:"<<  number << " ";
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    cout << endl;
}
    
    
void hard(mode &fan){
    vector<string> questions = {
        "1. What's the chemical symbol for gold?",
        "2. Who wrote 'The Catcher in the Rye'?",
        "3. What is the largest mammal on Earth?",
        "4. What gas do plants absorb from the atmosphere?",
        "5. What is the square root of 144?",
        "6. In which year did World War II end?",
        "7. What is the freezing point of water in Fahrenheit?",
        "8. What is the main component of Earth's atmosphere?",
        "9. What is the smallest prime number?",
        "10. Who painted the 'Starry Night'?",
        "11. What is the largest organ in the human body?",
        "12. Which planet is known as the 'Red Planet'?",
        "13. What is the smallest country in the world by land area?",
        "14. What is the chemical symbol for water?",
        "15. Who discovered the theory of relativity?",
        "16. What is the atomic number of oxygen?",
        "17. Which gas makes up the majority of Earth's atmosphere?",
        "18. Who wrote 'Pride and Prejudice'?",
        "19. What is the largest moon of Saturn?",
        "20. What is the primary gas responsible for the greenhouse effect on Earth?",
        "21. What is the capital of Brazil?",
        "22. Who is the author of '1984'?",
        "23. Which gas do humans exhale when they breathe out?",
        "24. What is the largest desert in the world?",
        "25. In which year did Christopher Columbus arrive in the Americas?",
        "26. Who painted the 'Mona Lisa'?",
        "27. What is the smallest planet in our solar system?",
        "28. Who is the author of 'To Kill a Mockingbird'?",
        "29. What is the chemical symbol for silver?",
        "30. What is the boiling point of water in Celsius?",
        "31. Who is the main character in 'Hamlet'?",
        "32. What is the largest ocean on Earth?",
        "33. What is the most abundant gas in the Earth's crust?",
        "34. In which year did the Titanic sink?",
        "35. Who wrote 'Romeo and Juliet'?",
        "36. What is the largest fish in the world?",
        "37. What is the primary gas responsible for photosynthesis in plants?",
        "38. Who is the author of 'The Great Gatsby'?",
        "39. What is the main component of the Sun?",
        "40. What is the smallest country in Asia?",
        };
        
    vector<string>answer3 =  {
        "Au",
        "J.D.Salinger",
        "Blue Whale",
        "Carbon dioxide",
        "12",
        "1945",
        "32 degrees",
        "Nitrogen",
        "2",
        "Vincent van Gogh",
        "Skin",
        "Mars",
        "Vatican City",
        "H2O",
        "Albert Einstein",
        "8",
        "Nitrogen",
        "JaneAusten",
        "Titan",
        "Carbondioxide",
        "Brasília",
        "George Orwell",
        "Carbondioxide",
        "Antarctica",
        "1492",
        "Leonardo da Vinci",
        "Mercury",
        "Harper Lee",
        "Ag",
        "100 degrees",
        "Hamlet",
        "Pacific Ocean",
        "Oxygen",
        "1912",
        "William Shakespeare",
        "Whale Shark",
        "Carbondioxide",
        "FScott Fitzgerald",
        "Hydrogen",
        "Maldives",
        
        
    };
    bool provideCorrectAnswer = (rand() % 10 < 9);
    cout << "My turn, pick a number from 1 to " << questions.size() << " for me: ";
    int part; 
    cin >> part;

    if (part >= 1 && part <= questions.size()) {
    string randomQuestion2 = questions[part - 1];  // Adjust for 0-based index

    //bool gapp =
     //lad.getProvideCorrectAnswer();  // Call the method to get the value
    if (provideCorrectAnswer){
        string correctAnswer2 = answer3[part - 1];  // Adjust for 0-based index
        cout << randomQuestion2 << endl;
        time(1);
        cout << "Correct Answer: " << correctAnswer2 << endl;
        time(2);
        // You may want to remove or replace the following 'time' function calls as needed
        
        fan.Ai++;
        // Assuming clear() clears the screen
        clear();
        fan.scoreBoardf();
        // You may want to remove or replace the following 'time' function call as needed
        time(1);
    } else {
        // Provide a wrong answer (You can customize this logic)
        string wrongAnswer = "Ai failed";
        cout << randomQuestion2 << endl;
        // You may want to remove or replace the following 'time' function call as needed
        time(2);
        cout << "Wrong:\n";
        time(1);
        cout << wrongAnswer << endl;
        // You may want to remove or replace the following 'time' function call as needed
        time(1);
        // Assuming clear() clears the screen
        clear();
    }
} else {

    cout << "Invalid number. Please choose a number within the range." << endl;
    
    cin >> part;
    
}

string choice;
if (fan.Ai >= 10) {
    cout << "You lose" << endl;
    // You may want to remove or replace the following 'time' function call as needed
    time(3);
    cout << "Would you like to play again (Y/N): ";
    cin >> choice;

    if (choice == "Y" || choice == "y") {
        fan.resetGame();
        // Assuming clear() clears the screen
        clear();
    } else if (choice == "N" || choice == "n") {  // Changed 'y' to 'n'
        cout << "Game over" << endl;
       // cout << "Ai:" << fan.Ai << endl;
       cout << "You:" << fan.namescore << endl; 
        cout << "Ai:" << fan.Ai << endl;
        // Assuming clear() clears the screen
        //fan.terminate();
        exit(0);
        clear();
        
     } else {
        fan.terminate();
    }
}
}


void Ai(){
    string name;
    string answer;
    string answer2;
    mode kick;
    AuthenticationSystem lamb;
   
   
    
      string c = kick.gameMode();
    if(c == "N" || c == "n"){
    kick.terminate();
    }
    
 
     string cap = lamb.randomID;
    
    time(4);
    cout << "Welcome:" << kick.name << endl;
    time(2);
    //cout << "Your ID is:" << cap << endl;
    //time(2);
    cout << "This game is called, Test your IQ\n";
    cout << "Would you like to play(Y/N)\n";
    cin >> answer;
    
    if(answer == "Y" || answer == "y"){
    time(2);
    vector<string>lan = 
    {
    
    "Here are the rules\n",
    "I'm going to be your opponent\n",
    "I'll choose a number\n",
    "Display the question related to that number\n",
    "You are required to provide an answer\n",
    "After my turn, you do so respectively\n",
    "The first to score 10 points wins\n",
    "Are you ready?(Y/N)\n"
    };
    loader(lan);
    string cad;
    cin >> answer2;
    
 
    
    } else{
    kick.terminate();
    }

    
    
    
    if(answer2 == "Y" || answer2 == "y" ){
    cout << "Get ready";
    cout << "\n";
    time(2);
    cout << "Your turn\n";
    cout << "\x1B[2J\x1B[H";
    }else{
    cout << "bye\n";
    kick.terminate();
    }
    
    
    
    

    
}
    

void Ai2(mode &fan){

string answer4;
string userAnswer;

vector<string> questions = {
        "1. What's the chemical symbol for gold?",
        "2. Who wrote 'The Catcher in the Rye'?",
        "3. What is the largest mammal on Earth?",
        "4. What gas do plants absorb from the atmosphere?",
        "5. What is the square root of 144?",
        "6. In which year did World War II end?",
        "7. What is the freezing point of water in Fahrenheit?",
        "8. What is the main component of Earth's atmosphere?",
        "9. What is the smallest prime number?",
        "10. Who painted the 'Starry Night'?",
        "11. What is the largest organ in the human body?",
        "12. Which planet is known as the 'Red Planet'?",
        "13. What is the smallest country in the world by land area?",
        "14. What is the chemical symbol for water?",
        "15. Who discovered the theory of relativity?",
        "16. What is the atomic number of oxygen?",
        "17. Which gas makes up the majority of Earth's atmosphere?",
        "18. Who wrote 'Pride and Prejudice'?",
        "19. What is the largest moon of Saturn?",
        "20. What is the primary gas responsible for the greenhouse effect on Earth?",
        "21. What is the capital of Brazil?",
        "22. Who is the author of '1984'?",
        "23. Which gas do humans exhale when they breathe out?",
        "24. What is the largest desert in the world?",
        "25. In which year did Christopher Columbus arrive in the Americas?",
        "26. Who painted the 'Mona Lisa'?",
        "27. What is the smallest planet in our solar system?",
        "28. Who is the author of 'To Kill a Mockingbird'?",
        "29. What is the chemical symbol for silver?",
        "30. What is the boiling point of water in Celsius?",
        "31. Who is the main character in 'Hamlet'?",
        "32. What is the largest ocean on Earth?",
        "33. What is the most abundant gas in the Earth's crust?",
        "34. In which year did the Titanic sink?",
        "35. Who wrote 'Romeo and Juliet'?",
        "36. What is the largest fish in the world?",
        "37. What is the primary gas responsible for photosynthesis in plants?",
        "38. Who is the author of 'The Great Gatsby'?",
        "39. What is the main component of the Sun?",
        "40. What is the smallest country in Asia?",
        };
        
    vector<string>answer3 =  {
        "Au",
        "J.D.Salinger",
        "Blue Whale",
        "Carbon dioxide",
        "12",
        "1945",
        "32 degrees",
        "Nitrogen",
        "2",
        "Vincent van Gogh",
        "Skin",
        "Mars",
        "Vatican City",
        "H2O",
        "Albert Einstein",
        "8",
        "Nitrogen",
        "JaneAusten",
        "Titan",
        "Carbondioxide",
        "Brasília",
        "George Orwell",
        "Carbondioxide",
        "Antarctica",
        "1492",
        "Leonardo da Vinci",
        "Mercury",
        "Harper Lee",
        "Ag",
        "100 degrees",
        "Hamlet",
        "Pacific Ocean",
        "Oxygen",
        "1912",
        "William Shakespeare",
        "Whale Shark",
        "Carbondioxide",
        "FScott Fitzgerald",
        "Hydrogen",
        "Maldives",
    };
            
 
    srand(static_cast<unsigned int>(time(nullptr)));
    int question = rand() % questions.size();  // Select a random question

    string randomQuestion = questions[question];
    string correctAnswer = answer3[question];

    // Create a vector to hold the answer options, including the correct answer
    vector<string> answerOptions;

    // Add the correct answer
    answerOptions.push_back(correctAnswer);

    // Generate 3 unique random incorrect answers and add them to the options
    while (answerOptions.size() < 4) {
        int randomIndex = rand() % answer3.size();
        string randomIncorrectAnswer = answer3[randomIndex];
        if (randomIncorrectAnswer != correctAnswer &&
            find(answerOptions.begin(), answerOptions.end(), randomIncorrectAnswer) == answerOptions.end()) {
            answerOptions.push_back(randomIncorrectAnswer);
        }
    }

    // Shuffle the answer options
    random_shuffle(answerOptions.begin(), answerOptions.end());

    cout << randomQuestion << endl;

    // Display the shuffled options
    for (int i = 0; i < answerOptions.size(); i++) {
        char option = 'a' + i;  // Convert to 'a', 'b', 'c', 'd'
        cout << option << ") " << answerOptions[i] << endl;
        
    }
    cin >> userAnswer;
    
    // Check if the userAnswer is valid ('a', 'b', 'c', or 'd')
    if (userAnswer == "a" || userAnswer == "b" || userAnswer == "c" || userAnswer == "d") {
        // Convert userAnswer to the corresponding index (0, 1, 2, 3)
        int userChoice = userAnswer[0] - 'a';
            
            
        if (answerOptions[userChoice] == correctAnswer){
            cout << "Correct!" << endl;
            
            time(1);
            fan.namescore++;
            clear();
            fan.scoreBoardf();
        } else {
            cout << "Incorrect. The correct answer is: " << correctAnswer << endl;
        }
    } else {
        
        cout << "Invalid choice. Please select 'a', 'b', 'c', or 'd'." << endl;
        
         cin >> userAnswer;
        
    }
    
    string choice;
    if(fan.namescore >= 10){
 
    cout << "You win\n";
    time(3);
    
    cout << "Would you like to play again(Y/N)\n";
    cin >> choice;
    
    if(choice == "Y" || choice == "y"){
        fan.resetGame();
        clear();
    
    }else if(choice == "N" || choice == "n"){
    cout << "Game over\n";
    cout << "You:" << fan.namescore << endl; 
    cout << "Ai:" << fan.Ai << endl;
       //fan.terminate();
       exit(0);
    
    
    } else{
    //fan.terminate();
   clear();
    }
    }
    
}

      void user(mode &fan){
        
      vector<string> questions = {
        "1. What's the chemical symbol for gold?",
        "2. Who wrote 'The Catcher in the Rye'?",
        "3. What is the largest mammal on Earth?",
        "4. What gas do plants absorb from the atmosphere?",
        "5. What is the square root of 144?",
        "6. In which year did World War II end?",
        "7. What is the freezing point of water in Fahrenheit?",
        "8. What is the main component of Earth's atmosphere?",
        "9. What is the smallest prime number?",
        "10. Who painted the 'Starry Night'?",
        "11. What is the largest organ in the human body?",
        "12. Which planet is known as the 'Red Planet'?",
        "13. What is the smallest country in the world by land area?",
        "14. What is the chemical symbol for water?",
        "15. Who discovered the theory of relativity?",
        "16. What is the atomic number of oxygen?",
        "17. Which gas makes up the majority of Earth's atmosphere?",
        "18. Who wrote 'Pride and Prejudice'?",
        "19. What is the largest moon of Saturn?",
        "20. What is the primary gas responsible for the greenhouse effect on Earth?",
        "21. What is the capital of Brazil?",
        "22. Who is the author of '1984'?",
        "23. Which gas do humans exhale when they breathe out?",
        "24. What is the largest desert in the world?",
        "25. In which year did Christopher Columbus arrive in the Americas?",
        "26. Who painted the 'Mona Lisa'?",
        "27. What is the smallest planet in our solar system?",
        "28. Who is the author of 'To Kill a Mockingbird'?",
        "29. What is the chemical symbol for silver?",
        "30. What is the boiling point of water in Celsius?",
        "31. Who is the main character in 'Hamlet'?",
        "32. What is the largest ocean on Earth?",
        "33. What is the most abundant gas in the Earth's crust?",
        "34. In which year did the Titanic sink?",
        "35. Who wrote 'Romeo and Juliet'?",
        "36. What is the largest fish in the world?",
        "37. What is the primary gas responsible for photosynthesis in plants?",
        "38. Who is the author of 'The Great Gatsby'?",
        "39. What is the main component of the Sun?",
        "40. What is the smallest country in Asia?",
        };
        
    vector<string>answer3 =  {
        "Au",
        "J.D.Salinger",
        "Blue Whale",
        "Carbon dioxide",
        "12",
        "1945",
        "32 degrees",
        "Nitrogen",
        "2",
        "Vincent van Gogh",
        "Skin",
        "Mars",
        "Vatican City",
        "H2O",
        "Albert Einstein",
        "8",
        "Nitrogen",
        "JaneAusten",
        "Titan",
        "Carbondioxide",
        "Brasília",
        "George Orwell",
        "Carbondioxide",
        "Antarctica",
        "1492",
        "Leonardo da Vinci",
        "Mercury",
        "Harper Lee",
        "Ag",
        "100 degrees",
        "Hamlet",
        "Pacific Ocean",
        "Oxygen",
        "1912",
        "William Shakespeare",
        "Whale Shark",
        "Carbondioxide",
        "FScott Fitzgerald",
        "Hydrogen",
        "Maldives",
        
        
    };
        
    bool provideCorrectAnswer = (rand() % 2 == 0);
    cout << "My turn, pick a number from 1 to " << questions.size() << " for me: ";
    int part;
    cin >> part;

    if (part >= 1 && part <= questions.size()) {
    string randomQuestion2 = questions[part - 1];  // Adjust for 0-based index

    //bool gapp =
     //lad.getProvideCorrectAnswer();  // Call the method to get the value
    if (provideCorrectAnswer){
        string correctAnswer2 = answer3[part - 1];  // Adjust for 0-based index
        cout << randomQuestion2 << endl;
        time(1);
        cout << "Correct Answer: " << correctAnswer2 << endl;
        time(2);
        // You may want to remove or replace the following 'time' function calls as needed
        
        fan.Ai++;
        // Assuming clear() clears the screen
        clear();
        fan.scoreBoardf();
        // You may want to remove or replace the following 'time' function call as needed
        time(1);
    } else {
        // Provide a wrong answer (You can customize this logic)
        string wrongAnswer = "Ai failed";
        cout << randomQuestion2 << endl;
        // You may want to remove or replace the following 'time' function call as needed
        time(2);
        cout << "Wrong: \n";
        time(1);
        cout << wrongAnswer << endl;
        // You may want to remove or replace the following 'time' function call as needed
        time(1);
        // Assuming clear() clears the screen
        clear();
    }
} else {
    cout << "Invalid number. Please choose a number within the range." << endl;
    cin >> part;
}

string choice;
if (fan.Ai >= 10) {
    cout << "You lose" << endl;
    // You may want to remove or replace the following 'time' function call as needed
    time(3);
    cout << "Would you like to play again (Y/N): ";
    cin >> choice;

    if (choice == "Y" || choice == "y") {
        fan.resetGame();
        // Assuming clear() clears the screen
        clear();
    } else if (choice == "N" || choice == "n") {  // Changed 'y' to 'n'
        cout << "Game over" << endl;
       cout << "You:" << fan.namescore << endl; 
        cout << "Ai:" << fan.Ai << endl;
        // Assuming clear() clears the screen
        //fan.terminate();
        exit(0);
        
        
     } else {
        clear();
    }
}
}

 int main() {
    mode fin;
    AuthenticationSystem authSystem;
    Ai();
    string cad;
    cout << "Enter mode, Hard or easy" << endl;
    cin >> cad;
    if(cad == "Hard" || cad == "hard"){
    
    authSystem.authenticate();
    while(true){
  //  countDownFrom20To0();
    fin.scoreBoardf();
    
    hard(fin);
    
    Ai2(fin);
    }
   //AuthenticationSystem authSystem;
    
    }else{
    
   // gameDifficulty difficulty1;

    //if (!difficulty1.isInitiated()) {
       // difficulty1.model();
    //}
    authSystem.authenticate();
    while (true) {
      //  countDownFrom20To0();
        fin.scoreBoardf();
        
        Ai2(fin);
       
        user(fin);
    }
}
    return 0;
}