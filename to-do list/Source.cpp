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
  cout << "вы точно хотите удалить:  " << mas[index].name; cin >> b;
  if (b)
  {
      mas[index].name = '/0';
  }
}


void inputDelo(delo& d)
{
    cout << "¬ведите название задани€: "; 
    cin >> d.name;
    cout << "¬ведите приоритет задани€ (от 1 до 10 где 1 наивысший приоритет!):";
    cin >> d.prior;
    cout << "¬ведите  описание задани€: "; 
    cin >> d.ops;
    cout << "¬ведите  дату задани€ в формате день /недел€/мес€ц ";
    cin >> d.date;


}

void editDelo(delo* mas, int size, int index)
{
    if (index > size)
    {
        cout << "такого задани€ не введено" << endl;
        return;
    }
    cout << "¬ведите новое им€:" << endl;
    cin >> mas[index].name;
    cout << "введите новый приоритет:" << endl;
    cin >> mas[index].prior;
    cout << "¬ведите новое описание:" << endl;
    cin >> mas[index].ops;
    cout << "¬ведите новую дату:  в формате день /недел€/мес€ц  00/00/00 " << endl;  
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
    cout << "“акое задание отсутствует! " << endl;
    return -1;
}

void outputDelo(delo* date)
{
    string date1 = "";
    int a = 0;
    int d = 0, n = 0, m = 0;
    cout << "хотите отобразить все дела на день, на неделю или на мес€ц? нажмите от 1 до 3:"; 
    cin >> a;
    if (a > 3)
    {
        cout << "нет такого параметра"  "\n" << "попробуй еще раз"; cin >> a;

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
        cout << "1 - ¬вести новую задачу;" << endl;
        cout << "2 - ”далить задачу;" << endl;
        cout << "3 - редактировать задание;" << endl;
        cout << "4 - найти задание;" << endl;
        cout << "5 - вывести на экран задани€;" << endl;
        cout << "6 - отсортировать задани€;" << endl;
        cout << "ќбер≥ть пункт меню: " << endl;
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