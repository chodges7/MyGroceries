#include<iostream>
#include<vector>
using namespace std;

int main()
{
  char input;
  vector <string> list;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if( input == 'a' || input == 'A' )
    {
      string item;
      cout<<"What item? ";
      cin.ignore();
      getline(cin,item);
      list.push_back(item);
    }
  }while( input != 'q' && input != 'Q' );

  if(list.size() == 0){
    cout << "there are no items on the list.\n";
  }
  else{
    for(int x = 0; x < (int)list.size(); x++){
      cout << x + 1 << ") " << list[x] << endl;
    }
  }
  return 0;
}
