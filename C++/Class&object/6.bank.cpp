/*6. Define a class to represent a bank account. Include the following members:
 Data Member: 
  -Name of the depositor
 -Account Number
 -Type of Account
 -Balance amount in the account
 Member Functions :
 -To assign values
 -To deposited an amount
 -To withdraw an amount after checking balance
 -To display name and balance */ 
 #include<iostream>
 #include<string.h>
 using namespace std;
 class bank
 {
        string depo_name,type_ac;
        long long amount;
        public:
        void input_data()
        {
            cout<<"Entet a name "<<endl;
            cin>>depo_name;
            cout<<"Enter a amont"<<endl;
            cin>>amount;
        }


 };
 main()
 {
     bank cus1;
     cus1.input_data();
 }