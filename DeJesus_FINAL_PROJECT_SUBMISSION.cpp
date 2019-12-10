// Project Name: Text-Based RPG
// Purpose: The program is a text-based rpg in which the player is a knight who has to save a princess
// that is locked in a tower. Throughout the player's journey, they will encounter certain events to
// which they will have a certain number of choices to choose from. The player must save the princess
// to win the game, but if they die, they lose the game and have to restart from the beginning.
// Author: Shawn DeJesus
#include <iostream>
using namespace std;

int main()
{
    int again; int choice[8];

    do
    { //Game begins.
    cout << "You are a knight who has to save a princess that is locked in a tower. You begin traveling";
    cout << " to the tower on your horse through the woods. You stumble across a fork in the road that";
    cout << " only allows you to go left or right. Which way will you go?\n";
    cout << "1: Left\n";
    cout << "2: Right\n";
    cin >> choice[0]; //User choose to go left or right.
    while(choice[0] > 2 || choice[0] < 1){
        cout << "Invalid choice.\n";
        cin >> choice[0];
    }
    if(choice[0] == 1){//User chooses left.
        cout << "You go left. As you walk along the path, a bear appears from the woods and blocks the";
        cout << " path. What will you do?\n";
        cout << "1: Run past the bear.\n";
        cout << "2: Fight the bear.\n";
        cin >> choice[1]; //User chooses to run past the bear or fight it.
        while(choice[1] > 2 || choice[1] < 1){
            cout << "Invalid choice.\n";
            cin >> choice[1];
        }
        if(choice[1] == 1){ //User chooses to run past the bear.
            cout << "You tried to run past the bear, but the bear was able to catch you and tear you";
            cout << " apart.\n";
            cout << "YOU DIED!\n"; 
            cout << "Play again?\n";
            cout << "1: Yes\n";
            cout << "2: No\n";
            cin >> again; //User chooses to play again or not.
            while(again > 2 || again < 1){
            cout << "Invalid choice.\n";
            cin >> again;
        }
        }
        if(choice[1] == 2){ //User chooses to fight the bear.
            cout << "You fight the bear with your sword and shield and are victorious. You continue to";
            cout << " walk the path. You and your horse begin to feel hungry. You sit down to eat some";
            cout << " meat. Your horse is eyeballing some strange looking grass that looks purple";
            cout << " instead of green. Your horse wants to eat the strange grass, but you had some";
            cout << " apples for him to eat instead. What will you do?\n";
            cout << "1: Make the horse eat the apples.\n";
            cout << "2: Let the horse eat the strange grass.\n";
            cin >> choice[2]; //User chooses to feed the horse apples or the strange grass.
            while(choice[2] > 2 || choice[2] < 1){
            cout << "Invalid choice.\n";
            cin >> choice[2];
        }
            if(choice[2] == 1){ //User chooses to feed the horse apples.
                cout << "You fed the horse some apples. The horse is no longer interested in the purple";
                cout << " grass. You continue to walk the path. You see a bridge that allows you to cross";
                cout << " a river. You're about to take a step onto the bridge until a troll appears from";
                cout << " under the bridge and blocks your path. He says that he will only let you pass";
                cout << " if you give him 10 gold coins. He also says to not try anything funny or else";
                cout << " he will shank you with his knife. What will you do?\n";
                cout << "1: Pay the troll 10 gold.\n";
                cout << "2: Fight the troll.\n";
                cin >> choice[3]; //User chooses to fight or pay the troll.
                while(choice[3] > 2 || choice[3] < 1){
                    cout << "Invalid choice.\n";
                    cin >> choice[3];
                }
                if(choice[3] == 1){ //User chooses to give the troll 10 gold.
                    cout << "You give the troll 10 gold coins, and he lets you cross the bridge.";
                    cout << "You finally see the tower and arrive only to see 2 guards gaurding the";
                    cout << " door to the tower. the 2 guards are carrying spears and shields";
                    cout << "What will you do?\n";
                    cout << "1: Fight the 2 guards.\n";
                    cout << "2: Search the area.\n";
                    cin >> choice[4]; //User chooses to fight the guards or search the area.
                    while(choice[4] > 2 || choice[4] < 1){
                        cout << "Invalid choice.\n";
                        cin >> choice[4];
                    }
                    if(choice[4] == 1){ //User chooses to fight the 2 guards unprepared.
                        cout << "You tried to fight the 2 gaurds, but you could not handle both guards";
                        cout << " at the same time and end up getting stabbed in the back and dying.\n";
                        cout << "YOU DIED!\n";
                        cout << "Play again?\n";
                        cout << "1: Yes.\n";
                        cout << "2: No.\n";
                        cin  >> again;
                        while(again > 2 || again < 1){
                            cout << "Invalid choice.\n";
                            cin >> again;
                        }
                    }
                    if(choice[4] == 2){ //User searches the area.
                        cout << "You search the area and find a skeleton with a bow and arrow in its";
                        cout << " hands. You only have 1 arrow to shoot a guard with. Where will you";
                        cout << " shoot the guard at?\n";
                        cout << "1: His head.\n";
                        cout << "2: His chest.\n";
                        cin >> choice[5]; //User chooses to shoot a guard in the head or the chest.
                        while(choice[5] > 2 || choice[5] < 1){
                            cout << "Invalid choice.\n";
                            cin >> choice[5];
                        }
                        if(choice[5] == 1){ //User chooses to shoot the guard in the head and fails.
                            cout << "You tried to shoot a guard in the head, but you missed. The gaurds";
                            cout << " notice you and kill you by stabbing a spear in your chest.\n";
                            cout << "YOU DIED!\n";
                            cout << "Play again?\n";
                            cout << "1: Yes.\n";
                            cout << "2: No.\n";
                            cin >> again;
                            while(again > 2 || again < 1){
                                cout << "Invalid choice.\n";
                                cin >> again;
                            }
                        }
                        //User chooses to shoot the guard in the chest. User wins the game.
                        if(choice[5] == 2){  
                            cout << "You shot a guard in his chest. The guard is now dead. You were able";
                            cout << " to fight and kill the second guard and open the locked door to the";
                            cout << " tower. You save the princess and ride back home to the kingdom and";
                            cout << " live happily ever after.\n";
                            cout << "The End.\n\n";
                            break;
                        }
                    }
                }
            }
            if(choice[2] == 2){ //User lets the horse eat the purple grass and loses their horse.
                cout << "You let your horse eat the strange purple grass. The horse becomes too sick";
                cout << " to continue travelling with you and dies. You become tired and tired as you";
                cout << " walk toward your next destination. You continue to walk the path. You see a bridge that allows you to cross";
                cout << " a river. You're about to take a step onto the bridge until a troll appears from";
                cout << " under the bridge and blocks your path. He says that he will only let you pass";
                cout << " if you give him 10 gold coins. He also says to not try anything funny or else";
                cout << " he will shank you with his knife. What will you do?\n";
                cout << "1: Pay the troll 10 gold.\n";
                cout << "2: Fight the troll.\n";
                cin >> choice[3]; //User chooses to fight or pay the troll.
                while(choice[3] > 2 || choice[3] < 1){
                    cout << "Invalid choice.\n";
                    cin >> choice[3];
                }
                if(choice[3] == 1){ //User chooses to give the troll 10 gold.
                    cout << "You give the troll 10 gold coins, and he lets you cross the bridge.";
                    cout << "You finally see the tower and arrive only to see 2 guards gaurding the";
                    cout << " door to the tower. the 2 guards are carrying spears and shields";
                    cout << "What will you do?\n";
                    cout << "1: Fight the 2 guards.\n";
                    cout << "2: Search the area.\n";
                    cin >> choice[4]; //User chooses to fight the guards or search the area.
                    while(choice[4] > 2 || choice[4] < 1){
                        cout << "Invalid choice.\n";
                        cin >> choice[4];
                    }
                    if(choice[4] == 1){ //User chooses to fight the 2 guards unprepared.
                        cout << "You tried to fight the 2 gaurds, but you could not handle both guards";
                        cout << " at the same time and end up getting stabbed in the back and dying.\n";
                        cout << "YOU DIED!\n";
                        cout << "Play again?\n";
                        cout << "1: Yes.\n";
                        cout << "2: No.\n";
                        cin  >> again;
                        while(again > 2 || again < 1){
                            cout << "Invalid choice.\n";
                            cin >> again;
                        }
                    }
                    if(choice[4] == 2){ //User searches the area.
                        cout << "You search the area and find a skeleton with a bow and arrow in its";
                        cout << " hands. You only have 1 arrow to shoot a guard with. Where will you";
                        cout << " shoot the guard at?\n";
                        cout << "1: His head.\n";
                        cout << "2: His chest.\n";
                        cin >> choice[5]; //User chooses to shoot a guard in the head or the chest.
                        while(choice[5] > 2 || choice[5] < 1){
                            cout << "Invalid choice.\n";
                            cin >> choice[5];
                        }
                        if(choice[5] == 1){ //User chooses to shoot the guard in the head and fails.
                            cout << "You tried to shoot a guard in the head, but you missed. The gaurds";
                            cout << " notice you and kill you by stabbing a spear in your chest.\n";
                            cout << "YOU DIED!\n";
                            cout << "Play again?\n";
                            cout << "1: Yes.\n";
                            cout << "2: No.\n";
                            cin >> again;
                            while(again > 2 || again < 1){
                                cout << "Invalid choice.\n";
                                cin >> again;
                            }
                        }
                        if(choice[5] == 2){ //User chooses to shoot the guard in the chest.
                            cout << "You shot a guard in his chest. The guard is now dead. You were able";
                            cout << " to fight and kill the second guard and open the locked door to the";
                            cout << " tower. You save the princess and ride back home to the kingdom and";
                            cout << " live happily ever after.\n";
                            cout << "The End.\n\n";
                            break;
                        }
                    }
                }
                if(choice[3] == 2 && choice[2] == 2){ //User tries to fight goblin without horse.
                    cout << "You were unsuccessful in killing the troll because you were too tired";
                     cout << " to fight due to all that walking. The troll shanks you in the stomach";
                     cout << " and kills you. The troll takes all your stuff.\n";
                     cout << "YOU DIED!\n";
                     cout << "Play again?\n";
                     cout << "1: Yes.\n";
                     cout << "2: No.\n";
                     cin >> again;
                     while(again > 2 || again < 1){
                        cout << "Invalid choice.\n";
                        cin >> again;
                    }
                }
            }
            if(choice[3] == 2 && choice[2] == 1){ //User fights troll with horse.
                    cout << "You fight and kill the troll. He drops an invisibility potion. This will";
                    cout << " come in handy later. You finally see the tower and arrive only to see 2 guards gaurding the";
                    cout << " door to the tower. the 2 guards are carrying spears and shields";
                    cout << "What will you do?\n";
                    cout << "1: Use invisibility potion.\n";
                    cout << "2: Search the area.\n";
                    cin >> choice[4]; //User chooses to use the invisibility potion or search the area.
                    while(choice[4] > 2 || choice[4] < 1){
                        cout << "Invalid choice.\n";
                        cin >> choice[4];
                    }
                    if(choice[4] == 1){ //User chooses to use the invisibility potion.
                        cout << "You use the invisibility potion and kill the two guards while unnoticed";
                        cout << "You unlock the door to the tower and save the princess. You both ride";
                        cout << " back to the kingdom and live happily ever after.\n";
                        cout << "The End.\n\n";
                        break;
                    }
                    if(choice[4] == 2){ //User searches the area.
                        cout << "You search the area and find a skeleton with a bow and arrow in its";
                        cout << " hands. You only have 1 arrow to shoot a guard with. Where will you";
                        cout << " shoot the guard at?\n";
                        cout << "1: His head.\n";
                        cout << "2: His chest.\n";
                        cin >> choice[5]; //User chooses to shoot a guard in the head or the chest.
                        while(choice[5] > 2 || choice[5] < 1){
                            cout << "Invalid choice.\n";
                            cin >> choice[5];
                        }
                        if(choice[5] == 1){ //User chooses to shoot the guard in the head and fails.
                            cout << "You tried to shoot a guard in the head, but you missed. The gaurds";
                            cout << " notice you and kill you by stabbing a spear in your chest.\n";
                            cout << "YOU DIED!\n";
                            cout << "Play again?\n";
                            cout << "1: Yes.\n";
                            cout << "2: No.\n";
                            cin >> again;
                            while(again > 2 || again < 1){
                                cout << "Invalid choice.\n";
                                cin >> again;
                            }
                        }
                        if(choice[5] == 2){ //User chooses to shoot the guard in the chest.
                            cout << "You shot a guard in his chest. The guard is now dead. You were able";
                            cout << " to fight and kill the second guard and open the locked door to the";
                            cout << " tower. You save the princess and ride back home to the kingdom and";
                            cout << " live happily ever after.\n";
                            cout << "The End.\n\n";
                            break;
                        }
                    }
            }
        }
    }
    if(choice[0] == 2){ //User chooses to go right.
        cout << "You go right. As you walk down the path, you see a wizard on the side of the path";
        cout << " waving his hand at you. You stop to see what he has to say. He tells you that his";
        cout << " house is infested with spiders and needs your help to kill them. What do you do?\n";
        cout << "1: Help the wizard kill the spiders in his house.\n";
        cout << "2: Decline his request and make up an excuse.\n";
        cin >> choice[6]; //User chooses to help the wizard or not.
        while(choice[6] > 2 || choice[6] < 1){
            cout << "Invalid choice.\n";
            cin >> choice[6];
        }
        if(choice[6] == 1){ //User helps the wizard and increases their fight skills.
            cout << "You help the wizard kill the spiders in his house. You were able to kill every";
            cout << " last one of them. As a reward, the wizard casts a spell on you that increases";
            cout << " your fighting skills. You wave goodbye to the wizard and continue down the path.";
            cout << "As you walk down the path, you notice a statue holding a golden sword. It looks";
            cout << " like it could be a useful new weapon. What do you do?\n";
            cout << "1: Take the sword from the statue's hand.\n";
            cout << "2: Leave the sword alone and continue walking the path.\n";
            cin >> choice[7]; //User chooses to take or leave the golden sword.
            while(choice[7] > 2 || choice[7] < 1){
                cout << "Invalid choice.\n";
                cin >> choice[7];
            }
            if(choice[7] == 1){ //User takes the golden sword.
                cout << "You take the golden sword from the statue's hand. You feel something";
                cout << " happening to your body. Your legs begin to turn into stone, then your";
                cout << " chest, then your arms, then your head. Your entire body has turned into";
                cout << " stone.\n";
                cout << "YOU DIED!\n";
                cout << "Play again?\n";
                cout << "1: Yes.\n";
                cout << "2: No.\n";
                cin >> again;
                while(again > 2 || again < 1){
                    cout << "Invalid choice.\n";
                    cin >> again;
                }
            }
            if(choice[7] == 2){ //User chooses the leave the golden sword.
                cout << "You choose to not take the sword and leave it alone. You continue to walk";
                cout << " the path. You see a bridge that allows you to cross";
                cout << " a river. You're about to take a step onto the bridge until a troll appears from";
                cout << " under the bridge and blocks your path. He says that he will only let you pass";
                cout << " if you give him 10 gold coins. He also says to not try anything funny or else";
                cout << " he will shank you with his knife. What will you do?\n";
                cout << "1: Pay the troll 10 gold.\n";
                cout << "2: Fight the troll.\n";
                cin >> choice[3]; //User chooses to pay or kill the goblin.
                while(choice[3] > 2 || choice[3] < 1){
                    cout << "Invalid choice.\n";
                    cin >> choice[3];
                }
                 if(choice[3] == 1){ //User pays the troll.
                    cout << "You give the troll 10 gold coins, and he lets you cross the bridge.";
                    cout << "You finally see the tower and arrive only to see 2 guards gaurding the";
                    cout << " door to the tower. the 2 guards are carrying spears and shields";
                    cout << "What will you do?\n";
                    cout << "1: Fight the 2 guards.\n";
                    cout << "2: Search the area.\n";
                    cin >> choice[4]; //User chooses to fight the two guards or search the area.
                    while(choice[4] > 2 || choice[4] < 1){
                        cout << "Invalid choice.\n";
                        cin >> choice[4];
                    }
                    //User chooses to fight the guards with his improved fighting skills.
                    if(choice[4] == 1 && choice[6] == 1){ 
                        cout << "Because of your increased fighting skills thanks to the wizard, you";
                        cout << " were able to kill both guards with ease. you unlock the door to the";
                        cout << " tower and save the princess. You both ride back to the kingdom and";
                        cout << " live happily ever after.\n";
                        cout << "The End.\n\n";
                        break;
                    }
                    if(choice[4] == 2){ //User searches the area
                        cout << "You search the area and find a skeleton with a bow and arrow in its";
                        cout << " hands. You only have 1 arrow to shoot a guard with. Where will you";
                        cout << " shoot the guard at?\n";
                        cout << "1: His head.\n";
                        cout << "2: His chest.\n";
                        cin >> choice[5]; //User chooses to shoot arrow in the guard's head or chest.
                        while(choice[5] > 2 || choice[5] < 1){
                            cout << "Invalid choice.\n";
                            cin >> choice[5];
                        }
                        if(choice[5] == 1){ //User shoots guard in the head, but misses.
                            cout << "You tried to shoot a guard in the head, but you missed. The gaurds";
                            cout << " notice you and kill you by stabbing a spear in your chest.\n";
                            cout << "YOU DIED!\n";
                            cout << "Play again?\n";
                            cout << "1: Yes.\n";
                            cout << "2: No.\n";
                            cin >> again;
                            while(again > 2 || again < 1){
                                cout << "Invalid choice.\n";
                                cin >> again;
                            }
                        }
                        if(choice[5] == 2){ //User shoots guard in the chest.
                            cout << "You shot a guard in his chest. The guard is now dead. You were able";
                            cout << " to fight and kill the second guard and open the locked door to the";
                            cout << " tower. You save the princess and ride back home to the kingdom and";
                            cout << " live happily ever after.\n";
                            cout << "The End.\n\n";
                            break;
                        }
                    }
                }
                if(choice[3] == 2 && choice[6] == 1){ //User fights troll with horse.
                    cout << "You fight and kill the troll. He drops an invisibility potion. This will";
                    cout << " come in handy later. You finally see the tower and arrive only to see 2 guards gaurding the";
                    cout << " door to the tower. the 2 guards are carrying spears and shields";
                    cout << "What will you do?\n";
                    cout << "1: Use invisibility potion.\n";
                    cout << "2: Search the area.\n";
                    cin >> choice[4]; //User chooses to use the invisibility potion or search the area.
                    while(choice[4] > 2 || choice[4] < 1){
                        cout << "Invalid choice.\n";
                        cin >> choice[4];
                    }
                    if(choice[4] == 1){ //User chooses to use the invisibility potion.
                        cout << "You use the invisibility potion and kill the two guards while unnoticed";
                        cout << "You unlock the door to the tower and save the princess. You both ride";
                        cout << " back to the kingdom and live happily ever after.\n";
                        cout << "The End.\n\n";
                        break;
                    }
                    if(choice[4] == 2){ //User searches the area.
                        cout << "You search the area and find a skeleton with a bow and arrow in its";
                        cout << " hands. You only have 1 arrow to shoot a guard with. Where will you";
                        cout << " shoot the guard at?\n";
                        cout << "1: His head.\n";
                        cout << "2: His chest.\n";
                        cin >> choice[5]; //User chooses to shoot a guard in the head or the chest.
                        while(choice[5] > 2 || choice[5] < 1){
                            cout << "Invalid choice.\n";
                            cin >> choice[5];
                        }
                        if(choice[5] == 1){ //User chooses to shoot the guard in the head and fails.
                            cout << "You tried to shoot a guard in the head, but you missed. The gaurds";
                            cout << " notice you and kill you by stabbing a spear in your chest.\n";
                            cout << "YOU DIED!\n";
                            cout << "Play again?\n";
                            cout << "1: Yes.\n";
                            cout << "2: No.\n";
                            cin >> again;
                            while(again > 2 || again < 1){
                                cout << "Invalid choice.\n";
                                cin >> again;
                            }
                        }
                        if(choice[5] == 2){ //User chooses to shoot the guard in the chest.
                            cout << "You shot a guard in his chest. The guard is now dead. You were able";
                            cout << " to fight and kill the second guard and open the locked door to the";
                            cout << " tower. You save the princess and ride back home to the kingdom and";
                            cout << " live happily ever after.\n";
                            cout << "The End.\n\n";
                            break;
                        }
                    }
                }
            }
        }
        if(choice[6] == 2){ //User chooses to not help the wizard and loses their horse.
            cout << "You told the wizard you were unable to help him because you were in a hurry. While";
            cout << " you continue walking the path, a spider sneaks up and bites your horse. You horse";
            cout << " Your horse becomes poisoned and dies, but atleast you were able to kill the spider.";
            cout << " You now become tired of walking as you walk without your horse."; 
            cout << " As you walk down the path, you notice a statue holding a golden sword. It looks";
            cout << " like it could be a useful new weapon. What do you do?\n";
            cout << "1: Take the sword from the statue's hand.\n";
            cout << "2: Leave the sword alone and continue walking the path.\n";
            cin >> choice[7]; //User chooses to take or leave the sword.
            while(choice[7] > 2 || choice[7] < 1){
            cout << "Invalid choice.\n";
            cin >> choice[7];
        }
            if(choice[7] == 1){ //User takes the golden sword.
                cout << "You take the golden sword from the statue's hand. You feel something";
                cout << " happening to your body. Your legs begin to turn into stone, then your";
                cout << " chest, then your arms, then your head. Your entire body has turned into";
                cout << " stone.\n";
                cout << "YOU DIED!\n";
                cout << "Play again?\n";
                cout << "1: Yes.\n";
                cout << "2: No.\n";
                cin >> again;
                while(again > 2 || again < 1){
                    cout << "Invalid choice.\n";
                    cin >> again;
                }
            }
            if(choice[7] == 2){ //User chooses to leave the golden sword.
                cout << "You choose to not take the sword and leave it alone. You continue to walk";
                cout << " the path. You see a bridge that allows you to cross";
                cout << " a river. You're about to take a step onto the bridge until a troll appears from";
                cout << " under the bridge and blocks your path. He says that he will only let you pass";
                cout << " if you give him 10 gold coins. He also says to not try anything funny or else";
                cout << " he will shank you with his knife. What will you do?\n";
                cout << "1: Pay the troll 10 gold.\n";
                cout << "2: Fight the troll.\n";
                cin >> choice[3]; //User chooses to pay or fight the troll.
                while(choice[3] > 2 || choice[3] < 1){
                    cout << "Invalid choice.\n";
                    cin >> choice[3];
                }
                 if(choice[3] == 1){ //User pays the troll.
                    cout << "You give the troll 10 gold coins, and he lets you cross the bridge.";
                    cout << "You finally see the tower and arrive only to see 2 guards gaurding the";
                    cout << " door to the tower. the 2 guards are carrying spears and shields";
                    cout << "What will you do?\n";
                    cout << "1: Fight the 2 guards.\n";
                    cout << "2: Search the area.\n";
                    cin >> choice[4]; //User chooses to fight the guards or search the area.
                    while(choice[4] > 2 || choice[4] < 1){
                        cout << "Invalid choice.\n";
                        cin >> choice[4];
                    }
                    if(choice[4] == 1 && choice[6] == 1){
                        cout << "Because of your increased fighting skills thanks to the wizard, you";
                        cout << " were able to kill both guards with ease. you unlock the door to the";
                        cout << " tower and save the princess. You both ride back to the kingdom and";
                        cout << " live happily ever after.\n";
                        cout << "The End.\n\n";
                        break;
                    }
                    if(choice[4] == 1 && choice[6] == 2){ //User chooses to fight guards unprepared.
                        cout << "You tried to fight the 2 guards, but you could not handle both guards";
                        cout << " at the same time and end up getting stabbed in the back and dying.\n";
                        cout << "YOU DIED!\n";
                        cout << "Play again?\n";
                        cout << "1: Yes.\n";
                        cout << "2: No.\n";
                        cin  >> again;
                        while(again > 2 || again < 1){
                            cout << "Invalid choice.\n";
                            cin >> again;
                        }
                    }
                    if(choice[4] == 2){ //User searches the area.
                        cout << "You search the area and find a skeleton with a bow and arrow in its";
                        cout << " hands. You only have 1 arrow to shoot a guard with. Where will you";
                        cout << " shoot the guard at?\n";
                        cout << "1: His head.\n";
                        cout << "2: His chest.\n";
                        cin >> choice[5];
                        while(choice[5] > 2 || choice[5] < 1){
                            cout << "Invalid choice.\n";
                            cin >> choice[5];
                        }
                        if(choice[5] == 1){ //User shoots guard in the head, but misses.
                            cout << "You tried to shoot a guard in the head, but you missed. The gaurds";
                            cout << " notice you and kill you by stabbing a spear in your chest.\n";
                            cout << "YOU DIED!\n";
                            cout << "Play again?\n";
                            cout << "1: Yes.\n";
                            cout << "2: No.\n";
                            cin >> again;
                            while(again > 2 || again < 1){
                                cout << "Invalid choice.\n";
                                cin >> again;
                            }
                        }
                        if(choice[5] == 2){ //User shoots guard in the chest. User wins the game.
                            cout << "You shot a guard in his chest. The guard is now dead. You were able";
                            cout << " to fight and kill the second guard and open the locked door to the";
                            cout << " tower. You save the princess and ride back home to the kingdom and";
                            cout << " live happily ever after.\n";
                            cout << "The End.\n\n";
                            break;
                        }
                    }
                }
                if(choice[3] == 2 && choice[6] == 2){ //User tries to fight goblin without horse.
                    cout << "You were unsuccessful in killing the troll because you were too tired";
                    cout << " to fight due to all that walking. The troll shanks you in the stomach";
                    cout << " and kills you. The troll takes all your stuff.\n";
                    cout << "YOU DIED!\n";
                    cout << "Play again?\n";
                    cout << "1: Yes.\n";
                    cout << "2: No.\n";
                     cin >> again;
                     while(again > 2 || again < 1){
                        cout << "Invalid choice.\n";
                        cin >> again;
                    }
                }
            }
        }
    }
    }while(again == 1);
    cout << "Thank you for playing!\n";
    return 0;
}