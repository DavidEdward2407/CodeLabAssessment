/////////////////////////////////////////
/////////DAVID EDWARD ZUMERLE////////////
/////////STUDENT ID: 575808//////////////
///////COMPUTING YEAR 1 SEM 1////////////
/////////////////////////////////////////
/*You have been asked to write a simple question and answer programme. There is only one question to answer: 
“What is the capital of France”.

The programme should ask the user this question, then prompt for a response.
The user then types in an answer.
If the answer is correct, the programme should tell the user that their answer was correct.
If the answer is incorrect, the programme should tell the user that their answer was wrong.
Advanced Requirements
What about capital letters? (e.g. paris vs Paris vs PaRis)
Add additional questions. (e.g. 10 Capitals Cities of Europe Quiz)*/

#include <iostream>
#include <string>


using namespace std;
string answear = "";
void lowerCase(){
    for(int i = 0; i < 10; i++){
        answear[i] = tolower(answear[i]);
    }
}
int main(){
    int score = 0;
    //1st Question
    cout<<"What is the capital of France?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "paris"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Paris"<<endl;
    }
    //2nd Question
    cout<<"What is the capital of Italy?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "rome"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Rome"<<endl;
    }
    //3rd Question
    cout<<"What is the capital of Spain?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "madrid"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Madrid"<<endl;
    }
    //4th Question
    cout<<"What is the capital of Romania?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "bucharest"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Bucharest"<<endl;
    }
    //5th Question
    cout<<"What is the capital of Germany?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "berlin"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Berlin"<<endl;
    }
    //6th Question
    cout<<"What is the capital of Poland?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "warsaw"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Warsaw"<<endl;
    }
    //7th Question
    cout<<"What is the capital of Bulgaria?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "sofia"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Sofia"<<endl;
    }
    //8th Question
    cout<<"What is the capital of Norway?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "oslo"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Oslo"<<endl;
    }
    //9th Question
    cout<<"What is the capital of Portugal?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "lisbon"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Lisbon"<<endl;
    }
    //10th Question
    cout<<"What is the capital of Latvia?"<<endl;
    cin>>answear;
    lowerCase();
    if(answear == "riga"){
        cout<<"the asnwear is correct!"<<endl;
        score++;
    }else{
        cout<<"Incorect answear. The correct answear is Riga"<<endl;
    }
    cout<<"Your scorre is : "<<score<<endl;
    return 0;
}