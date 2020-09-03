#include <iostream>
#include<cstring>
using namespace std;

class B_class{
protected:
        char author[80];
public:
    void put_author(const char *s)
        { strcpy(author, s); }
    virtual void show_author()=0;
};

class D_class:public B_class{
private:
    char title[80];
public:
    void put_title(const char *num) {
        strcpy(title, num);
    }
    void show_author() {
        cout << "author: ";
        cout << author << "\n";
        cout << "Title: ";
        cout << title << "\n";
    }
};
    

int main(int argc, const char * argv[])
{
    
    D_class *p;
    D_class D_ob;

    p = &D_ob;
    p->put_author("William Shakespeare");
    p->put_title("Hamlet");
    D_ob.show_author();
    cout << "\n";

    return 0;
}

template <class QType> class queue{
private:
    int size;
    QType *arr;
    
public:

    queue(int n){size=n;arr=new QType[size];};
    void input();
    QType max();
};

template <class QType> void queue <QType>::input()
{
    for (int i=0;i<size;i++)
        cin>>arr[i];
}

template <class QType> QType queue<QType>::max()
{
    QType max=arr[0];
    for (int i=0;i<size;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main()
{
    int size;
    cout<<"입력할 정수의 개수:";
    cin>>size;
    queue<int> ob1(size);
    
    cout<<"정수를 "<<size<<"개 입력하세요.";
    ob1.input();
    cout<<"<<최대값>> "<<ob1.max()<<"\n";
    
    cout<<"입력할 정수의 개수:";
    cin>>size;
    queue<float> ob2(size);
    
    cout<<"정수를 "<<size<<"개 입력하세요.";
    ob2.input();
    cout<<"<<최대값>> "<< ob2.max();
    
    return 0;
}
