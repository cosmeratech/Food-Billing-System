#include <iostream>
using namespace std;
int main() {
    int returnTotalBill(void);
int totalBill=returnTotalBill();
cout<<"Your total Bill Amount is : "<<totalBill<<endl;
cout<<"Thank You for your order!"<<endl;
}

int returnTotalBill(){
    char c;
    char item;
    char chineseFood;
    int billAmount=0;
    char selectAgain;
    char italianFood;
    cout<<"******** Welcome to Online Food Order ********"<<endl;
    cout<<"Please follow below instructions!"<<endl;
    cout<<"Step 1: Please press o to start your order"<<endl;
    cout<<"Step 2: You can order only Veg food item"<<endl;
    cout<<"Step 3: Please press a to select Chinese Food Items"<<endl;
    cout<<"Step 4: Please press b to select Italian Food Items"<<endl;
    cout<<"Step 5: You'll receive your final bill after your order gets placed!"<<endl;
    start:
    cin>>c;
    if(c=='o' || c=='O'){
    items:
    cout<<"Please select your choice"<<endl;
    cout<<"(a) Chinese Food      (b) Italian Food"<<endl;  
    cin>>item;
    if(item=='a' || item=='A') {

    // Chinese Food Items :

    chineseFoodList:
    cout<<"Please select 1, 2, 3 as per your choice :"<<endl;
    cout<<"(1) Noodles : Price : Rs- 250"<<endl;
    cout<<"(2) Chow Mein : Price : Rs- 210"<<endl;
    cout<<"(3) Fried rice : Price : Rs- 199"<<endl;

    cin>>chineseFood;
    if(chineseFood=='1'){
        billAmount=billAmount+250;
    }
    else if(chineseFood=='2'){
        billAmount=billAmount+210;
    }
    else if(chineseFood=='3'){
        billAmount=billAmount+199;
    }
    else{
        cout<<"You have entered wrong value, Please try again!"<<endl;
        goto chineseFoodList;
    }
    cout<<"Do you want to add more chinese food items, y or n ?"<<endl;
    cin>>selectAgain;
    if(selectAgain=='y'){
        goto items;
    }
    else{
        return billAmount;
    }
    } 

    // Italian Food Items :

    else if(item=='b' || item=='B'){
    italianFoodList:
    cout<<"Please select 1, 2, 3 as per your choice :"<<endl;
    cout<<"(1) Arugula Pizza : Price : Rs- 300"<<endl;
    cout<<"(2) Pasta Carbonara : Price : Rs- 310"<<endl;
    cout<<"(3) Mushroom Risotto : Price : Rs- 299"<<endl;

    cin>>italianFood;
    if(italianFood=='1'){
        billAmount=billAmount+300;
    }
    else if(italianFood=='2'){
        billAmount=billAmount+310;
    }
    else if(italianFood=='3'){
        billAmount=billAmount+299;
    }
    else{
        cout<<"You have entered wrong value, Please try again!"<<endl;
        goto italianFoodList;
    }
    cout<<"Do you want to add more italian food items, y or n ?"<<endl;
    cin>>selectAgain;
    if(selectAgain=='y'){
        goto items;
    }
    else{
        return billAmount;
    }   

    }   
    else{
        cout<<"You have entered wrong value, Please try again!"<<endl;
        goto items;
    } 

    }
    else{
        cout<<"You have entered wrong value, Please press o!"<<endl;
        goto start;
    }
    return billAmount;
}