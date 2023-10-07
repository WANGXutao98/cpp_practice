#include <iostream>
using namespace std;

#define MAX 1000

struct Person
{
    string m_Name;  // 姓名
    int m_Sex;      // 性别：1男 2女
    int m_Age;      // 年龄
    string m_Phone; // 电话
    string m_Addr;  // 住址
};

struct Addressbook
{
    string name;
    struct Person personArray[MAX];
    int m_size;
};

void addPerson(Addressbook *abs)
{
    if (abs->m_size >= MAX)
    {
        cout << "address book is full" << endl;
    }
    string name;
    cout << "please enter name: " << endl;
    cin >> name;
    abs->personArray[abs->m_size].m_Name = name;

    cout << "请输入性别：" << endl;
    cout << "1 -- 男" << endl;
    cout << "2 -- 女" << endl;

    int sex = 0;
    while (true)
    {
        cin >> sex;
        if (sex == 1 || sex == 2)
        {
            abs->personArray[abs->m_size].m_Sex = sex;
            break;
        }
    }
    // 联系电话
    cout << "请输入联系电话：" << endl;
    string phone = "";
    cin >> phone;
    abs->personArray[abs->m_size].m_Phone = phone;

    // 家庭住址
    cout << "请输入家庭住址：" << endl;
    string address;
    cin >> address;
    abs->personArray[abs->m_size].m_Addr = address;

    abs->m_size++;
    cout << "添加成功" << endl;
}

void showPerson(Addressbook *abs)
{
    if (abs->m_size == 0)
    {
        cout << "Address book is empty" << endl;
    }
    int len = abs->m_size;
    for (int i = 0; i < len; i++)
    {
        cout << "name is: " << abs->personArray[i].m_Name << endl;
        cout << "age is: " << abs->personArray[i].m_Sex << endl;
        cout << "name is: " << abs->personArray[i].m_Age << endl;
        cout << "name is: " << abs->personArray[i].m_Phone << endl;
    }
}

int isExist(Addressbook *abs, string name)
{

    int len = abs->m_size;
    for (int i = 0; i < len; i++)
    {
        if (name == abs->personArray[i].m_Name)
        {
            return i;
        }
    }
    return -1;
}

void deletePerson(Addressbook *abs)
{
    cout << "请输入您要删除的联系人" << endl;
    string name;
    cin >> name;

    if (abs->m_size == 0)
    {
        cout << "Address book is empty" << endl;
    }
    int result = isExist(abs, name);
    if (result != -1)
    {
        cout << "name is: " << abs->personArray[result].m_Name << endl;
        cout << "age is: " << abs->personArray[result].m_Sex << endl;
        cout << "name is: " << abs->personArray[result].m_Age << endl;
        cout << "name is: " << abs->personArray[result].m_Phone << endl;
    }
    else
    {
        cout << "not exist" << endl;
    }
}

void findPerson(Addressbook *abs)
{
    cout << "请输入您要查找的联系人" << endl;
    string name;
    cin >> name;

    if (abs->m_size == 0)
    {
        cout << "Address book is empty" << endl;
    }
    int result = isExist(abs, name);
    if (result != -1)
    {
        for (int i = result; i < abs->m_size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_size--;
    }
    else
    {
        cout << "not exist" << endl;
    }
}

void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

int main()
{
    Addressbook adbook;
    adbook.m_size = 0;

    int select = 0;

    while (true)
    {
        showMenu();

        cin >> select;

        switch (select)
        {
        case 1: // 添加联系人
            addPerson(&adbook);

            break;
        case 2: // 显示联系人
            showPerson(&adbook);
            break;
        case 3: // 删除联系人
            break;
        case 4: // 查找联系人
            break;
        case 5: // 修改联系人
            break;
        case 6: // 清空联系人
            break;
        case 0: // 退出通讯录
            cout << "欢迎下次使用" << endl;
            system("pause");
            return 0;
            break;
        default:
            break;
        }
    }
}