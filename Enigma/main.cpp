#include <iostream> //Basic requirement for cout/cin
#include <string> //Program requires strings for the user entering either 'encode' or 'decode'
using namespace std; //Used for convenience of not typing 'std::' every time
void encode(char[] ,int[]);//Encode function introduced
void decode(char[] , int[]); //Decode function introduced
void re(string, int[], char[]);
int main()
{
    char word[9000] = {' '}; //The word to be encoded
    int code1[3]; //Used for the settings
    string ed; //The 'encode' or 'decode' is saved in a string so that .compare can be used
    re(ed, code1, word);
}
void re(string ed,int code1[],char word[])
{
    cout<<"Would you like to encode or decode? (Remember not to use numbers)"<<endl;
    cin>>ed; //User enters whether they want to encode or decode
    
    if (ed.compare("encode") == 0) //If the user enters encode, it enters the if statement
    {
        cout<<"Enter the setting (Three numbers between 0 and 9)."<<endl;
        for (int i = 0; i < 3; i++) //For loop to run thrice and get three settings into the array
        {
            cin>>code1[i]; //User enters three numbers between 0 and 9 for the setting
        }
        cout<<"What would you like to encode? (Only letters and underscore)"<<endl; //User should only enter letters or underscore
        cin>>word; //User enters the word that they would like to encode
        encode (word,code1); //Runs the function to encode the word
        cout<<endl;
    }
    else if (ed.compare("decode") == 0) //If the user enters decode, it enters the other if statement
    {
        cout<<"Enter the setting (Three numbers between 0 and 9)."<<endl;
        for (int i = 0; i < 3; i++) //For loop to run thrice and get three settings into the array
        {
            cin>>code1[i]; //User enters three numbers between 0 and 9 for the setting
        }
        cout<<"What would you like to decode? (Only letters and underscore)"<<endl; //User should only enter letters or underscore
        cin>>word; //User enters the word that they would like to decode
        decode(word,code1); //Runs the function to decode the word
        cout<<endl;
    }
    else
    {
        cout<<"Try again, you failed, enter 'encode' or 'decode', now: "<<endl;
        re(ed, code1, word);
    }
}
void encode (char word[], int code1[]) //Encode function
{
    for (int j = 0; j < 3; j++) //This for loop covers almost the entire encode function. It runs three times and takes the three settings and makes a change each time.
    {
        switch (code1[j])
        {
            case 0: //If any of the user's settings is 0 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 4;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 1;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 9;
                    }
                }
                break;
            case 1: //If any of the user's settings is 1 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 1;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 4;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 6;
                    }
                }
                break;
            case 2:  //If any of the user's settings is 2 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++) //If any of the user's settings is 2 then the following changes in the for loop occur
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 9;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 7;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 3;
                    }
                }
                break;
            case 3: //If any of the user's settings is 3 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 5;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 2;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 1;
                    }
                }
                break;
            case 4: //If any of the user's settings is 4 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 10;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 6;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 3;
                    }
 
                }
                break;
            case 5: //If any of the user's settings is 5 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 3;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 3;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 4;
                    }
                }
                break;
            case 6: //If any of the user's settings is 6 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 8;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 4;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 10;
                    }
 
                }
                break;
            case 7: //If any of the user's settings is 7 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 4;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 2;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 5;
                    }

                }
                break;
            case 8: //If any of the user's settings is 8 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 2;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 9;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 1;
                    }

                }
                break;
            case 9: //If any of the user's settings is 9 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 6;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 3;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 2;
                    }

                }
                break;
            default:
                break;
        };
    }
    for (int i = 0; word[i] != NULL; i++) //This loop will cout the encoded word
    {
        cout<<word[i];
    }
}
void decode(char word[], int code1[]) //Decode function
{
    for (int j  = 0; j < 3; j++) //This for loop covers almost the entire decode function. It runs three times and takes the three settings and makes a change each time.
    {
        switch (code1[j])
        {
            case 0: //If any of the user's settings is 0 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 4;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 1;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 9;
                    }
                }
                break;
            case 1: //If any of the user's settings is 1 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 1;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 4;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 6;
                    }
                }
                break;
            case 2: //If any of the user's settings is 2 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 9;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 7;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 3;
                    }
                }
                break;
            case 3: //If any of the user's settings is 3 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 5;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 2;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 1;
                    }
                }
                break;
            case 4: //If any of the user's settings is 4 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 10;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 6;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 3;
                    }
                }
                break;
            case 5: //If any of the user's settings is 5 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 3;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 3;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 4;
                    }
                }
                break;
            case 6: //If any of the user's settings is 6 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 8;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 4;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 10;
                    }
                }
                break;
            case 7: //If any of the user's settings is 7 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 4;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] - 2;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 5;
                    }
                }
                break;
            case 8: //If any of the user's settings is 8 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] - 2;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 9;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] + 1;
                    }
                }
                break;
            case 9: //If any of the user's settings is 9 then the following changes in the for loop occur
                for (int i = 0; word[i] != NULL; i++)
                {
                    if (j == 0)
                    {
                        word[i] = word[i] + 6;
                    }
                    else if (j == 1)
                    {
                        word[i] = word[i] + 3;
                    }
                    else if (j == 2)
                    {
                        word[i] = word[i] - 2;
                    }
                }
                break;
            default:
                break;
        };
    }
    for (int i = 0; word[i] != NULL; i++) //This loop will cout the decoded word
    {
        cout<<word[i];
    }
}