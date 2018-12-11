
// OUT LINE PROGRAMME DONE BY - BIBIN LUKOSE

#include <iostream>                     // Header files including 
#include <string>

using namespace std; 

string BookDetails[100][8];             //  BIBIN : string declaration for storing book details.
string BookIssueReturn[100][6];         //  BIBIN : string declaration for storing book issue and return details.
int BookCount=0;                        //  BIBIN : counting total book numbers.

/*
struct Date                             //  BIBIN : Structure for date
{
    int day;
    int month;
    int year;
};
*/

struct Book                             //  BIBIN : Structure for book details.
{
    string BookId;
    string BookName;
    string BookAuthor;
    string BookISBN;
    string BookCategory;
    string BookQuantity;
    string BookPrice;
    string BookRackNo;
};


struct IssueReturnDetails               //  BIBIN : Structure for Book Issue and return.
{
    int StudentID;
    string StudentName;
    string BookId;
    int BookTime;
   
   
 
};


void AddBooks()                         //   BIBIN : Function for Adding books.              
{
    while (1 == 1)                      //  BIBIN : Displaying Options for different purpose. 
    {
        int CatOption, Flag=0;
        char MoreData;
        Book AddNewBook {"0","0","0","0","0","0","0","0"};

        if(BookCount>=0 && BookCount<100)
        {
            system("cls");
            cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||              ADDING NEW BOOK RECORD             |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n";

            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||               SELECT BOOK CATEGORY              |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||         1.  COMPUTER                            |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||         2.  ELECTRONICS                         |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||         3.  ELECTRICAL                          |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||         4.  CIVIL                               |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||         5.  MECHANICAL                          |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
            cout << "                  ENTER THE CATEGORY NUMBER  : \a";
            cin >> CatOption;
            cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

            switch (CatOption)
            {
                case 1  :   AddNewBook.BookCategory="COMPUTER";
                            AddNewBook.BookRackNo="1";
                            break;
                case 2  :   AddNewBook.BookCategory="ELECTRONICS";
                            AddNewBook.BookRackNo="2";
                            break;
                case 3  :   AddNewBook.BookCategory="ELECTRICAL";
                            AddNewBook.BookRackNo="3";
                            break;
                case 4  :   AddNewBook.BookCategory="CIVIL";
                            AddNewBook.BookRackNo="4";
                            break;
                case 5  :   AddNewBook.BookCategory="MECHANICAL";
                            AddNewBook.BookRackNo="5";
                            break;
                default :   cout << "\n\n\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                            cout << "   |||||||||||                                                 |||||||||||\n";
                            cout << "   |||||||||||         YOU ENTERED WRONG INPUT ! . . .         |||||||||||\n";
                            cout << "   |||||||||||                                                 |||||||||||\n";
                            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n \a";
                            system("pause");
                            continue;
            }

            cout << "                         ENTER BOOK ID       : \a";
            cin >> AddNewBook.BookId;
            cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

            for(int i=0; i<BookCount;i++)
            {
                if(AddNewBook.BookId==BookDetails[i][0])
                {
                    cout << "\n\n\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                    cout << "   |||||||||||                                                 |||||||||||\n";
                    cout << "   |||||||||||         THE BOOK ID IS ALREADY EXIST !          |||||||||||\n";
                    cout << "   |||||||||||    UPDATE BOOK DETAILS FROM THE MAIN MENU !     |||||||||||\n";
                    cout << "   |||||||||||                                                 |||||||||||\n";
                    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n \a";
                    
                    Flag=1;
                    break;
                }
            }
                
            if(Flag==0)                                                                                             //  Reading book details for storing.
            {
                cout << "                       ENTER BOOK NAME       : \a";
                cin >> AddNewBook.BookName;
                cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
                    
                cout << "                       ENTER BOOK AUTHOR     : \a";
                cin >> AddNewBook.BookAuthor;
                cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
                    
                cout << "                       ENTER BOOK ISBN       : \a";
                cin >> AddNewBook.BookISBN;
                cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

                cout << "                       ENTER BOOK QUANTITY   : \a";
                cin >> AddNewBook.BookQuantity;
                cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

                cout << "                       ENTER BOOK PRICE      : \a";
                cin >> AddNewBook.BookPrice;
                cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";


                BookDetails[BookCount][0]=AddNewBook.BookId;                                                        //  Storing data to the array.
                BookDetails[BookCount][1]=AddNewBook.BookName;
                BookDetails[BookCount][2]=AddNewBook.BookAuthor;
                BookDetails[BookCount][3]=AddNewBook.BookCategory;
                BookDetails[BookCount][4]=AddNewBook.BookISBN;
                BookDetails[BookCount][5]=AddNewBook.BookQuantity;
                BookDetails[BookCount][6]=AddNewBook.BookPrice;
                BookDetails[BookCount][7]=AddNewBook.BookRackNo;

                BookCount++;

                system("cls");
                cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";         //  Displaying new added data to the user.
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||      NEW BOOK RECORD ADDED SUCESSFULLY !        |||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||                 NEW BOOK DETAILS                |||||||||||\n";
                cout << "   |||||||||||                 ================                |||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK ID             :   " << AddNewBook.BookId <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK NAME           :   " << AddNewBook.BookName <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK AUTHOR         :   " << AddNewBook.BookAuthor <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK CATEGORY       :   " << AddNewBook.BookCategory <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK ISBN           :   " << AddNewBook.BookISBN <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK QUANTITY       :   " << AddNewBook.BookQuantity <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK PRICE          :   " << AddNewBook.BookPrice <<" $ \n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK RACK NO        :   " << AddNewBook.BookRackNo <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n \a";
            }
        }
        else
        {
            cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";                 //  Showing a message if the memmory got full.
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||                  MEMORY FULL !                  |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n \a";
        }

        cout<<"\n\n    DO YOU WANT TO ENTER MORE BOOK DETAILS ! ( Y / N ) : \a";
        cin>>MoreData;

        if(MoreData=='Y' || MoreData=='y')
        {
            continue;
        }
        else if(MoreData=='N' || MoreData=='n')
        {
            break;
        }
        else
        {
            cout << "\n\n\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||         YOU ENTERED WRONG INPUT ! . . .         |||||||||||\n";
            cout << "   |||||||||||                                                 |||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n \a";
            system("pause");
            break;
        }
    }   

}


