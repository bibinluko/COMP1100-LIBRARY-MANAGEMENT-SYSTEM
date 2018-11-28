#include <iostream> // OUT LINE DONE BY - BIBIN LUKOSE
#include <string>

using namespace std;

struct date
{
    int day;
    int month;
    int year;
};

struct book
{
    int BookId;
    string BookName;
    string BookAuthor;
    int BookISBN;
    string BookCategory;
    int BookQuantity;
    int BookPrice;
    int BookRackNo;
};

struct IssueReturnDetails
{
    int StudentID;
    string StudentName;
    int BookId;
    date BookIssueDate;
    date BookReturnDate;
    bool BookStatus;
};








void AddBooks() // BIBIN LUKOSE
{
    cout << "\n TEST DATA : ADD BOOKS\n";


    system("pause");
}





void DeleteBooks() // ALMA PATHROSE
{
    cout << "\n TEST DATA : DELETE BOOKS\n";

    
    system("pause");
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
    int loop=1, option;
    string BookDetails[100][8];
    string BookIssueReturn[100][6];



    while(loop==1)
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
                      break;       
        }
        
    }

    return 0;
}