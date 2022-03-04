#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

 int comboNumber = 1;
 float comboPrice = 0;

 int comboNumber1 = 1;
 float comboPrice1 = 0;

 int comboNumber2 = 1;
 float comboPrice2 = 0;

int main()
{
    //initialization
    ifstream dannyFile("danny.txt");
    ifstream steveFile("steve.txt");
    ifstream barryFile("barry.txt");
    ofstream outputFile("output.txt");
    int tipAmount = 0  ;
    float DistanceTraveling = 0 ;
    float  deliveryFee = 0; 
    float taxAmount = 0 ,  numberOfItemsordered = 0 ;
    float totalBill = 0;
    int options = 0;

    int tipAmount1 = 0  ;
    float DistanceTraveling1 = 0 ;
    float  deliveryFee1 = 0; 
    float taxAmount1 = 0 ,  numberOfItemsordered1 = 0 ;
    float totalBill1 = 0;
   
    int tipAmount2 = 0  ;
    float DistanceTraveling2 = 0 ;
    float  deliveryFee2 = 0; 
    float taxAmount2 = 0 ,  numberOfItemsordered2 = 0 ;
    float totalBill2 = 0;


    int numRead = 0;
    int comboNub = 1;
    
    string name;
    cout<< "Please enter your name : " << endl;
    getline(cin,name);
    cout<<endl;
    
    cout<<"Select the options from below  \n1. Danny’s Diner Dash \n2. Speedy Steve’s Slices \n3. Barry’s Buffalo Buffet \n0. End of the Day – Stop Processing "<<endl;
     cin >> options ;

    while(options !=0)
    {
      
     cout<<"Select the options from below  \n1. Danny’s Diner Dash \n2. Speedy Steve’s Slices \n3. Barry’s Buffalo Buffet \n0. End of the Day – Stop Processing "<<endl;
     cin >> options ;
     
     

       if(options == 1)
        {
         cout << " Welcome to Danny’s Diner Dash \n 1. Combo Number 1 - $5.00 \n 2. Combo Number 2 - $10.00 \n 3. Combo Number $15.00 \n 4. Combo Number 4 - $20.00 \n 0. Complete Order " <<endl;

         while(dannyFile >> numRead)
         {
             cout<< " comboNumber  : " << comboNub++ << " " << numRead <<endl ;
         }
             if(comboNumber > 0 and comboNumber <= 4 )
             {
                //loop will exit when the comboNumber will become equal to zero
             while(comboNumber != 0)
             {
                  cout<<"Please enter combo number : "<<endl;
                  cin>>comboNumber;

              if(comboNumber == 1)
                {
                comboPrice += 20.00;
                numberOfItemsordered1 += 1;
                cout <<"The meal order is number 1 "<<endl;
                cout<<"Subtotal : "<< comboPrice<<endl<<endl;
                 }
   
                 else if (comboNumber == 2)
                {
                  comboPrice += 30.00;
                  numberOfItemsordered1 += 1;
                  cout <<"The meal order is number 2 "<<endl;
                  cout<<"Subtotal : "<< comboPrice<<endl<<endl;
                }
                else if (comboNumber == 3)
               {
                  comboPrice += 40.00;
                  numberOfItemsordered1 += 1;
                  cout <<"The meal order is number 3 "<<endl;
                  cout<<"Subtotal : "<< comboPrice<<endl<<endl;
                }
                else if( comboNumber == 4)
                {
                comboPrice += 50.00;
                numberOfItemsordered1 += 1;
                cout <<"The meal order is number 4 "<<endl;
                cout<<"Subtotal : "<< comboPrice<<endl<<endl;
                }
                else if(comboNumber==0)
                {
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
    cin>>tipAmount1;
    
     //if tip amount is less then zero it should be Input again till its not greater then zero
    if(tipAmount1 < 0)
    {
        cout<<"Tip amount can't be less then zero , Enter again "<<endl;
        while(tipAmount1 < 0)
        {
        cin>>tipAmount1;
        }
    }
    cout<<endl;
    
    cout<< "Distance to be travelled : "<<endl;
    cin>>DistanceTraveling1;
    
    //if Distance is less then zero it should be Input again till its not greater then zero
    if(DistanceTraveling1<0)
    {
        cout<<"Travelling Distance can't be less then zero , Enter again"<<endl;
        while(DistanceTraveling1<0)
        {
            cin>>DistanceTraveling1;
        }
    }
    cout<<endl;
    
    //tax amount will be calculted by this formula
    taxAmount1 = (5.5*comboPrice/100);
    
    //delivery fee wll be caluclated by distance * dollars per mile
    deliveryFee1  = DistanceTraveling1*1.50;

    // total bill will be charged by adding all the calculted amounts 
    totalBill1 = comboPrice + taxAmount1 + deliveryFee1 + tipAmount1 ;
   
    cout<<endl;
    
    //printing bill receipt
    outputFile << "******** BILL RECIEPT 1 ******* " <<endl<<endl;
    outputFile << " Diner Name      " << name << endl;
    outputFile<<fixed<<setprecision(2) << " Items Ordered   $" << numberOfItemsordered << endl;
    outputFile <<fixed<<setprecision(2) << " Subtotal        $" << comboPrice << endl ;
    outputFile <<fixed<<setprecision(2)<< " Delivery Fee    $" << deliveryFee << endl;
    outputFile <<fixed<<setprecision(2)<<fixed<<setprecision(2)<< " Total Bill      $" << totalBill << endl<<endl;
    outputFile<<  "********* THANK YOU ********** " <<endl<<endl;
    outputFile.close();
    }// end of (if == 1 )

    if(options == 2)
        {
         cout << " Welcome to Speedy Steve’s Slices. " <<endl;
         
         cout << " Welcome to Danny’s Diner Dash \n 1. Combo Number 1 - $5.00 \n 2. Combo Number 2 - $10.00 \n 3. Combo Number $15.00 \n 4. Combo Number 4 - $20.00 \n 0. Complete Order " <<endl;
         
         while(steveFile >> numRead)
         {
             cout<< " comboNumber  : " << comboNub++ << " " << numRead <<endl ;
         }
             if(comboNumber1 > 0 and comboNumber1 <= 4 )
             {
                //loop will exit when the comboNumber will become equal to zero
             while(comboNumber1 != 0)
             {
                  cout<<"Please enter combo number : "<<endl;
                  cin>>comboNumber1;

              if(comboNumber1 == 1)
                {
                comboPrice1 += 20.00;
                numberOfItemsordered1 += 1;
                cout <<"The meal order is number 1 "<<endl;
                cout<<"Subtotal : "<< comboPrice1<<endl<<endl;
                 }
   
                 else if (comboNumber1 == 2)
                {
                  comboPrice1 += 30.00;
                  numberOfItemsordered1 += 1;
                  cout <<"The meal order is number 2 "<<endl;
                  cout<<"Subtotal : "<< comboPrice1<<endl<<endl;
                }
                else if (comboNumber1 == 3)
               {
                  comboPrice1 += 40.00;
                  numberOfItemsordered1 += 1;
                  cout <<"The meal order is number 3 "<<endl;
                  cout<<"Subtotal : "<< comboPrice1<<endl<<endl;
                }
                else if( comboNumber1 == 4)
                {
                comboPrice1 += 50.00;
                numberOfItemsordered1 += 1;
                cout <<"The meal order is number 4 "<<endl;
                cout<<"Subtotal : "<< comboPrice1<<endl<<endl;
                }
                else if(comboNumber1==0)
                {
                comboNumber1=0;
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
    cin>>tipAmount1;
    
     //if tip amount is less then zero it should be Input again till its not greater then zero
    if(tipAmount1 < 0)
    {
        cout<<"Tip amount can't be less then zero , Enter again "<<endl;
        while(tipAmount1 < 0)
        {
        cin>>tipAmount1;
        }
    }
    cout<<endl;
    
    cout<< "Distance to be travelled : "<<endl;
    cin>>DistanceTraveling1;
    
    //if Distance is less then zero it should be Input again till its not greater then zero
    if(DistanceTraveling1<0)
    {
        cout<<"Travelling Distance can't be less then zero , Enter again"<<endl;
        while(DistanceTraveling1<0)
        {
            cin>>DistanceTraveling1;
        }
    }
    cout<<endl;
    
    //tax amount will be calculted by this formula
    taxAmount1 = (5.5*comboPrice/100);
    
    //delivery fee wll be caluclated by distance * dollars per mile
    deliveryFee1  = DistanceTraveling1*1.50;

    // total bill will be charged by adding all the calculted amounts 
    totalBill1 = comboPrice1 + taxAmount1 + deliveryFee1 + tipAmount1 ;
   
    cout<<endl;
    
    //printing bill receipt
    outputFile << "******** BILL RECIEPT2 ******* " <<endl<<endl;
    outputFile << " Diner Name      " << name << endl;
    outputFile<<fixed<<setprecision(2) << " Items Ordered   $" << numberOfItemsordered1 << endl;
    outputFile <<fixed<<setprecision(2) << " Subtotal        $" << comboPrice1 << endl ;
    outputFile <<fixed<<setprecision(2)<< " Delivery Fee    $" << deliveryFee1 << endl;
    outputFile <<fixed<<setprecision(2)<<fixed<<setprecision(2)<< " Total Bill      $" << totalBill1 << endl<<endl;
    outputFile<<  "********* THANK YOU ********** " <<endl<<endl;
    outputFile.close();

    }// end of (if == 2 )
    
    if(options == 3)
        {
         cout << " Welcome to Barry’s Buffalo Buffet " <<endl;
         
          if(barryFile.fail())
         {
        cout<<" Error while opening the file "<<endl;
        return 1;
         }
          
         while(barryFile >> numRead)
         {
             cout<< " comboNumber  : " << comboNub++ << " " << numRead <<endl ;
         }
             if(comboNumber2 > 0 and comboNumber2 <= 4 )
             {
                //loop will exit when the comboNumber will become equal to zero
             while(comboNumber2 != 0)
             {
                  cout<<"Please enter combo number : "<<endl;
                  cin>>comboNumber2;

              if(comboNumber2 == 1)
                {
                comboPrice2 += 20.00;
                numberOfItemsordered2 += 1;
                cout <<"The meal order is number 1 "<<endl;
                cout<<"Subtotal : "<< comboPrice2<<endl<<endl;
                 }
   
                 else if (comboNumber2 == 2)
                {
                  comboPrice2 += 30.00;
                  numberOfItemsordered2 += 1;
                  cout <<"The meal order is number 2 "<<endl;
                  cout<<"Subtotal : "<< comboPrice2<<endl<<endl;
                }
                else if (comboNumber2 == 3)
               {
                  comboPrice += 40.00;
                  numberOfItemsordered2 += 1;
                  cout <<"The meal order is number 3 "<<endl;
                  cout<<"Subtotal : "<< comboPrice2<<endl<<endl;
                }
                else if( comboNumber2 == 4)
                {
                comboPrice2 += 50.00;
                numberOfItemsordered2 += 1;
                cout <<"The meal order is number 4 "<<endl;
                cout<<"Subtotal : "<< comboPrice2<<endl<<endl;
                }
                else if(comboNumber2==0)
                {
                comboNumber2=0;
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
    cin>>tipAmount2;
    
     //if tip amount is less then zero it should be Input again till its not greater then zero
    if(tipAmount2 < 0)
    {
        cout<<"Tip amount can't be less then zero , Enter again "<<endl;
        while(tipAmount2 < 0)
        {
        cin>>tipAmount2;
        }
    }
    cout<<endl;
    
    cout<< "Distance to be travelled : "<<endl;
    cin>>DistanceTraveling2;
    
    //if Distance is less then zero it should be Input again till its not greater then zero
    if(DistanceTraveling2<0)
    {
        cout<<"Travelling Distance can't be less then zero , Enter again"<<endl;
        while(DistanceTraveling2<0)
        {
            cin>>DistanceTraveling2;
        }
    }
    cout<<endl;
    
    //tax amount will be calculted by this formula
    taxAmount2 = (5.5*comboPrice2/100);
    
    //delivery fee wll be caluclated by distance * dollars per mile
    deliveryFee2  = DistanceTraveling2*1.50;

    // total bill will be charged by adding all the calculted amounts 
    totalBill2 = comboPrice2 + taxAmount2 + deliveryFee2 + tipAmount2 ;
   
    cout<<endl;
    
    //printing bill receipt
   // outputFile.open ("output.txt");
    outputFile << "******** BILL RECIEPT3 ******* " <<endl<<endl;
    outputFile << " Diner Name      " << name << endl;
    outputFile<<fixed<<setprecision(2) << " Items Ordered   $" << numberOfItemsordered2 << endl;
    outputFile <<fixed<<setprecision(2) << " Subtotal        $" << comboPrice << endl ;
    outputFile <<fixed<<setprecision(2)<< " Delivery Fee    $" << deliveryFee2 << endl;
    outputFile <<fixed<<setprecision(2)<<fixed<<setprecision(2)<< " Total Bill      $" << totalBill2 << endl<<endl;
    outputFile<<  "********* THANK YOU ********** " <<endl<<endl;
    outputFile.close();
    }// end of (if == 3 )

    

    } // big while loop not to touch till the end 
    return 0;
}