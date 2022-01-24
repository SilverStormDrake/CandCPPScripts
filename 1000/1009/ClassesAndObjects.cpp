#include <iostream>

using namespace std;

class Book{
    private:
        string _title;
        string _author;
        int _pages;
    public:
        Book(string aTitle, string aAuthor, int aPages){
            _title = aTitle;
            _author = aAuthor;
            _pages = aPages;
        }
        Book(){
            _title = "No Title";
            _author = "No Author";
            _pages = 0;
        }
    
        void setTitle(string title){
            _title = title;
        }
        string getTitle(){
            return _title;
        }

        void setAuthor(string author){
            _author = author;
        }
        string getAuthor(){
            return _author;
        }

        void setPages(int pages){
            _pages = pages;
        }
        int getPages(){
            return _pages;
        }

        bool itsBig(){
            if(_pages >= 150){
                cout << getPages() << endl;
                return true;
            } else {
                cout << getPages() << endl;
                return false;
            }
        }
};

class ForeignBook : public Book{
    private:
        string _title;
        string _author;
        int _pages;
        string _language;
    public:
        ForeignBook(string aTitle, string aAuthor, int aPages, string aLanguage){
            _title = aTitle;
            _author = aAuthor;
            _pages = aPages;
            _language = aLanguage;
        }

        void setLanguage(string language){
            _language = language;
        }
        string getLanguage(){
            return _language;
        }

};

int main(){

    Book book1("1984", "George Orwell", 200);
    ForeignBook book2("O Espadachim de Carvão", "Afonso Solano", 255, "Portuguese");
    cout << book1.itsBig() << endl;
    cout << book2.itsBig() << endl;

    return 0;
}