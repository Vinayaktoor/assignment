 #include<iostream>
  using namespace std;
   
int main(){
   int s1,s2,s3;
   cin>>s1>>s2>>s3;
bool flage=false;

  
    if( s1+s2>=s3 && s2+s3>=s1 && s3+s1>=s2 ){
    cout<<"this triangle is valid"<<endl;
    flage=true;
    }
  else{cout<<"this triangle is inalid";}
  

    if(flage==true){
        if(s1==s2 ||s2==s3 || s3==s1){
            cout<<" isosceles triangle";
        }
        else if(s1==s2 && s2==s3){
            cout<<"equilateral triangle";
        }
        else{
            cout<<"scalene triangle";
        }
    }
      return 0;
}
