#include<iostream>
#include<cmath>

 using namespace std;


//addition fuction
 void addition(){
    double num1, num2;

    cout<<"Enter the number 1:"<<endl;
    cin>>num1;

    cout<<"Enter the number 2 :"<<endl;
    cin>>num2;

    double result = num1 + num2;
    cout<<num1 <<" + "<< num2 <<" = "<<result<<endl;
 }

 //subtraction
 void subtraction(){
    double num1, num2;

    cout<<"Enter the number 1:"<<endl;
    cin>>num1;

    cout<<"Enter the number 2 :"<<endl;
    cin>>num2;

    double result = num1 - num2;
    cout<<num1 <<" - "<< num2 <<" = "<<result<<endl;

 }

 //multiplication
 void multiplication(){
    double num1, num2;

    cout<<"Enter the number 1:"<<endl;
    cin>>num1;

    cout<<"Enter the number 2 :"<<endl;
    cin>>num2;

    double result = num1 * num2;
    cout<<num1 <<" * "<< num2 <<" = "<<result<<endl;
 }
 
 //divide
 void divide(){
    double num1, num2;

    cout<<"Enter the number 1:"<<endl;
    cin>>num1;

    cout<<"Enter the number 2 :"<<endl;
    cin>>num2;

    if(num2==0){
        cout<<"Cannot Divide by Zero"<<endl;
        return;
    }


    double result = num1 / num2;
    cout<<num1 <<" / "<< num2 <<" = "<<result<<endl;
 }
 
 //power
 void power(){
    double base, power;

    cout<<"Enter the base :"<<endl;
    cin>>base;

    cout<<"Enter the power :"<<endl;
    cin>>power;

    double result = pow(base,power);

    cout<<base<<"^"<<power<<"="<<result;
 }

 //square
 void square(){
    double num;

    cout<<"Enter the number :"<<endl;
    cin>>num;

    double result = num*num;
    cout<<"square ="<<result<<endl;
 }

 //square root
 void squareRoot(){

    double num;
    cout<<"Enter the number :"<<endl;
    cin>>num;

    if(num>=0){

    double result = sqrt(num);
    cout<<"square root = "<<result<<endl;
    }
    else{
        cout<<"Can't operate :"<<endl;
    }

 }

 int main(){

    int choice;

    do{

    cout<<endl<<"========CALCULATOR========="<<endl;
    
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Power "<<endl;
    cout<<"6. Square"<<endl;
    cout<<"7. Square Root"<<endl;
    cout<<"8. EXIT"<<endl;

    cout<<"ENTER YOUR CHOICE"<<endl;
    cin >> choice;

    switch(choice){

        case 1:
           addition();
           break;

        case 2:
        subtraction();
        break;
        
        case 3:
        multiplication();
        break;

        case 4:
        divide();
        break;

        case 5:
        power();
        break;

        case 6:
        square();
        break;

        case 7:
        squareRoot();
        break;

        case 8:
        cout<<"THANK YOU"<<endl;
        break;

        default:
        cout<<"INVALID CHOICE"<<endl;

    }

}

while(choice!=8);


    return 0;
 }