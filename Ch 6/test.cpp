#include <iostream>
#include <iomanip>
using namespace std;
class item
{
    int item_code, item_rate, quantity, amount;
    public:
    void get()
    {
        cin >> item_code;
        cin >> item_rate;
        cin >> quantity;
    }
    void amt()
    {
        amount = item_rate*quantity;
    }
    void print()
    {
        cout << item_code << amount << endl;
    }
};

int main()
{
    item *it[2],obj[2];
    //it = new (item*2)

    for(int i=0;i<2;i++)
    {
        it[i]=&obj[i];
        it[i]->get();
        it[i]->amt();
    }
    for(int i=0;i<2;i++)
    {
        it[i]->print();
    }
}