void DeleteBooks() //Alma Pathrose
{
    string DelBId;
    char a;
    int i,j,k;
    int DeleteFlag=0;
    while(1==1)
    {
        system("cls");
        cout << "\nEnter Book ID for Delete: ";
        cin>>DelBId;
        if(BookCount>0)
        {
            for (i=0;i<BookCount;i++)
            {
                if(DelBId==BookDetails[i][0])
                {
                    cout<<"\n\n********************************************"<<endl;
                    cout<<"               BOOK DETAILS"<<endl;
                    cout<<"********************************************"<<endl<<endl;
                    cout<<"      BOOK ID         :"<<BookDetails[i][0]<<endl<<endl;
                    cout<<"      BOOK NAME       :"<<BookDetails[i][1]<<endl<<endl;
                    cout<<"      BOOK AUTHOR NAME:"<<BookDetails[i][2]<<endl<<endl;
                    cout<<"      BOOK CATEGORY   :"<<BookDetails[i][3]<<endl<<endl;
                    cout<<"      BOOK ISBN       :"<<BookDetails[i][4]<<endl<<endl;
                    cout<<"      BOOK QUANTITY   :"<<BookDetails[i][5]<<endl<<endl;
                    cout<<"      BOOK PRICE      :"<<BookDetails[i][6]<<endl<<endl;
                    cout<<"      BOOK RACK NUMBER:"<<BookDetails[i][7]<<endl<<endl;
                    cout<<"********************************************\n"<<endl<<endl;
                    cout<<"\n ARE YOU SURE TO DELETE THIS BOOK RECORD(Y/N)? : ";
                   
                    cin>>a;
                    if(a=='y'||a=='Y')
                    {
                        for(j=i;j<=BookCount;j++)
                        {
                            for(k=0;k<8;k++)
                            { 
                                BookDetails[j][k]=BookDetails[j+1][k];
                            }  
                        }     
                                      
                        BookCount--;
                        cout<<"\n********************************************"<<endl;
                        cout<<"***          DELETED  SUCESSFULLY        ***"<<endl;
                        cout<<"********************************************"<<endl<<endl;
                    
                        DeleteFlag=0;
                        break;
                    }
                    else if(a=='n'||a=='N')
                    {
                        DeleteFlag=0;
                        break; 
                    }
                    else
                    {
                        DeleteFlag=0;
                        cout<<"\n********************************************"<<endl;
                        cout<<"***              INVALID ENTRY           ***"<<endl;
                        cout<<"********************************************"<<endl<<endl;
                        break;
                    }   
                            
                }
                else
                {
                    DeleteFlag=1;  
                }
            }
            if(DeleteFlag==1)
            {
                cout<<"\n********************************************"<<endl;
                cout<<"***             BOOK NOT FOUND           ***"<<endl;
                cout<<"********************************************"<<endl<<endl;
                DeleteFlag=0;
            }    
        }
        else
        {
            cout<<"\n********************************************"<<endl;
            cout<<"***              RECORD EMPTY            ***"<<endl;
            cout<<"********************************************"<<endl<<endl;
        }

        cout<<"\n\nDO YOU WANT DELETE MORE BOOKS(Y/N)?"<<endl;
        char replay;
        cin>>replay;
        if(replay=='n'||replay=='N')
        {
            break;
        }
        else if(replay=='y'||replay=='Y')
        {
            continue;
        }
        else
        {
            cout<<"\n********************************************"<<endl;
            cout<<"***              INVALID ENTRY           ***"<<endl;
            cout<<"********************************************"<<endl<<endl;
            break;
        }    
    }
}




