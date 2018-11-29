#include <iostream> // OUT LINE DONE BY - BIBIN LUKOSE
#include <string>

using namespace std;

string BookDetails[100][8];
string BookIssueReturn[100][6];
int BookCount=0;



/*

struct Date
{
    int day;
    int month;
    int year;
};

*/

struct Book
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

/*
struct IssueReturnDetails
{
    int StudentID;
    string StudentName;
    int BookId;
    date BookIssueDate;
    date BookReturnDate;
    bool BookStatus;
};

*/






void AddBooks() // BIBIN LUKOSE
{
    while (1 == 1)
    {
        int CatOption, Flag=0;
        char MoreData;
        Book AddNewBook {"0","0","0","0","0","0","0","0"};

        if(BookCount>=0 && BookCount<100)
        {
            system("cls");
            cout << "Enter book category :\n";
            cout << "   1.  Computer \n";
            cout << "   2.  Electronics \n";
            cout << "   3.  Electricals \n";
            cout << "   4.  Civil \n";
            cout << "   5.  Mechanical \n";
            cout << "Enter the option number : ";
            cin >> CatOption;

            switch (CatOption)
            {
                case 1  :   AddNewBook.BookCategory="Computer";
                            AddNewBook.BookRackNo="1";
                            break;
                case 2  :   AddNewBook.BookCategory="Electronics";
                            AddNewBook.BookRackNo="2";
                            break;
                case 3  :   AddNewBook.BookCategory="Electricals";
                            AddNewBook.BookRackNo="3";
                            break;
                case 4  :   AddNewBook.BookCategory="Civil";
                            AddNewBook.BookRackNo="4";
                            break;
                case 5  :   AddNewBook.BookCategory="Mechanical";
                            AddNewBook.BookRackNo="5";
                            break;
                default :   cout << "You entered wrong input....\n";
                            continue;
            }

            cout << "Enter book ID : ";
            cin >> AddNewBook.BookId;

            for(int i=0; i<BookCount;i++)
            {
                if(AddNewBook.BookId==BookDetails[i][0])
                {
                    cout << "\n\nThe Book ID is already exist! \n\nYou can update the book details from the main menu ! \n\n";
                    Flag=1;
                    break;
                }
            }
                
            if(Flag==0)
            {
                cout << "Enter book name : ";
                cin >> AddNewBook.BookName;
                    
                cout << "Enter book author : ";
                cin >> AddNewBook.BookAuthor;
                    
                cout << "Enter book ISBN : ";
                cin >> AddNewBook.BookISBN;

                cout << "Enter book Quantity : ";
                cin >> AddNewBook.BookQuantity;

                cout << "Enter book Price : ";
                cin >> AddNewBook.BookPrice;


                BookDetails[BookCount][0]=AddNewBook.BookId;
                BookDetails[BookCount][1]=AddNewBook.BookName;
                BookDetails[BookCount][2]=AddNewBook.BookAuthor;
                BookDetails[BookCount][3]=AddNewBook.BookCategory;
                BookDetails[BookCount][4]=AddNewBook.BookISBN;
                BookDetails[BookCount][5]=AddNewBook.BookQuantity;
                BookDetails[BookCount][6]=AddNewBook.BookPrice;
                BookDetails[BookCount][7]=AddNewBook.BookRackNo;

                BookCount++;

                }
                
        }
        else
        {
            cout<<"\n\nMemmory Full ! \n\n";
        }


        cout<<"\n\n Do you want to enter more book details ! (y/n)";
        cin>>MoreData;

        if(MoreData=='Y' || MoreData=='y')
        {
            continue;
        }
        else
        {
            break;
        }
    }   
    
    system("pause");

}





void DeleteBooks() //Alma Pathrose
{
    string DelBId;
    char a;
    int i,j,k;
    int DeleteFlag=0;
    while(1==1)
    {
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
                    cout<<"********************************************"<<endl;
                    cout<<"      BOOK ID         :"<<BookDetails[i][0]<<endl;
                    cout<<"      BOOK NAME       :"<<BookDetails[i][1]<<endl;
                    cout<<"      BOOK AUTHOR NAME:"<<BookDetails[i][2]<<endl;
                    cout<<"      BOOK CATEGORY   :"<<BookDetails[i][3]<<endl;
                    cout<<"      BOOK ISBN       :"<<BookDetails[i][4]<<endl;
                    cout<<"      BOOK QUANTITY   :"<<BookDetails[i][5]<<endl;
                    cout<<"      BOOK PRICE      :"<<BookDetails[i][6]<<endl;
                    cout<<"      BOOK RACK NUMBER:"<<BookDetails[i][7]<<endl;
                    cout<<"********************************************\n"<<endl;
                    cout<<"\n ARE YOU SURE TO DELETE THIS BOOK RECORD(Y/N)? \n";
                   
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
                        cout<<"\n\nDELETED SUCESSFULLY"<<endl;
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
                        cout<<"INVALID ENTRY!"<<endl;
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
                cout<<"\n\nTHERE IS NO BOOK UNDER THIS BOOK ID!\n\n";
                DeleteFlag=0;
            }    
        }
        else
        {
            cout<<"\n\nEMPTY!\n\n";
        }

        cout<<"DO YOU WANT DELETE MORE BOOKS(Y/N)?"<<endl;
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
            cout<<"\nINVALID ENTRY!"<<endl;  
            break;
        }    
    }
}





void SearchBooks() // ALMA PATHROSE
{
    cout << "\n TEST DATA : SEARCH BOOKS\n";

    
    system("pause");
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
    cout << "\n TEST DATA : ISSUE BOOKS\n";

    
    system("pause");
}







void ReturnBooks()  // NILAY
{
    cout << "\n TEST DATA : RETURN BOOKS\n";

    
    system("pause");
}





void closeapplication() // BIBIN LUKOSE
{
    system("CLS");
    cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||                THANKS AND REGARDS               |||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||";
    cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout << "   |||||||||||                                                 |||||||||||\n";
    cout << "   |||||||||||               GROUP NO : 10                     |||||||||||\n";
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
    cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";

    system("pause");
}





int main() // BIBIN LUKOSE
{
    int option;
    string BookDetails[100][8];
    string BookIssueReturn[100][6];



    while(1 == 1)
    {
        system("CLS");

        cout << "\n\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||\n";
        cout << "   |||||||||||             LIBRARY MANAGEMENT SYSTEM           |||||||||||\n";
        cout << "   |||||||||||                                                 |||||||||||";
        cout << "\n   |||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
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
        

        switch (option)
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
                    
            default : cout << "You Entered Wrong Input.... \n"; 
                      system("pause");    
                      continue;       
        }
        
    }

    return 0;
}