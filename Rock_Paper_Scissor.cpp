#include<iostream>

using namespace std;


// 0 = rock 1 = paper 2 = scissor
void giveWinPoint(int U_Choice,int C_Choice,int &U_Score,int &C_Score);

int main()
{
    int dies = 3; 
    int U_Choice = 0;
    int C_Choice = 0;
    int U_Score = 0;
    int C_Score = 0;
    while (dies>0)
    {
        if(dies<3)
        {
            cout<<endl<<endl;
        }


        cout<<4-dies<<" Match \n";


        cout<<"0 = rock 1 = paper 2 = scissor"<<endl;
        cout<<"Enter yours Choice : ";
        cin>>U_Choice;

        if (U_Choice>=0 && U_Choice<=2)
        {

            C_Choice = rand()%3; // getting an a random option for the computer

            cout<<"Computer Choice : "<<C_Choice<<endl;

            giveWinPoint(U_Choice,C_Choice,U_Score,C_Score);

            dies--;
        }
    }

    cout<<"______________________________________________________"<<endl;
    cout<<"---------------conclusion of game---------------------"<<endl;
    cout<<"Overall User Score : "<<U_Score<<endl;
    cout<<"Overall Computer Score : "<<C_Score<<endl;
    if(U_Score>C_Score)
    {
        cout<<"You Win The Match"<<endl;
    }
    else if (U_Score < C_Score)
    {
        cout<<"You Lose The Match"<<endl;
    }
    else{
        cout<<"overall game draw"<<endl;
    }
    

}



void giveWinPoint(int U_Choice,int C_Choice,int &U_Score,int &C_Score)
{
    if(U_Choice == C_Choice)
    {
        cout<<"Draw"<<endl;
    }
    else if(U_Choice==0 && C_Choice==2 || U_Choice==1 && C_Choice==0 || U_Choice==2 && C_Choice==1)
    {
        U_Score++;
        cout<<"You Win"<<endl;
    }
    else{
        C_Score++;
        cout<<"Computer Win"<<endl;
    }
}

string tellTheName(int choice)
{
    if (choice==0) return "rock";
    else if (choice==0) return "paper";
    else return "scissor";
}




// Copytright by AJTAS