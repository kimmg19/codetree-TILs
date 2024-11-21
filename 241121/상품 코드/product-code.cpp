#include <iostream>
#include <string>

using namespace std;

class Product{
    public :
    string name;
    int code;
    Product(){};
    Product(string name,int code){
        this->name=name;
        this->code=code;
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    Product product_1;
    Product product_2;
    product_1=Product("codetree",50);
    string str;
    int a;
    cin>>str>>a;
    product_2=Product(str,a);
    cout<<"product "<<product_1.code<<" is "<<product_1.name<<endl;
    cout<<"product "<<product_2.code<<" is "<<product_2.name;


    return 0;
}