void SearchBooks() // ALMA PATHROSE
{
    int op,SFlag=0;
    char cs;
    string SBookID,SBookName;
    while(1==1)
    {
        system("cls");
        cout << "   ***********************************************************************\n";
        cout << "   ***********************************************************************\n";
        cout << "   ***********                                                 ***********\n";
        cout << "   |||||||||||           SELECT AN OPTION FOR SEARCH           |||||||||||\n";
        cout << "   ***********                                                 ***********\n";
        cout << "   ***********************************************************************\n";
        cout << "   ***********************************************************************\n";
        cout << "   ***********                                                 ***********\n";
        cout << "   |||||||||||         1.  BY BOOK ID                          |||||||||||\n";
        cout << "   ***********                                                 ***********\n";
        cout << "   |||||||||||         2.  BY BOOK NAME                        |||||||||||\n";
        cout << "   ***********                                                 ***********\n";
        cout << "   ***********************************************************************\n";
        cout << "                  ENTER AN OPTION NUMBER  : ";
        cin >> op;
        cout << "   ***********************************************************************\n";
        cout << "   ***********************************************************************\n\n";
        
        switch (op)
        {
            case 1: cout<<"Enter a Book ID :";
                    cin>>SBookID;
                    if(BookCount>0)
                    {
                        for (int i=0;i<BookCount;i++)
                        {
                            if(SBookID==BookDetails[i][0])
                            {
                                cout<<"\n\n********************************************"<<endl;
                                cout<<"               BOOK DETAILS"<<endl;
                                cout<<"********************************************"<<endl<<endl;
                                cout<<"      BOOK ID         :"<<BookDetails[i][0]<<endl<<endl;
                                cout<<"      BOOK NAME       :"<<BookDetails[i][1]<<endl<<endl;
                                cout<<"      BOOK AUTHOR NAME:"<<BookDetails[i][2]<<endl<<endl;
                                cout<<"      BOOK CATEGORY   :"<<BookDetails[i][3]<<endl<<endl;
                                cout<<"      BOOK ISBN       :"<<BookDetails[i][4]<<endl<<endl;
                                cout<<"      BOOK QUANTITY   :"<<BookDetails[i][5]<<endl<<endl;
                                cout<<"      BOOK PRICE      :"<<BookDetails[i][6]<<endl<<endl;
                                cout<<"      BOOK RACK NUMBER:"<<BookDetails[i][7]<<endl<<endl;
                                cout<<"********************************************\n"<<endl<<endl;
                                SFlag=1;
                                break;
                            }
                            else
                            {
                                SFlag=0;
                            }
                        }
                        if(SFlag==0)
                        {
                            cout<<"\n********************************************"<<endl;
                            cout<<"***            RECORD NOT FOUND          ***"<<endl;
                            cout<<"********************************************"<<endl<<endl;
                        }
                    }
                    else
                    {
                        cout<<"\n********************************************"<<endl;
                        cout<<"***              RECORD EMPTY            ***"<<endl;
                        cout<<"********************************************"<<endl<<endl;
                    }

                    cout << "Do you want to go for another search (Y / N) ? :";
                    cin>>cs;
                    if(cs=='y' || cs=='Y')
                    {
                        continue;
                    }
                    else if(cs=='n' || cs=='N')
                    {
                        break;
                    }
                    else
                    {
                        cout<<"\n********************************************"<<endl;
                        cout<<"***              INVALID ENTRY           ***"<<endl;
                        cout<<"********************************************"<<endl<<endl;
                        system("pause");
                        break;
                    }
            case 2: cout<<"Enter a Book Name :";
                    cin>>SBookName;
                    if(BookCount>0)
                    {
                        for (int i=0;i<BookCount;i++)
                        {
                            if(SBookName==BookDetails[i][1])
                            {
                                system("cls");
                                cout<<"\n\n********************************************"<<endl;
                                cout<<"               BOOK DETAILS"<<endl;
                                cout<<"********************************************"<<endl<<endl;
                                cout<<"      BOOK ID         :"<<BookDetails[i][0]<<endl<<endl;
                                cout<<"      BOOK NAME       :"<<BookDetails[i][1]<<endl<<endl;
                                cout<<"      BOOK AUTHOR NAME:"<<BookDetails[i][2]<<endl<<endl;
                                cout<<"      BOOK CATEGORY   :"<<BookDetails[i][3]<<endl<<endl;
                                cout<<"      BOOK ISBN       :"<<BookDetails[i][4]<<endl<<endl;
                                cout<<"      BOOK QUANTITY   :"<<BookDetails[i][5]<<endl<<endl;
                                cout<<"      BOOK PRICE      :"<<BookDetails[i][6]<<endl<<endl;
                                cout<<"      BOOK RACK NUMBER:"<<BookDetails[i][7]<<endl<<endl;
                                cout<<"********************************************\n"<<endl<<endl;
                                 SFlag=1;
                                break;
                            }
                            else
                            {
                                SFlag=0;
                            }
                        }
                    }
                    else
                    {
                        cout<<"\n********************************************"<<endl;
                        cout<<"***              RECORD EMPTY            ***"<<endl;
                        cout<<"********************************************"<<endl<<endl;
                    }

                    cout << "Do you want to go for another search (Y / N) ? :";
                    cin>>cs;
                    if(cs=='y' || cs=='Y')
                    {
                        continue;
                    }
                    else if(cs=='n' || cs=='N')
                    {
                        break;
                    }
                    else
                    {
                        cout<<"\n********************************************"<<endl;
                        cout<<"***              INVALID ENTRY           ***"<<endl;
                        cout<<"********************************************"<<endl<<endl;
                        system("pause");
                        break;
                    }
            default: cout<<"\n********************************************"<<endl;
                     cout<<"***              INVALID ENTRY           ***"<<endl;
                     cout<<"********************************************"<<endl<<endl;
                     system("pause");
                     break;
        }

        if(cs=='n'||cs=='N')
        {
            break;
        }
    }
}

                
                    



