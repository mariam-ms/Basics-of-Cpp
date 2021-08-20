/* if/else statement

if (condition)
{ run what's inside this curly brackets if condition is true }
else 
{ and run this if it's false }
*/

//even and odd program(1)

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

// nested if - triange type program (2)

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



