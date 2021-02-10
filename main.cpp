#include <iostream>

using namespace std;

int main()
{
    int a[5],n=0,i;
    cout<<"                                        WELCOME TO KAUN BANEGA CROREPATI                                    "<<endl<<endl;
    cout<<" Hey everyone,I am TANWEER AKHTAR the host of this game welcomes you all and let's play this game with you all"<<endl;
    cout<<"Here you have given 5 questions and each question will contain 4 options"<<endl;
    cout<<"The prize for 1st question is Rs.100000.00"<<endl;
    cout<<"The prize for 2nd question is Rs.3000000.00"<<endl;
    cout<<"The prize for 3rd question is Rs.5000000.00"<<endl;
    cout<<"The prize for 4th question is Rs.8000000.00"<<endl;
    cout<<"The prize for 5th question is Rs.10000000.00"<<endl;
    for(i=0;i<=5;i++)
    {
      n=0;
      switch(i)
      {
      case 1:
        cout<<"Your fist question which can give you Rs.100000 is: In which direction muslim prays 1. East 2. South 3. North 4. West"<<endl;
        cin>>n;

        if(n==1)
        {
            cout<<" Your answer is correct. Congratulations u have won Rs.100000"<<endl;
        }
        else
        {
            cout<<"Sorry u r wrong. We hope you will try again next time. We have too much fun while playing with u THANKU";
            i=6;
        }
        break;
        case 2:
        cout<<"Your second question which can give you Rs.3000000 is: How many time muslims do namaz everyday 1. Four 2. Five 3. One 4. Nine"<<endl;
        cin>>n;
        if(n==2)
        {
            cout<<" Your answer is correct. Congratulations u have won Rs.3000000"<<endl;
        }
        else
        {
            cout<<"Sorry u r wrong. We hope you will try again next time. We have too much fun while playing with u THANKU";
            i=6;
        }
        break;
        case 3:
        cout<<"Your third question which can give you Rs.5000000 is: Who was the first president of America 1. Braque Obama 2. Donald Trump 3. Nelson Mandela 4. Abraham Lincon"<<endl;
        cin>>n;
        if(n==4)
        {
            cout<<" Your answer is correct. Congratulations u have won Rs.5000000"<<endl;
        }
        else
        {
            cout<<"Sorry u r wrong. We hope you will try again next time. We have too much fun while playing with u THANKU";
            i=6;
        }
        break;
        case 4:
        cout<<"Your fourth question which can give you Rs.8000000 is: Who introduces C language 1. Limon lee 2. Dennis Richee 3. Charles Babbage 4. C. Nicolos"<<endl;
        cin>>n;
        if(n==2)
        {
            cout<<" Your answer is correct. Congratulations u have won Rs.8000000"<<endl;
        }
        else
        {
            cout<<"Sorry u r wrong. We hope you will try again next time. We have too much fun while playing with u THANKU";
            i=6;
        }
        break;
        case 5:
        cout<<"Your last question which can give you Rs.10000000 is: Which wide spread disease causes about 1 lakh death in America 1. Alasi 2. Hatna 3. Corona 4. Zuagni"<<endl;
        cin>>n;
        if(n==3)
        {
            cout<<" Your answer is correct. Congratulations u have won Rs.10000000. You Are the WINNER";
        }
        else
        {
            cout<<"Sorry u r wrong. We hope you will try again next time. You were very close for winning 1 crore, I really appriciate your knowledge. We have too much fun while playing with u THANKU";
            i=6;
        }
        break;


      }
    }



}
