// *condtional statement* 


//ternary condtion - guessing program(1)

cout<<"Host Number";
cin>>hostusrnum;
cout<<"Guest Number";
cin>>guestusrnum;

(hostusrnum==guestusrnum) ? cout<<"your guessing is correct!" : cout<<"failed";


//conditional if - even and odd program (2)
/* if/else statement

if (condition)
{ run what's inside this curly brackets if condition is true }
else 
{ and run this if it's false }
*/

int main() {

int num;
couy<<"please enter a number to examine if it's even or odd";
cin>> num;

if(num%2==0)
{ cout<<"number "<<$num<<" is an even number"<<endl;
}
else
{ cout<<"number "<<$num<<" is an odd number"<<endl;
}

cout<<"try one more time.."
  
  return 0;
}

// nested if - triange type program(3)
/* more than if,else inside the body of if 
*/

int main() {
 
 float x,y,z;
  cout<<"enter x,y,z";
  cin>>x>>y>>z;
  
  if (x==y&&y==z)
  {cout <<"this triangle is equailateral;
   }
  
   else 
   { if (x!=y && y!==z && z!=x)
     cout<<"the triangle is scalene ";
    else
         cout<<"the triangle is isosoles ";
   }
}

// switch case - calculator program(4) 
/*we choose the thing that our switching is depending on 
.. if operation is - or + or .. it will get into the desirabel case*/

switch(operations)
{ case '-' :cout<<num1<<operation<<num2<< "="<<num1-num2;break;
 case '+' :cout<<num1<<operation<<num2<< "="<<num1+num2;break;
 case '/' :cout<<num1<<operation<<num2<< "="<<num1/num2;break;
 case '*' :cout<<num1<<operation<<num2<< "="<<num1*num2;break;
case '%' :
 
 bool isNum1int , isNum2int;
 isNum1int=((int)num1==num1)
 isNum2int=((int)num2==num2)
   
   if(isNum1int && isNum2int)
    cout<<num1<<operation<<num2<< "="<<num1%num2;
 else 
   cout<<"this is not valid";
 break;
 
 dafault : cout<<"Not valid operation";
}

// LOOPS - * while *
// itration program (5)

int counter = 100;
while (counter<=500)
{ if (counter%3==0 && counter%5==0)
  cout<<"counter";
 counter++;
 }

// how many digits in this number program (6)

int Number; //number that we will count its digits 
cout<<"Enter Number.."
cin>>number;

if (number==0); //if this digit is zero .. it won't continue to the last of program
cout<<"you have entered 0\n";

else {
 if (number<0) //if my numvber is negative, we should make it positive 
    number*=-1;
  
int counter=0;
while (counter>0)
{ 
  number/=10;
  counter++;
}
  
  cout<<"Number contains"<<counter<<"Digits\n";
  }


//inverting your number program(7)

int invertednumber=0, number;
cout<<"enter your number";
cin>>number; //123
while(number!=0)
  { invertednumber*=10; //0,30,320
   int lastdigit= number%10; //3,2,1
   invertednumber+=lastdigit; //0+3=3 ,30+2=32, 320+1=321 (done .. inverted)
   number/=10; //12,1,0

}

//LOOPS - Do while
// passcode attampts program(8)

int userpin=5555, pin, errorcounter=0;

do {
    cout<<"Enter the pin: ";
    cin>>pin;
  if(pin!=userpin)
    errorcounter++;
  
while(errorcounter<3 && pin!=userpin);
cout<<"loading .. ";
  else
    cout<<"blocked .. ";
}


//LOOPS - for loops
// factorial program(9)

 int number;
  cout<<"Number: ";
     cin>>number;
     int factorial=1;
     for(int i =0; i<=number; i++)
        factorlial*=i;
          cout<<factorial;


// Multiplication table program(10)

for(int i=1; i<=10; i++)
  
{ for (int j=1; j<=10; j++)
  cout<<i<<"*"<<j<<i*j<<endl;
   
 cout<<endl;
}


// draw a rectangle program(11)
 int height;
cout<<"Enter the height :";
cin>>height;
int width;
cout<<"Enter the width :";
cin>>width;
char symbol;
cout<<"Enter the symbol :";
cin>>symbol;
for(int h=0; h<height; h++){
  for(int w=0; w<width;w++)
    cout<<symbol<<endl;
  cout<<endl;
}

// draw a rectangle program(12)
 int length;
cout<<"Enter the length :";
cin>>length;
int width;
cout<<"Enter the width :";
cin>>width;
char symbol;
cout<<"Enter the symbol :";
cin>>symbol;
for(int i=1; i<=lenght; ++){
  for(int w=1; w<=i;w++)
    cout<<symbol<<endl;
  cout<<endl;
}

//nested loop - for and do while loops
// we wanted user to enter 3 grades each grade is between is more than 1 less than 5 and their avrg - program(13)

int grade;
int sum=0;
for(int i =0; i<3; i++)
{ do { 
        cout<<"Enter grade"<<i+1;
       cin>>grade;
}
      while(grade<1 || grade > 5);
     sum+=grade;
}
cout<<"sum"<<sum;
cout<<"avg"<(fload)sum/3;

