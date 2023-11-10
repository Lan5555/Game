#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <unistd.h>
using namespace std;

class intro 
{    
public:
   string name;
    void loopLoader(){
    for(int i = 0; i < 3; i++){
        cout << ".";
        sleep(1);
        cout.flush();
        }
    }
    void auth(){
    vector<string>num = {
    "A","B","C","D","E",
    "F","G","H","I","J",
    "K","L","M","N","O",
    "P","Q","R","S","T",
    "U","V","W","X","Y",
    "Z","1","2","3","4",
    "5","6","7","8","9",
    "0"
     };
      srand(static_cast<unsigned int>(time(nullptr)));
        for(size_t  i = num.size() - 1; i > 0; i--){
            size_t j = rand() % (i + 1);
            swap(num[i], num[j]);
        }
        
        string uniqueID = "";
        for(size_t i = 0; i < 4; i++){
            uniqueID += num[i];
        }
        
        cout << "Enter name:" << endl;
        
        cin >> name;
        cout << "Welcome:" << name << endl;
        loopLoader();
        cout << " \n";
        cout << "Generated iD:" << uniqueID << endl;
        cout << "Sign in with your ID:\n";
        string ID;
        while(ID != uniqueID){
        cin >> ID;
        if(ID == uniqueID){
        cout << "Sign in successful\n";
        loopLoader();
        cout << endl;
        cout << "Combat Strike\n";
        cout << "Rules\n";
        cout << "Menu commands are to be passed with numbers\n";
        cout << "Excluding skills and Healing\n";
        cout << "Do you confirm(1 = yes/ 2 = no)\n";
        string choice3;
        cin >> choice3;
        if(choice3 == "1"){
        cout << "\n";
        loopLoader();
        cout << "\033[2J\033[H";
        break;
        }else if(choice3 == "2"){
        cout << "Goodbye\n";
        exit(0);
        }
        }else{
        cout << "Wrong ID\n";
        }
        }
    }
    
    

};



class Character {
public:
    int health;
    int skillPoints;
    int healpoints;

    Character(int initialHealth, int initialSkillPoints,int initialhealpoints) : health(initialHealth), skillPoints(initialSkillPoints),healpoints(initialhealpoints){}
    //difficultyAi(string initialdifficulty): difficulty(initialdifficulty) {}
    int attack() {
        srand(static_cast<unsigned int>(time(nullptr)));
        int damage = rand() % 21 + 30;
        int critical = rand() % 100;  // Simulate a critical hit (10% chance)
        if (critical < 10) {
            damage += damage * 0.5;  // Increase damage by 50% for a critical hit
            cout << "Critical Hit! ";
        }
       
        cout << "strike:\n" <<  damage << " damage!" << endl;
        return damage;
    }
    int attack2() {
        srand(static_cast<unsigned int>(time(nullptr)));
        int damage1 = rand() % 100 + 1;
        int critical1 = rand() % 100;  // Simulate a critical hit (10% chance)
        if (critical1 < 10) {
            damage1 += damage1 * 0.5;  // Increase damage by 50% for a critical hit
            cout << "Critical Hit! ";
        }
       
        cout << "strike:\n" <<  damage1 << " damage!" << endl;
        return damage1;
    }
    
   pair<string, int> specialAttack() {
    srand(static_cast<unsigned int>(time(nullptr)));
    
    vector<int> lan = {100, 150, 111, 150, 129, 167, 199};
    vector<string> name = {"earth", "water", "wind", "fire","holy","slice","meteor","flare"};
    
    int skill = rand() % lan.size();
    int type = rand() % name.size();
    
    // Connect elements from both vectors using a pair
    pair<string, int> specialAttackPair = make_pair(name[type], lan[skill]);
    
    return specialAttackPair;
    }

    
        pair<string,int>Heal(){
        srand(static_cast<unsigned int>(time(nullptr)));
    
        vector<int> land = {200,150,100,90,140};
        vector<string> name2 = {"coconut", "nut", "apple", "meat","candy"};
    
        int skill = rand() % land.size();
        int type = rand() % name2.size();
    
    // Connect elements from both vectors using a pair
        pair<string, int> Healing = make_pair(name2[type], land[skill]);
    
        return Healing;
        
    }
   
};
class load
{
public:
    void loader(){
    for(int i = 0; i <= 2; i++){
    cout << ".";
    sleep(1);
    cout.flush();
    }
    cout << endl;
    }
};

