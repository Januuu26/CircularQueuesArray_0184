#include <iostream>
using namespace std;

class Queues
{
private:
    static const int max = 3;
    int FRONT, REAR;
    int queue_array[max];

public:
    Queues()
    {
        FRONT = -1;
        REAR = -1;
    }

    void insert()
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << endl;

    // cek apakah antrian kosong
        if (FRONT == -1)
        {
            FRONT = 0;
            REAR = 0;
        }
        else
        {
            // jika rear berada di posisi terakhir array, kembali ke awal array
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }

        queue_array[REAR] = num;
    }

    void remove()
    {
       

int main()
{
    Queues q;
    char ch;

    while (true)
    {
        try
        {
            cout << "Menu" << endl;
            cout << "1. Implement Insert operation" << endl;
            cout << "2. Implement Delete Operation" << endl;
            cout << "3. Display values" << endl;
            cout << "4. Exit" << endl;

            cout << "Enter your choice(1-4): ";
            cin >> ch;
            cout << endl;

            switch (ch)
            {
            case '1':
            {
                q.insert();
                break;
            }

            case '2':
            {
                q.remove();
                break;
            }

            case '3':
            {
                q.display();
                break;
            }

            case '4':
            {
                return 0;
            }

            default:
            {
                cout << "Invalid option!!!" << endl;
                break;
            }
            }
        }

        catch (exception &ex)
        {
            cout << "Check for the values entered" << endl;
        }
    }

    return 0;
}