#include <iostream>
using namespace std;

int main()
{
    int m, top = -1, item;
    cout << "Enter Stack size: ";
    cin >> m;
    int stack[m];

for(int i=0;i<m;i++){
if (top < m - 1)
    {

            top++;
            cin >> item;
            stack[top] = item;

    }
    else
    {

        cout << endl;
        cout << "Not enough memory!";
        break;
    }
}
for (int i = 0; i < m; i++)
        {
            cout << stack[i] << " ";
        }



}

