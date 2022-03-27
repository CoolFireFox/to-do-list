#include <iostream>
#include <stdio.h>

using namespace std;

struct delo
{
    string name;
    int prior;
    string ops;
    string date;
};

void deletDelo(delo* mas, int size, int index)
{
  bool b = 0;
  cout << "�� ����� ������ �������:  " << mas[index].name; cin >> b;
  if (b)
  {
      mas[index].name = '/0';
  }
}


void inputDelo(delo& d)
{
    cout << "������� �������� �������: "; 
    cin >> d.name;
    cout << "������� ��������� ������� (�� 1 �� 10 ��� 1 ��������� ���������!):";
    cin >> d.prior;
    cout << "�������  �������� �������: "; 
    cin >> d.ops;
    cout << "�������  ���� ������� � ������� ���� /������/����� ";
    cin >> d.date;


}

void editDelo(delo* mas, int size, int index)
{
    if (index > size)
    {
        cout << "������ ������� �� �������" << endl;
        return;
    }
    cout << "������� ����� ���:" << endl;
    cin >> mas[index].name;
    cout << "������� ����� ���������:" << endl;
    cin >> mas[index].prior;
    cout << "������� ����� ��������:" << endl;
    cin >> mas[index].ops;
    cout << "������� ����� ����:  � ������� ���� /������/�����  00/00/00 " << endl;  
    cin >> mas[index].date;
}

int findDelo(delo* mas, int size, int prior, string name = "", string ops = "", string date = "")
{
    for (int i = 0; i < size; i++)
    {
        if (mas[i].name == name)
        {
            return i;
        }
        else if (mas[i].prior == prior)
        {
            return i;
        }
        else if (mas[i].ops == ops)
        {
            return i;
        }
        else if (mas[i].date == date)
        {
            return i;
        }
    }
    cout << "����� ������� �����������! " << endl;
    return -1;
}

void outputDelo(delo* date)
{
    string date1 = "";
    int a = 0;
    int d = 0, n = 0, m = 0;
    cout << "������ ���������� ��� ���� �� ����, �� ������ ��� �� �����? ������� �� 1 �� 3:"; 
    cin >> a;
    if (a > 3)
    {
        cout << "��� ������ ���������"  "\n" << "�������� ��� ���"; cin >> a;

    }
    else if (a == 1)
    {
        //getline(date, date1);


    }
}

void sortDelo(delo* mas, int size, int prior, string date = "")
{

}
int main()
{
    setlocale(LC_ALL, "RU");
   int d = 0, t = 0;

    int name = 1;
    int prior = 2;
    int  ops = 3;
    int date = 4;
    short menu = -1;
    do
    {
        cout << "MENU";
        cout << "1 - ������ ����� ������;" << endl;
        cout << "2 - ������� ������;" << endl;
        cout << "3 - ������������� �������;" << endl;
        cout << "4 - ����� �������;" << endl;
        cout << "5 - ������� �� ����� �������;" << endl;
        cout << "6 - ������������� �������;" << endl;
        cout << "������ ����� ����: " << endl;
        cin >> menu;
        
        switch (menu)
        {
        case 1:

            inputDelo();

            break;
        case 2:
            deletDelo();

            break;
        case 3:
            editDelo();
        case 4:
            findDelo();

        case 5:
            outputDelo();
        case 6:
            sortDelo();




        }


    } while ();



    return 0;
}