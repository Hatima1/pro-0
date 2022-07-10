#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
       cout<<" 1-exercise number 1\n";
       cout<<" 2-exercise number 2\n";
       cout<<" 3-exercise number 3\n";
       cout<<" 4-exercise number 4\n";
      cout<<" Please Enter exercise number you want:";
      int a;
      cin>> a;
      cout<<""<<endl;
      switch(a){
  case 1:{
      cout<<"1-Find the perimeter of a circle\n";
      cout<<"2-The area of a circle and the area of triangle if the radius is equal the side then find the two area\n";
      cout<<"3-Student card\n";
      cout<<"Select the question:";
      int x;
      cin>>x;
      cout<<""<<endl;
      switch (x){
          case 1:{

        cout<<"enter the length of the diameter:";//c=diam..//
      float c;
      cin>>c;  cout<<""<<endl;
      float f=c*M_PI;
      cout<<"Circumference of circle="<<f<<"CM";
      cout<<""<<endl;

      break;
      }
      case 2:{
         cout<<"enter the radius of the circle:";//c=n8//
      float c;
      cin>>c;
      float e=c*c*M_PI; //e=circle area
      cout<<"A- Circle area = "<<e<<"cm^2"<<endl;
      float t=c*c*sqrt(3)/4;
      cout<<"B- Area of triangle = "<<t<<"cm^2"<<endl;//t=area of triang
      float sum=e+t;
      cout<<"C- the sum of tow area  ="<<sum<<endl;

      break;
      }
      case 3:{
            string nam,n,n2,n3;
      cout<<"enter the name : ";
      cin>>nam>>n>>n2>>n3;
       string lev;
      cout<<"enter academic level : ";
      cin>>lev;
       string fa;
      cout<<"enter faculty name: ";
      cin>>fa;
      string id;
      cout<<"enter university ID : ";
      cin>>id;
      string st;
      cout<<"enter the state : ";
      cin>>st;
      cout<<""<<endl;
       cout<<"              University OF KHARTOM        "<<endl;
      cout<<"                   2019-2020        "<<endl;

       cout<<"              Name          :"<<nam<<" "<<n<<" "<<n2<<" "<<n3<<" "<<endl;
       cout<<"              Academic level:"<<lev<<endl;
       cout<<"              Faculty:"<<fa<<endl;
       cout<<"              University ID:"<<id<<endl;
       cout<<"             The state:"<<st<<endl;
       break;


      }
       default:{cout<<"try agen";}
       }
      break;
  }





  case 2:
    {
        cout<<"1-Slove second-degree equations\n";
         cout<<"2-Week day\n";
         cout<<"3-the area of a triangle such that sum of any tow sides is greater than the third\n";
         int b;
         cout<<"Select the question number";
         cin>>b;
         switch(b){
             case 1:{
             cout<<" a*x^2+b*x+c =0\n";
        int a ,b,c,d;
        float x1,x2,sd;
            cout<<"enter a = ";
            cin>>a;
            cout<<"enter b = ";
            cin>>b;
            cout<<"enter c = ";
            cin>>c;
            d=(b*b)-4*a*c;//momyz dalta
            cout <<"dalta="<<d<<endl;
             if(d>0){
                            sd=sqrt(d);
            x1=((-1*b)+(sd))/(2*a);
             x2=((-1*b)-(sd))/(2*a);
             cout<<"Equations has 2 solutions :"<<endl;
             cout<<"x 1="<<x1<<endl;
             cout<<"x 2="<<x2;


            }
            else{
                if(d==0){
                    x1=((-1*b)+(sd))/(2*a);
                     cout<<"Equations has one solutions x1=x2:"<<endl;
                    cout<<"x1,x2="<<x1<<endl;

                }
                else{
                        cout<<"no solutions";

                }
            }
            break;
             }

         case 2:{
             cout<<""<<endl;
                cout<<"Enter a number for weak day:";
         int w;
         cin>> w;
         if(w==1){
            cout<<"the day is Sunday";}
            else{
                if(w==2){
                        cout<<"the day is Monday \n";

                }
                else if(w==3){
                    cout<<"the day is Tuesday \n";
                }
                else if(w==4){
                    cout<<"the day is Wednesday \n";
                }
                else if(w==5){
                    cout<<"the day is Thursday \n";
                }
                else if(w==6){
                    cout<<"the day is Friday \n";
                }
                else if(w==7){
                    cout<<"the day is Saturday \n";
                }
                else{

                    cout <<"sorry there is only 7 day in the week";}
            }
            break;
         }
         case 3:{
                float a,b,c,area,g;
            cout<<"Enter lengths number 1 =";
         cin>>a;
          cout<<"Enter lengths number 1 =";
         cin>>b;
          cout<<"Enter lengths number 3 =";
         cin>>c;
         if(a+b>c){
             float g=(a+b+c)/2;//g=(motwset almhet),almhet=a+b+c
         float area=(g*(g-a)*(g-b)*(g-c));
         float farea=sqrt(area);//finel area
            cout <<"the area of triangle = "<<farea;
         }
         else{
            if(a+c>b){
                     float g=(a+b+c)/2;//g=(motwset almhet),almhet=a+b+c
         float area=(g*(g-a)*(g-b)*(g-c));
         float farea=sqrt(area);//finel area
            cout <<"the area of triangle = "<<farea;

            }
            else if(c+b>a){ float g=(a+b+c)/2;//g=(motwset almhet),almhet=a+b+c
         float area=(g*(g-a)*(g-b)*(g-c));
         float farea=sqrt(area);//finel area
            cout <<"the area of triangle = "<<farea;

            }
            else{
                cout<<"It is not a triangle";
            }
         }

            }

                }
                break;

                 }




  case 3:{
    cout<<"1-week day with switch\n";
         cout<<"2-Bank transactions\n";
         int c;
         cout<<"Select the question number:";
             cin>>c;
             cout<<"\n";
             switch(c){
                 case 1:{
                    int a;
                  cout<<"enter a number for weak day:";
             cin>> a;
             switch(a){
             case 1:{
                 cout<<"the day is Sunday";
                 break;

             }
             case 2:{
                  cout<<"the day is Monday";
                  break;

             }
             case 3:{
                  cout<<"the day is Tuesday";
                  break;
             }
             case 4:{
                  cout<<"the day is Wendnesday";
                    break;
             }
             case 5:{
                  cout<<"the day is Thursday";
                  break;
             }
             case 6:{
                  cout<<"the day is Friday";
                    break;

             }
             case 7:{
                  cout<<"the day is Saturday";
                    break;
             }

              }
              break;
             }


        case 2:{
            int x;
                cout<<"1-CASHING\n";
                 cout<<"2-RECEIPT\n";
                  cout<<"3-CREADITS\n";
                   cout<<"4-OPEN AN ACCOUNT\n";
                    cout<<"enter the transaction:";
                    cin>>x;
                    switch(x){
                        case 1:{int p,f; string o,m;
                        cout<<""<<endl;
                        cout<<"Pleas enter the paswerd:";
                        cin>>p;
                        cout<<"Enter the money you went:";
                        cin>>m;
                        cout<<"Enter 1 if you went cash or 2 if you want cheek:";
                        cin>>f;
                        switch(f){
                            case 1:{
                                cout<<endl;
                                cout<<"        date:12/11/2020"<<endl;
                                cout<< "   "<< m <<" on "<<"cash"<<" was withdrawn from your account";
                        }break;
                        case 2:{
                             cout<<endl;
                                cout<<"       date:12/11/2020"<<endl;
                                cout<<"    "<< m <<" on "<<"cheek"<<" was withdrawn from your account"<<endl;
                                cout<<"";


                        }
                        }



                        break;
                        }
                        case 2:{int f; string t;//f=if,t=nothing
                        cout<<""<<endl;
                        cout<<"Pleas enter transfer number:";
                        cin>>t;
                        cout<<"Enter 1 if you went cash or 2 if you went cheek:";
                        cin>>f;
                        switch(f){
                            case 1:{
                                cout<<endl;
                                cout<<"        date:12/11/2020"<<endl;
                                cout<< "       you received a cash amount from another account";

                        }break;
                        case 2:{
                             cout<<endl;
                                cout<<"       date:12/11/2020"<<endl;
                                cout<<"       you received a cheek amount from another account"<<endl;
                                cout<<"";


                        }
                        }



                        break;

                        }
                        case 3:{cout<<"nothing";
                        break;
                        }cout<<""<<endl;
                        case 4:{int a; string n,n2,b,n3,n4;
                            cout<<" 1-An account that deals with Dollars"<<endl;
                            cout<<" 2-An account that deals with Saudi riyal"<<endl;
                            cout<<" 3-An account that deals with Sudanese pound"<<endl;
                            cout<<" 4-An account that deals with UAE Dirham"<<endl;
                            cout<<" 5-An account that deals with uero"<<endl;
                            cout<<"Enter number account you went:";
                            cin>>a;
                            switch (a){
                            case 1:{cout<<"1-enter your name:"<<n;
                           cin>>n>>n2>>n3>>n4;
                            cout<<"2-Enter account types you went (current account or savings account or deposit account):"<<b;
                            cin>>b;
                            cout<<""<<endl;
                             cout<<"         name               :"<< n<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
                            cout<<"          Account Type            :"<<b<<endl;
                             cout<<"         your account deals with : Dollars"<<endl;}


                            case 2:{cout<<"1-enter your name:"<<n;
                           cin>>n>>n2>>n3>>n4;
                            cout<<"2-Enter account types you went (current account or savings account or deposit account):"<<b;
                            cin>>b;
                            cout<<""<<endl;
                             cout<<"         name               :"<< n<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
                            cout<<"          Account Type            :"<<b<<endl;
                             cout<<"         your account deals with : Saudi riyal"<<endl; }break;


                            case 3:{cout<<"1-enter your full name :"<<n;
                           cin>>n>>n2>>n3>>n4;
                            cout<<"2-Enter account types you went (current account or savings account or deposit account):"<<b;
                            cin>>b;
                            cout<<""<<endl;
                             cout<<"         name               :"<< n<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
                            cout<<"          Account Type            :"<<b<<endl;
                             cout<<"         your account deals with : Sudanese pound"<<endl; break;}


                            case 4:{cout<<"1-enter your name:"<<n;
                           cin>>n>>n2>>n3>>n4;
                            cout<<"2-Enter account types you went (current account or savings account or deposit account):"<<b;
                            cin>>b;
                            cout<<""<<endl;
                             cout<<"         name               :"<< n<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
                            cout<<"          Account Type            :"<<b<<endl;
                             cout<<"         your account deals with : UAE Dirham"<<endl;break;}
                              case 5:{cout<<"1-enter your name:"<<n;
                           cin>>n>>n2>>n3>>n4;
                            cout<<"2-Enter account types you went (current account or savings account or deposit account):"<<b;
                            cin>>b;
                            cout<<""<<endl;
                            cout<<"         name               :"<< n<<" "<<n2<<" "<<n3<<" "<<n4<<endl;
                            cout<<"          Account Type            :"<<b<<endl;
                             cout<<"         your account deals with :  uero"<<endl;break;}




                            }




                        }

                        }

                    }//bank

                }//q.n
  break;

  }//ex n.3





  case 4:{
       cout<<"1- 4 circle area  and average of their results \n";
         cout<<"2- develop program 1 so that you enters the circle number\n";
         int d;
         b:
         cout<<"Select the question number:";
             cin>>d;
             cout<<""<<endl;
             switch (d){
             case 1:{
                    float a, b, c ,d,r,t,y,u,i;
                cout<<"A-Enter the radius of the first circle:";//a,b,c,d =radius , r,t,y,u= area
                    cin>>a;
             cout<<"B-Enter the radius of the second circle:";
                    cin>>b;
                    cout<<"C-Enter the radius of the third circle:";
                    cin>>c;
                    cout<<"D-Enter the radius of the fourth circle:";
                    cin>>d;
                    cout<<""<<endl;

                    r=a*a*M_PI;
                    cout<<"Circle area number one ="<<r<<endl;
                    t=b*b*M_PI;
                    cout<<"Circle area number two ="<<t<<endl;
                    y=c*c*M_PI;
                    cout<<"Circle area number three ="<<y<<endl;
                    u=d*d*M_PI;
                    cout<<"Circle area number four ="<<u<<endl;
                    i=r+t+y+u/4;
                    cout<<"Average results for circle areas ="<<i; //i=average result//
                    break;}







             case 2:{
                 float e,a,r,m,f,av;//a=circle num,f=t5zen al area,m=area,r=radius
                 e=1;
                 f=0;
             cout<<"enter circle number:";
             cin>>a;
             while(e<=a){

                cout<<"enter radius circle number"<<e<<"=";
             cin>>r;
             m=r*r*3.14;
             cout <<"Circle area="<<m<<endl;
             e++;
             f=f+m;

             }
              av=f/(e-1);
             cout<<"Average results for circle="<<av<<endl;

             }
             break;

   default:{cout<<"                Please choose from the given questions:)";
   cout<<""<<endl; goto b;}

   }
   }//ex.4

      }//big switch

      }//main





                        }

                        }


                    }


                }

  break;

  }





  case 4:{
       cout<<"1-circle and mus\n";
         cout<<"2-dev\n";//dfgdfg
         int d;
         cout<<"enter qes num :";
             cin>>d;
             switch (d){
             case 1:{
                    float a, b, c ,d,r,t,y,u,i;
                cout<<"A-Enter the radius of the first circle:";
                    cin>>a;
             cout<<"B-Enter the radius of the second circle:";
                    cin>>b;
                    cout<<"C-Enter the radius of the third circle:";
                    cin>>c;
                    cout<<"D-Enter the radius of the fourth circle:";
                    cin>>d;
                    r=a*a*3.14;
                    cout<<"Circle area number one ="<<r<<endl;
                    t=b*b*3.14;
                    cout<<"Circle area number two ="<<t<<endl;
                    y=c*c*3.14;
                    cout<<"Circle area number three ="<<y<<endl;
                    u=d*d*3.14;
                    cout<<"Circle area number four ="<<u<<endl;
                    i=r+t+y+u/4;
                    cout<<"Average results for circle areas ="<<i;


                    break;
             }
             case 2:{
                 float e,a,r,m,f,av;
                 e=1;
                 f=0;
             cout<<"enter circle number:";
             cin>>a;
             while(e<=a){

                cout<<"enter radius circle number"<<e<<"=";
             cin>>r;
             m=r*r*3.14;
             cout <<"Circle area="<<m<<endl;
             e++;
              f=f+m;
              av=m/(e-1);
             }

             cout<<"Average results for circle="<<av<<endl;

             }
             break;

  }

      }
      }

}