void ViewBooks() // JAY SURYAKANTH
{
    cout << "\n TEST DATA : VIEW BOOKS\n";
    system("pause");
}



void EditBooks() // JAY SURYAKANTH
{
    cout << "\n TEST DATA : EDIT BOOKS\n";
    system("pause");
}



void IssueBooks()  // NILAY
{

  while(0==0)
    {
      int issueOption, num;
        char q;
         IssueReturnDetails issueNewBook;
         Book Addnewbook;
         
        
        

         cout << "                         ENTER BOOK ID  TO ISSUE BOOK     : \a";
            cin >> Addnewbook.BookId;
            cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
             if (BookCount>0)
             {
                  for ( int i=0;i<BookCount;i++)
                  {

             
                 if(Addnewbook.BookId==BookDetails[i][0])
                 {

            
            
                      cout << "                       Enter Student ID      : \a";
                      cin >> issueNewBook.StudentID;
                      cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
                    
                     cout << "                       Enter Student Name    : \a";
                     cin >> issueNewBook.StudentName;
                     cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
                    
                  cout << "                       Enter Number of Days to issue book    : \a";
                 cin >> issueNewBook.BookTime;
                cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

               // cout << "                       Enter Return Date : \a";
              /////  cin >> issueNewBook.BookReturnDate;
              //  cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";

              //  cout << "                       Enter Book Status     : \a";
              //  cin >> issueNewBook.BookStatus;
               // cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";


                BookIssueReturn[BookCount][0]=issueNewBook.BookId;
                BookIssueReturn[BookCount][1]=issueNewBook.StudentID;
                BookIssueReturn[BookCount][2]=issueNewBook.StudentName;
                BookIssueReturn[BookCount][3]=issueNewBook.BookTime;
               // BookIssueReturn[BookCount][4]=issueNewBook.BookReturnDate;
               // BookIssueReturn[BookCount][5]=issueNewBook.BookStatus;
            

                BookCount--;

                system("cls");
                cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||                Book Issued SUCESSFULLY !        |||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||              Issued BOOK DETAILS                |||||||||||\n";
                cout << "   |||||||||||              ===================                |||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   BOOK ID           :   " <<  Addnewbook.BookId << "\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   Student Name      :   " << issueNewBook.StudentName <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   Student Id        :   " << issueNewBook.StudentID <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "                   Enter NUMBER OF DAYS TO ISSUE THIS BOOK  :    " << issueNewBook.BookTime <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
              ///  cout << "                   Enter Return Date :     " << issueNewBook.BookReturnDate <<"\n";
               // cout << "   |||||||||||                                                 |||||||||||\n";
               // cout << "                   Enter Book Status :   " << issueNewBook.BookStatus <<"\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||                                                 |||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n \a";

             }else{
                     cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                     cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                     cout << "   |||||||||||                                                 |||||||||||\n";
                     cout << "   |||||||||||                  Enter Valid Book ID            |||||||||||\n";
                     cout << "   |||||||||||                                                 |||||||||||\n";
                     cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                     cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n \a";
             
                  }
                           
                            
               }   
               
            }else{
                    cout<<"\n********************************************"<<endl;
                       cout<<"***              RECORD EMPTY            ***"<<endl;
                        cout<<"********************************************"<<endl<<endl;
                        
                 } 
                  cout<<"\n\n    Do you to issue more Books? ( Y / N ) : ";
                   cin>>q;

                  if(q=='Y' || q=='y')
                    {
                  continue;
                   }
                  else if(q=='N' || q=='n')
                   {
                  break;
                    }
                  
            
           
                





    }


}



