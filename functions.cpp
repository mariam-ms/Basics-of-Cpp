//function is a reusable block of code


void function (); //should be declared above before the main function 
  introduceMe();

void main () {
  string name1,city1,age1;
  
  cout<<"hello world";
function();
  
  cout<<"your name :"
   cin>>name1;
  cout<<"your city :"
   cin>>city1;
  cout<<"your age :"
   cin>>age1;
  
  
  introduceMe(name1, city1, age1);
  
}
// (1)
void function(){
cout<<"helloworld";
}

// (2)

void introduceMe(string name, string city ="NYC", int age=0 //to make it defult){
cout<<"my name is"<<name<<endl<<"my city is"<<city;
  if (age!=0)
           cout<<"my age is"<<age;
}





