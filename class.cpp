#include <iostream>
using namespace std;

class Lingkaran
{
public:
    double jariJari;
    double luasLingkaran;

    void inputData()
    {
        cout << "Jari-jari : " << endl;
        cin >> jariJari;
    }
    double hitungLuas()
    {
        return 3.14 * jariJari * jariJari;
    }
    
};

int main()
{
    Lingkaran bulet;
    bulet.inputData();
    cout << endl;
    cout << "Luasnya adalah : " << bulet.hitungLuas() << endl;
    cout << endl;

}