void ReturnBooks()  // NILAY
{
    {
    string issueBId;
    int x,y,z,issueflag;
    char n;
    
     while(1==1)
    {
        system("cls");
        cout << "\nEnter Book ID To Return Book: \a ";
        cin>>issueBId;

        if(BookCount>0)
        {
            for (x=0;x<BookCount;x++)
            {
                if(issueBId==BookDetails[x][0])
                {
                
                                      
                        BookCount++;
                        cout<<"\n********************************************"<<endl;
                        cout<<"***          Returned  SUCESSFULLY        ***"<<endl;
                        cout<<"********************************************"<<endl<<endl;
                    
                        issueflag=0;
                        break;
                   
                            
                }
                else
                {
                    issueflag=1;  
                }
            }
            if(issueflag==1)
            {
                cout<<"\n********************************************"<<endl;
                cout<<"***             BOOK NOT FOUND           ***"<<endl;
                cout<<"********************************************"<<endl<<endl;
                issueflag=0;
            }    
        }
        else
        {
            cout<<"\n********************************************"<<endl;
            cout<<"***              RECORD EMPTY            ***"<<endl;
            cout<<"********************************************"<<endl<<endl;
        }

        cout<<"\n\nDo you want Return More Book(Y/N)? \a"<<endl;
        char replay;
        cin>>replay;
        if(replay=='n'||replay=='N')
        {
            break;
        }
        else if(replay=='y'||replay=='Y')
        {
            continue;
        }
        else
        {
            cout<<"\n********************************************"<<endl;
            cout<<"***              INVALID ENTRY           ***"<<endl;
            cout<<"********************************************"<<endl<<endl;
            break;
        }    
    }
}
    
}


