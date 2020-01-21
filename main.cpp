#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <time.h>

using namespace std;
char choice, gameChoice;
string name1, name2, start, start1;
int fib[25], me[25];
int i=3, n, j, x=0, liczba, strzal, proba;

int main()
{
 do{
    cout <<endl;
    cout << "Welcome to the game. Tell me what to do."<<endl;
    cout <<endl;
    cout << "1. Create your profile."<<endl;
    cout <<endl;
    cout << "2. Start the game."<<endl;
    cout <<endl;
    cout << "3. Exit the game."<<endl;
    cout <<endl;
    choice=getch();
    switch (choice)
    {
        case '1':
            system ("cls");
            cout <<endl;
            cout << "Enter your name to register: ";
            cin >> name1;
            cout <<endl;
            cout << "User "<<name1<<" has been registered. Now you can start the game.";
            Sleep(2500);
            system ("cls");
        break;
        case '2':
            if (name1==""){
                cout << "No profile registered. Create your profile first.";
                cout <<endl;
                Sleep (1000);
                system("cls");
            }else{
                system ("cls");
                cout <<endl;
                cout << "Enter your name: ";
                cin >> name2;
                if (name2==name1){
                    cout <<endl;
                    cout << "You have successfuly registered! Wait 5 seconds."<<endl;

                    for (int i=5; i>=1; i--)
                    {
                        Sleep (1000);
                        system("cls");
                        cout <<endl;
                        cout << i<<"\a" <<endl ;
                    }
                    system ("cls");
                do{
                    cout <<endl;
                    cout << "Welcome to your panel. Choose your game."<<endl;
                    cout <<endl;
                    cout << "1. Chase Fibonacci"<<endl;
                    cout <<endl;
                    cout << "2. Peekaboo"<<endl;
                    cout <<endl;
                    cout << "3. Exit"<<endl;
                    cout <<endl;
                    gameChoice=getch();
                    switch (gameChoice)
                    {
                    case '1':
                        system("cls");
                        cout <<endl;
                        cout << "Welcome! My name is Fibonacci and I have created this popular string, remember from School?"<<endl;
                        cout <<endl;
                        Sleep (4000);
                        cout << "Anyway, the first two numbers are 1 and 1 and the next number will be the sum of previous two."<<endl;
                        cout <<endl;
                        Sleep (4000);
                        cout << "So it goes like this: 1 1 2 3 5 8 13 21.... and so on."<<endl;
                        cout <<endl;
                        Sleep (4000);
                        cout << "You will be given 3 seconds to write the next number and I am going to count how many numbers are you going to write."<<endl;
                        cout <<endl;
                        Sleep (4000);
                        cout << "If you write the wrong number you fail. If you exceed your given time you fail."<<endl;
                        Sleep (4000);
                        cout << "With the first number I will start."<<endl;
                        cout <<endl;
                        cout <<endl;
                        cout <<"Read my message and once you're ready - type start and press enter: ";
                        cin >> start;
                        if (start=="start"){
                           fib[0]=1;
                           fib[1]=1;
                           for (j=2; j<25; j++)
                           {
                            fib[j]=fib[j-1]+fib[j-2];
                           }
                            system("cls");
                            cout <<"PREPARE YOURSELF!";
                            for (int n=5; n>0; n--)
                            {
                                cout <<endl;
                                cout<<n;
                                Sleep(1000);
                            }
                            cout <<endl;
                            cout<< "START";
                            system("cls");
                            cout <<endl;
                            cout<< "Value 1: 1";
                            cout <<endl;
                            do
                            {
                                cout <<endl;
                                cout<<"Value "<<x+2<<": ";
                                cin>>me[x+1];
                                x++;
                            }while(fib[x]==me[x]);   // Nie wiem jak odliczać czas...

                            cout <<"Wrong! Fibonacci has run away, but you have managed to chase him through "<<x<<" numbers.";
                            cout <<endl;
                            Sleep (5000);
                            cout <<endl;
                            cout <<"Try again!";
                            Sleep (2000);
                            system("cls");
                        }else{
                            system("cls");
                            cout <<endl;
                            cout <<"It is not start what you typed. You failed before even starting.";
                            Sleep(3000);
                            system("cls");
                        }
                    break;
                    case '2':
                            system("cls");
                            cout <<endl;
                            cout <<"Hello! I am your computer. I want to play Peekaboo with you.";
                            cout <<endl;
                            Sleep (4000);
                            cout <<endl;
                            cout <<"I will come up with one number from 1 to 100 but I will not share it with you.";
                            cout <<endl;
                            Sleep (4000);
                            cout <<endl;
                            cout <<"You will have to guess in 10 steps. But to help you, I will be giving you some tips.";
                            cout <<endl;
                            Sleep (4000);
                            cout <<endl;
                            cout <<"Read my message and once you're ready - type start and press enter: ";
                            cin >> start1;
                            if (start1=="start"){
                               cout <<endl;
                               cout <<endl;
                               cout <<"I tought about...";
                               cout <<endl;
                               cout <<endl;
                               srand(time(NULL));
                               liczba=rand()%100+1;
                               Sleep(1000);
                               cout <<endl;
                               cout <<"Ok I got it. Now tell me what's the number.";
                               cout <<endl;
                               while (liczba!=strzal)
                               {
                                cout <<endl;
                                cout <<"The number is: ";
                                cin >>strzal;
                                proba++;
                                if(strzal==liczba)
                                {
                                  cout <<endl;
                                  cout <<"Mazel Tov! You have managed to guess in "<<proba<<" attempt";
                                  cout <<endl;
                                  Sleep(2000);
                                  system("cls");
                                }else if(strzal<liczba){
                                  cout <<endl;
                                  cout <<"To low. Try higher.";
                                  cout <<endl;
                                }else{
                                  cout <<endl;
                                  cout <<"To much. Try lower.";
                                  cout <<endl;
                                }
                               }
                            }else{
                            system("cls");
                            cout <<endl;
                            cout <<"It is not start what you typed. You failed before even starting.";
                            Sleep(3000);
                            system("cls");
                            }
                    break;
                    case '3':
                        exit(0);
                    break;
                    default:
                        cout << "Enter 1, 2 or 3.";
                        system ("cls");
                    }
                }while("");
                }else{
                    while ((name2!=name1)&&(i>0)){
                    cout <<endl;
                    cout << "There is no such profile. Left attempts: "<<i<<".";
                    cout <<endl;
                    Sleep(2000);
                    system ("cls");
                    cout <<endl;
                    cout << "Enter your name: ";
                    cin >> name2;
                    i--; // Jak sprawiæ ¿eby po spe³nieniu pierwszego warunku (name2!=name1) nie wykonywa³o dalszych dzia³añ w pêtli (i--)?
                    }
                        if (i>0){
                            cout <<endl;
                            Sleep (1000);
                            cout << "You have successfuly registered! Wait 5 seconds."<<endl;
                            for (int i=5; i>=1; i--)
                            {
                                Sleep (1000);
                                system("cls");
                                cout <<endl;
                                cout << i<<"\a" <<endl ;
                            }

                        }else{
                            cout <<endl;
                            cout<<"There is no such profile. No attempts left. The window will close now.";
                            Sleep(3000);
                            exit(0);
                        }
                }
            }
            break;
        case '3':
                exit(0);
        break;
        default:
        cout << "Enter 1, 2 or 3.";
        system ("cls");
    }
    }while("");

    return (0);
}
