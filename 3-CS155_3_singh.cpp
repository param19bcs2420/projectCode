//************************************
// Name: Parminder Singh
// Project Number: 3
// Description: This app will caclulate the bill which will include
//              number of items , subtotal , tax amount , delivery fee , tip
//              and total amount.
// Due Date:  24 February 2022
//************************************

#include<iostream>
#include <iomanip>   
#include <fstream>
using namespace std;
int comboNumber=1;
float comboPrice = 0;
int main()
{
    //inputs
    
    ifstream dannyFile("danny.txt");
    ifstream steveFile("steve.txt");
    ifstream barryFile("barry.txt");

   if(dannyFile.fail())
   {
       cout<<" Error while opening the file "<<endl;
       return 1;
   }

//    if(steveFile.fail())
//    {
//        cout<<" Error while opening the file "<<endl;
//        return 1;
//    }

//    if(barryFile.fail())
//    {
//        cout<<" Error while opening the file "<<endl;
//        return 1;
//    }
   
   string line;
   getline(dannyFile,line);
   cout<<line<<endl;


    
    //getting the username
    string name;
    cout<< "Please enter your name : " << endl;
    getline(cin,name);
    cout<<endl;
    //variable intialization
    int tipAmount = 0  ;
    float DistanceTraveling = 0 ;
    float  deliveryFee = 0; 
    float taxAmount = 0 ,  numberOfItemsordered = 0 ;
    float totalBill = 0;
    

    
    //loop for checking that number should be in range
    if(comboNumber > 0 and comboNumber <= 4 )
    {
        //loop will exit when the comboNumber will become equal to zero
     while(comboNumber != 0)
    {
        cout<<"Please enter combo number : "<<endl;
         cin>>comboNumber;

        if(comboNumber == 1)
            {
                comboPrice += 5.00;
                numberOfItemsordered += 1;
                cout <<"The meal order is number 1 "<<endl;
                cout<<"Subtotal : "<< comboPrice<<endl<<endl;
            }
   
        else if (comboNumber == 2)
            {
             comboPrice += 10.00;
             numberOfItemsordered += 1;
             cout <<"The meal order is number 2 "<<endl;
             cout<<"Subtotal : "<< comboPrice<<endl<<endl;
            }
           else if (comboNumber == 3)
            {
            comboPrice += 15.00;
            numberOfItemsordered += 1;
            cout <<"The meal order is number 3 "<<endl;
            cout<<"Subtotal : "<< comboPrice<<endl<<endl;
            }
            else if( comboNumber == 4)
            {
            comboPrice += 20.00;
            numberOfItemsordered += 1;
            cout <<"The meal order is number 4 "<<endl;
            cout<<"Subtotal : "<< comboPrice<<endl<<endl;
            }
            else if(comboNumber==0){
             comboNumber=0;
             cout<< "Order Completed "<<endl<<endl;
            }
            else
            {
            cout<<"Invalid Input... Enter again "<<endl<<endl;
            }
    }
   }
    
   cout<<endl;
    
    cout<<"Enter tip amount : "<<endl;
    cin>>tipAmount;
    
     //if tip amount is less then zero it should be Input again till its not greater then zero
    if(tipAmount < 0)
    {
        cout<<"Tip amount can't be less then zero , Enter again "<<endl;
        while(tipAmount < 0)
        {
        cin>>tipAmount;
        }
    }
    cout<<endl;
    
    cout<< "Distance to be travelled : "<<endl;
    cin>>DistanceTraveling;
    
    //if Distance is less then zero it should be Input again till its not greater then zero
    if(DistanceTraveling<0)
    {
        cout<<"Travelling Distance can't be less then zero , Enter again"<<endl;
        while(DistanceTraveling<0)
        {
            cin>>DistanceTraveling;
        }
    }
    cout<<endl;
    
    //tax amount will be calculted by this formula
    taxAmount = (5.5*comboPrice/100);
    
    //delivery fee wll be caluclated by distance * dollars per mile
    deliveryFee  = DistanceTraveling*1.50;

    // total bill will be charged by adding all the calculted amounts 
    totalBill = comboPrice + taxAmount + deliveryFee + tipAmount ;
   
    cout<<endl;
    
    //printing bill receipt
    cout << "******** BILL RECIEPT ******* " <<endl<<endl;
    cout << " Diner Name      " << name << endl;
    cout << " Number of items " << numberOfItemsordered << endl;
    cout << " Subtotal        " << comboPrice << endl ;
    cout << " Tax Amount      " << taxAmount << endl;
    cout << " Delivery Fee    " << deliveryFee << endl;
    cout << " Tip             " << tipAmount << endl;
    cout<<fixed<<setprecision(2)<< " Total Bill      " << totalBill << endl<<endl;
    cout<<  "********* THANK YOU ********** " <<endl<<endl;
    
    return 0;

}
