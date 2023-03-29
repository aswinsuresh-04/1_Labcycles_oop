#include<iostream>
using namespace std;
int cnt=0;
int cont=0;
class item {
	string  itemname;
	int itemcode;
	float itemprice;
	int itemquantity;
public:
	item(){}
	void getitem(string a,int b,float c,int d){itemname=a;
	itemcode=b;itemprice=c;itemquantity=d;}
	void displayitems(void)
	{
	if(itemquantity != 0){
	cout << itemname << "\t" << itemcode << "\t" <<itemquantity<<"\t\t"<<itemprice
	<< endl;
	}
	}
	int getcode(void){
	return itemcode;
	}
        int getquantity(void){
	return itemquantity;
	}
	float getprice(void){
	return itemquantity*itemprice;
	}
	void changequantity(int x,int y){
	if(x==1){
	itemquantity=itemquantity+y;
	}
	else if(x==2){
	itemquantity=itemquantity-y;
	}
	else if(x==3){
	itemquantity=y;
	}
	}
};

int main() {
	item list[50];item bill[50];
	int choice,ans;
do
{
		cout << "\n\tABC Departmental Store "
			<< "\n1. Add an item \n2. Buy an item "
			<< "\n3. Delete an item \n4. Display Stock "
			<< "\n5. Quit"
			<< "\nPlease choose options from below : ";
		cin>>choice;
		if(choice==1)
                {
		int ad;
		cout << "How many items do you want to add : ";
		cin >> ad;
		int code,quantity;
		string name;
		float price;
		for (int i = 0; i < ad; i++) {
			cout << "Item " << i + 1 << endl;
			cout << "Enter item code : ";
			cin >> code;

			cout << "Enter item name : ";
			cin >> name;

			cout << "Enter item cost : ";
			cin >> price;

			cout << "Enter item quantity : ";
			cin >> quantity;
			list[cont].getitem(name,code,price,quantity);
			cont+=1;
		}
		}
		else if(choice == 2){
		float sum = 0;
		int answer,q,code;
		do{
			cout << "Enter the itemcode which you want to buy : ";
			cin >> code;
			for (int j = 0; j < cont; j++) {
				if(code==list[j].getcode()) {
					cout << "Enter the item quantity : ";
					cin >> q;
					if(q<=list[j].getquantity()){
						list[j].changequantity(2,q);
						bill[cnt]=list[j];
						bill[cnt].changequantity(3,q);
						cnt++;
						}
					else{
					cout<<"Item Out of Stock"<<endl;
					}
				}
			}
		cout<<"Press 1 to enter next item,\nPress 0 to print the bill :";
		cin>>answer;
		}while(answer);

		cout << "\nName \tCode \tQuantity \tCost(per item)"
		<< endl;
		for (int i = 0; i < cnt; i++) {
			bill[i].displayitems();
			sum=sum+bill[i].getprice();
		}
		cout << "Total bill : "<<sum;
		 }
		else if(choice==3){
		int code,q;
		cout << "Enter the itemcode which you want to delete : ";
			cin >> code;
			for (int j = 0; j < cont; j++) {
				if(code==list[j].getcode()) {
					cout << "Enter the item quantity : ";
					cin >> q;
					if(q<=list[j].getquantity()){
						list[j].changequantity(2,q);
					}
					else{
					cout<<"Item Out of Stock"<<endl;
					}
				}
			}
		 }
		else if(choice==4){
		cout << "\nName \tCode \tQuantity \tCost(per item)"  
		<< endl;
		for (int i = 0; i < cont; i++) {
			list[i].displayitems();
		}
		}
		else if(choice==5)
		{
		 break;
		}
		else{
		cout << "Error 404! \tNot found "<<endl;
		}
		cout << "\nDo you want to continue ?(1/0) ";
		cin >> ans;

	} while (ans);
	cout << "Thank you  see again";
	return 0;
}