int main() {
        
    intro it;
    it.auth();
    srand(static_cast<unsigned>(time(nullptr)));

    Character player(1000, 10,5);
    Character ai(1000, 10,5);
    load lan;
    
    
    
    
    
   
    

    while (player.health > 0 && ai.health > 0) {
         cout << "                                  "  << "Health" << endl;
        cout << "                                 " << it.name << ": "  << player.health << endl;
        cout << "                                 " << " AI: " << ai.health << endl;
        
        // Player's turn
        cout << "  \n";
        cout << "  \n";
        cout << it.name << " " << "turn:" << endl;
        
        cout << "  \n";
        cout << "  \n";
        cout << "  \n";
        cout << "  \n";
        cout << "  \n";
        cout << "  \n";
        cout << "1 = Normal Attack" << "  " << "2 = Special Attack" << "  " << "3 = Heal\n";
        cout << "             " << "Enter your choice:";
        int playerChoice;
        cin >> playerChoice;

        if (playerChoice == 1) {
           cout << "\033[2J\033[H";
            int damage = player.attack();
            cout << " \n";
            ai.health -= damage;
        } else if (playerChoice == 2) {
                if(player.skillPoints > 0){
                cout << "skillpoints:" << player.skillPoints << endl;
                
                pair<string, int> specialAttackResult = player.specialAttack();
                
                cout << "SpecialAttack available:\n" << specialAttackResult.first << endl;
                string choice;
                
               while(choice != specialAttackResult.first){
                cin >> choice;
               // lan.loader();
                if(choice == specialAttackResult.first){
                
               cout << "\033[2J\033[H";
                player.skillPoints--;
                lan.loader();
                cout << "Special Attack Damage: " << specialAttackResult.first << " " << specialAttackResult.second << endl;
                

                int damage = specialAttackResult.second;
                ai.health -= damage;
                break;
                
                }else{
                cout << "\033[2J\033[H";
                cout << "Not a skill\n";
                cout << "please input,correct name of skill\n";
                cout << specialAttackResult.first << endl;
                
                }
                }
                }else{
                cout << "out of skill points\n";
                
                }
                
               
        } else if (playerChoice == 3) {
           
            pair<string, int> Healing = player.Heal();
            cout << "healpoints:" << player.healpoints << endl;
            
            cout << "Items available\n";
            cout << Healing.first << endl;
            
            string itemChoice;
            cin >> itemChoice;
           // lan.loader();
            cout << "\033[2J\033[H";
            player.healpoints--;
            
            if(itemChoice == Healing.first){
            if(player.healpoints > 0){
            if(player.health < 1000){
            player.health += Healing.second;
            }else if(player.health > 1000){
            player.health = 1000;
            cout << "Hp max\n";
            }
            cout << "Ate:" << Healing.first << endl;
            lan.loader();
            cout << "Recovered:" << Healing.second << endl;
            
            }else{
           cout << "\033[2J\033[H";
            cout << "out of healpoints\n";
            }
            
        } else {
       cout << "\033[2J\033[H";
            cout << "Invalid choice. Try again." << endl;
        }
}

        // Check if AI is defeated
        if (ai.health <= 0) {
            cout << it.name << " " << "wins!" << endl;
            break;
        }

        // AI's turn
        cout << "AI's turn:" << endl;
       cout << " " << endl;
        int aiChoice = (rand() % 3) + 1;

        if (aiChoice == 1) {
            
            int damage = ai.attack2();
            player.health -= damage;
        } else if(aiChoice == 2){
        
            if(ai.healpoints > 0){
           pair<string, int> Healing = player.Heal();
           if(ai.health < 1000){
           ai.health += Healing.second;
           }else if(ai.health > 1000){
           ai.health = 1000;
           cout << "Hp max\n";
           }
           
           
           
           
          // lan.loader();
           cout << "Ai ate:" << Healing.first << endl;
           lan.loader();
           cout << "Ai recovered:" << Healing.second << endl;
           ai.healpoints--;
           
           // int e = ai.heal();
           }else{
           cout << "Ai is out of heal points\n";
           }
        }else if(aiChoice == 3){
            if(ai.skillPoints > 0){
            
            ai.skillPoints--;
            
           pair<string, int> specialAttackResult = player.specialAttack();
           player.health -= specialAttackResult.second;
          // lan.loader();
           cout << "Ai used:" << specialAttackResult.first << endl;
           lan.loader();
           cout << "Damage:" << specialAttackResult.second << endl;
        }else{
        cout << "Ai is out of skill points\n";
        }
        }

        // Check if Player is defeated
        if (player.health <= 0) {
            cout << "AI wins!" << endl;
            break;
        }

        // Display health
        
        
    }

    return 0;
}
    