void closeapplication()             // BIBIN LUKOSE : Option used to exit programme.
{
    system("CLS");
    cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||                THANKS AND REGARDS               |||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||               GROUP NO : 10                     |||||||||||\n";
    cout << "   |||||||||||               =============                     |||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||     BIBIN LUKOSE                                |||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";              
    cout << "   |||||||||||     ALMA PATHROSE                               |||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||     NILAY VIKLESHBHAI PATEL                     |||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||     JAY SURYAKANT PATEL                         |||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n\n";

    system("pause");
}


int main() // BIBIN LUKOSE : Main function for the library management sytem.
{
    int option;
    //string BookDetails[100][8];
    //string BookIssueReturn[100][6];

    while(1 == 1)       //  Displaying different menu options.
    {
        system("CLS");
        cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||             LIBRARY MANAGEMENT SYSTEM           |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||     1  :   ADD BOOKS                            |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";              
        cout << "   |||||||||||     2  :   DELETE BOOKS                         |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||     3  :   SEARCH BOOKS                         |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||     4  :   VIEW BOOK LIST                       |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||     5  :   EDIT BOOK RECORDS                    |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||     6  :   ISSUE BOOKS                          |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||     7  :   RETURN  BOOKS                        |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||     8  :   Exit Application....                 |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";

        cout << "\n                           ENTER THE OPTION : ";
        cin >> option;
        cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
        cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        

        switch (option)                     //  Different function calling for different process.
        {
            case 1 : AddBooks();
                     break;
            case 2 : DeleteBooks();
                     break;
            case 3 : SearchBooks();
                     break;
            case 4 : ViewBooks();
                     break;
            case 5 : EditBooks();
                     break;
            case 6 : IssueBooks();
                     break;
            case 7 : ReturnBooks();
                     break;
            case 8 : closeapplication();
                     return 0;
                    
            default : cout << "\n\n\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                      cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                      cout << "   |||||||||||                                                 |||||||||||\n";
                      cout << "   |||||||||||         YOU ENTERED WRONG INPUT ! . . .         |||||||||||\n";
                      cout << "   |||||||||||                                                 |||||||||||\n";
                      cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
                      cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n";
                      system("pause");    
                      continue;       
        }
        
    }

    return 0;
}
